#!/usr/bin/env python3
"""Resolve a published firmware release and smoke-test the combined Pages site."""
import argparse
import datetime
import hashlib
import json
import os
import subprocess
import time
import urllib.error
import urllib.parse
import urllib.request
from pathlib import Path


def requested_tag(release_tag="", dispatch_tag="", ref_type="", ref_name=""):
    return (release_tag or dispatch_tag or
            (ref_name.removeprefix("updates-")
             if ref_type == "tag" and ref_name.startswith("updates-") else ""))


def asset_names(release):
    return {asset["name"] for asset in release.get("assets", [])}


def resolve_release(releases, release_tag="", dispatch_tag="", ref_type="", ref_name=""):
    """Pure selection over GitHub REST release objects; prereleases are eligible."""
    tag = requested_tag(release_tag, dispatch_tag, ref_type, ref_name)
    if tag:
        candidates = [release for release in releases if release["tag_name"] == tag]
        if not candidates:
            raise ValueError("找不到指定 Release：" + tag)
        release = candidates[0]
    else:
        candidates = [release for release in releases
                      if not release.get("draft") and release.get("published_at")
                      and "matter.ota" in asset_names(release)]
        if not candidates:
            raise ValueError("沒有已發布且包含 matter.ota 的 Release")
        release = max(candidates, key=lambda item: datetime.datetime.fromisoformat(
            item["published_at"].replace("Z", "+00:00")))
    if release.get("draft") or not release.get("published_at"):
        raise ValueError("必須先人工發布 Release，才能部署 Pages")
    if not {"matter.ota", "matter.json"} <= asset_names(release):
        raise ValueError("Release 缺少 matter.ota／matter.json")
    return release["tag_name"]


def github_releases(repository, tag):
    endpoint = "repos/" + repository + "/releases"
    if tag:
        result = subprocess.run(["gh", "api", endpoint + "/tags/" +
                                 urllib.parse.quote(tag, safe="")], check=True,
                                capture_output=True, text=True)
        return [json.loads(result.stdout)]
    result = subprocess.run(["gh", "api", "--paginate", "--slurp", endpoint + "?per_page=100"],
                            check=True, capture_output=True, text=True)
    return [release for page in json.loads(result.stdout) for release in page]


def smoke_once(page_url, site, timeout=15, deadline=None):
    def fetch(url):
        remaining = timeout if deadline is None else min(timeout, deadline - time.monotonic())
        if remaining <= 0:
            raise TimeoutError("Pages smoke 逾時")
        return urllib.request.urlopen(url, timeout=remaining)

    base = page_url.rstrip("/") + "/"
    # A unique query string bypasses the Pages CDN copy cached before this deploy.
    bust = "?smoke=" + str(time.time_ns())
    expected = (Path(site) / "updates/index.json").read_bytes()
    with fetch(base + "updates/index.json" + bust) as response:
        if response.status != 200 or response.read() != expected:
            raise ValueError("線上 index.json 與部署內容不同")
    catalog = json.loads(expected)
    matter = [entry for entry in catalog["updates"] if entry["variant"] == "matter"]
    if len(matter) != 1:
        raise ValueError("索引必須包含一筆 matter 更新")
    with fetch(base + "updates/matter.ota" + bust) as response:
        if response.status != 200 or response.headers.get("Access-Control-Allow-Origin") != "*":
            raise ValueError("matter.ota 缺少 HTTP 200／Access-Control-Allow-Origin: *")
        if hashlib.sha256(response.read()).hexdigest() != matter[0]["sha256"]:
            raise ValueError("線上 matter.ota SHA-256 不符")
    for path in ("", "en/"):
        with fetch(base + path + bust) as response:
            if response.status != 200:
                raise ValueError("頁面不是 HTTP 200：" + path)


def smoke(page_url, site, duration=180, interval=5):
    deadline = time.monotonic() + duration
    while True:
        try:
            smoke_once(page_url, site, deadline=deadline)
            print("Pages smoke: catalog bytes, OTA SHA-256/CORS, / and /en/ passed")
            return
        except (OSError, ValueError, urllib.error.URLError) as error:
            remaining = deadline - time.monotonic()
            if remaining <= 0:
                raise RuntimeError("Pages smoke 逾時：" + str(error)) from error
            print("等待 Pages：" + str(error), flush=True)
            time.sleep(min(interval, remaining))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    commands = parser.add_subparsers(dest="command", required=True)
    resolve = commands.add_parser("resolve")
    resolve.add_argument("--repository", default=os.environ.get("GH_REPO") or
                         os.environ.get("GITHUB_REPOSITORY"))
    resolve.add_argument("--release-tag", default="")
    resolve.add_argument("--dispatch-tag", default="")
    resolve.add_argument("--ref-type", default="")
    resolve.add_argument("--ref-name", default="")
    check = commands.add_parser("smoke")
    check.add_argument("page_url")
    check.add_argument("site", type=Path)
    args = parser.parse_args()
    if args.command == "smoke":
        smoke(args.page_url, args.site)
    else:
        if not args.repository:
            parser.error("resolve 需要 --repository 或 GH_REPO")
        selection = {key: getattr(args, key) for key in
                     ("release_tag", "dispatch_tag", "ref_type", "ref_name")}
        try:
            releases = github_releases(args.repository, requested_tag(**selection))
            print(resolve_release(releases, **selection))
        except ValueError as error:
            parser.exit(1, str(error) + "\n")


if __name__ == "__main__":
    main()
