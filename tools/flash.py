#!/usr/bin/env python3
"""CH341A backup / region-only write / restore. No whole-chip erase interface."""
import argparse
import json
import os
import shutil
import subprocess
from datetime import datetime, timezone
from pathlib import Path
from fwlib import (START, END, SIZE, LAYOUT, require, sha, atomic_write, write_json,
                   matching_backups, compatible, compatibility, image_checks, prepare)

CHIP = "GD25Q64(B)"


def timestamp():
    return datetime.now(timezone.utc).isoformat(timespec="seconds")


class Programmer:
    def __init__(self, executable, session):
        self.executable = str(Path(executable).resolve())
        self.session = Path(session)
        require(not self.session.exists(), "session 已存在；請選擇新的目錄")
        self.session.mkdir(parents=True, mode=0o700)
        self.record = {"started_at": timestamp(), "status": "preflight", "programmer": "ch341a_spi",
                       "chip": CHIP, "physical_boot_test": False, "commands": []}
        version = subprocess.run([self.executable, "--version"], capture_output=True, text=True)
        require(version.returncode == 0 and "v1.8.0" in version.stdout + version.stderr,
                "首版限定 flashrom v1.8.0；請依建置說明安裝")
        self.save()

    def save(self):
        write_json(self.session / "session.json", self.record, overwrite=True)

    def run(self, args, label):
        command = [self.executable, "-p", "ch341a_spi", "-c", CHIP, *map(str, args)]
        self.record["commands"].append({"label": label, "argv": command})
        self.save()
        path = self.session / (label + ".log")
        with path.open("xb") as log:
            os.chmod(path, 0o600)
            result = subprocess.run(command, stdout=log, stderr=subprocess.STDOUT, timeout=900)
        require(result.returncode == 0, label + " 失敗；已停止，請保留 session")
        return path.read_text(errors="replace")

    def probe(self):
        for index in range(3):
            log = self.run(["-VV"], f"probe-{index + 1}").lower()
            require("id1 0xc8, id2 0x4017" in log, "JEDEC 不符；拒絕操作")

    def read(self, name):
        path = self.session / (name + ".bin")
        require(not path.exists(), "備份已存在")
        self.run(["-V", "--progress", "-r", path], name)
        require(path.is_file() and path.stat().st_size == SIZE, "讀取未完成 8 MiB")
        os.chmod(path, 0o400)
        with path.open("rb") as stream:
            os.fsync(stream.fileno())
        return path

    def backups(self):
        self.probe()
        first, second = self.read("before-1"), self.read("before-2")
        before = matching_backups(first, second)
        self.record.update(status="backup_complete", backup_sha256=sha(before))
        self.save()
        return before

    def write(self, before, goal):
        require(len(before) == len(goal) == SIZE, "映像大小不符")
        require(goal[:START] == before[:START] and goal[END:] == before[END:],
                "目標變更保留區；拒絕寫入")
        image_checks(goal)
        target, layout = self.session / "exact-target.bin", self.session / "write.layout"
        atomic_write(target, goal, mode=0o400)
        atomic_write(layout, LAYOUT.encode(), mode=0o400)
        require(layout.read_text() == LAYOUT, "layout 不符")
        self.record.update(status="writing", target_sha256=sha(goal), write_range=[START, END])
        self.save()
        log = self.run(["-V", "--progress", "--layout", layout, "--include", "bank1_rootfs",
                        "-w", target], "write-and-verify")
        require("VERIFIED" in log or "identical" in log.lower(), "缺少內建校驗成功紀錄")
        after = self.read("independent-readback").read_bytes()
        require(after == goal, "獨立全片讀回不符；已停止，不自動重刷")
        self.record.update(status="write_verified_not_boot_tested", readback_sha256=sha(after),
                           protected_bytes_verified=True, finished_at=timestamp())
        self.save()

    def fail(self, error):
        self.record.update(status="failed", error=str(error), finished_at=timestamp())
        self.save()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="command", required=True)
    p = sub.add_parser("prepare", help="離線個別化；不接觸硬體")
    for name in ("backup1", "backup2", "release", "manifest", "profile", "output"):
        p.add_argument("--" + name, type=Path, required=True)
    for operation in ("backup", "write", "restore"):
        p = sub.add_parser(operation)
        p.add_argument("--flashrom", default=shutil.which("flashrom"), help="flashrom v1.8.0 路徑")
        p.add_argument("--session", type=Path, required=True)
        if operation == "write":
            p.add_argument("--image", type=Path, required=True)
            p.add_argument("--record", type=Path, required=True)
        if operation == "restore":
            p.add_argument("--backup1", type=Path, required=True)
            p.add_argument("--backup2", type=Path, required=True)
        for flag in ("mains-disconnected", "voltage-3v3", "no-other-supply"):
            p.add_argument("--" + flag, action="store_true")
    args = parser.parse_args()
    if args.command == "prepare":
        record = prepare(args.backup1, args.backup2, args.release, args.manifest, args.profile, args.output)
        print("已離線準備；尚未燒錄。目標 SHA-256：" + record["target_sha256"])
        return
    require(args.flashrom and Path(args.flashrom).is_file(), "找不到 flashrom")
    require(args.mains_disconnected and args.voltage_3v3 and args.no_other_supply,
            "先斷開市電、確認 3.3 V 及無其他供電，再提供三個條件旗標")
    # Read and validate input before starting the hardware session.
    goal = record = original = None
    if args.command == "write":
        goal, record = args.image.read_bytes(), json.loads(args.record.read_text())
        require(record.get("format") == "commandkit-private-v1" and
                record.get("status") == "prepared_offline_not_flashed" and
                record.get("write_range") == [START, END] and sha(goal) == record.get("target_sha256"),
                "私人目標映像或紀錄不符；不可直接寫入公開 Release BIN")
        image_checks(goal)
    elif args.command == "restore":
        original = matching_backups(args.backup1, args.backup2)
        image_checks(original)
    programmer = Programmer(args.flashrom, args.session)
    try:
        before = programmer.backups()
        if args.command == "backup":
            print("已保存兩份一致的完整備份；未寫入 Flash。")
            return
        if args.command == "write":
            require(sha(before) == record["backup_sha256"], "裝置已變更；請用當次備份重新準備")
            compatible(before, record["compatibility"])
        else:
            compatible(before, compatibility(original))
            goal = before[:START] + original[START:END] + before[END:]
        programmer.write(before, goal)
        print("限定 rootfs 寫入及獨立全片讀回通過。移除所有接線後才可上電；尚未驗證實機開機。")
    except BaseException as error:
        programmer.fail(error)
        raise


if __name__ == "__main__":
    try:
        main()
    except (ValueError, OSError, subprocess.SubprocessError) as error:
        raise SystemExit(str(error))
