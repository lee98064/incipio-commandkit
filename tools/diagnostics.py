#!/usr/bin/env python3
"""Authenticated fixed report download. No remote command or upload endpoint."""
import argparse
import hashlib
import hmac
import http.client
import json
import re
import sys
from pathlib import Path
from fwlib import atomic_write, require, write_json, profile_diag_key


def fetch(host, keyfile, port=18080):
    key = profile_diag_key(keyfile)
    def request(path, headers=None, limit=96 * 1024):
        client = http.client.HTTPConnection(host, port, timeout=20)
        try:
            client.request("GET", path, headers=headers or {})
            response = client.getresponse()
            data = response.read(limit + 1)
            require(len(data) <= limit, "報告超出大小上限")
            require(response.status == 200, "HTTP " + str(response.status))
            return data
        finally:
            client.close()
    nonce = request("/challenge", limit=64)
    require(re.fullmatch(b"[0-9a-f]{64}", nonce), "challenge 格式不符")
    signature = hmac.new(key, b"GET /diagnostics\n" + nonce, hashlib.sha256).hexdigest()
    return request("/diagnostics", {"X-Diag-Proof": nonce.decode() + ":" + signature})


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True)
    parser.add_argument("--profile", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    data = fetch(args.host, args.profile)
    atomic_write(args.output, data)
    write_json(args.output.with_suffix(args.output.suffix + ".json"),
               {"sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data),
                "source": "user_selected_device", "contains_private_device_diagnostics": True})
    print("診斷已存於本機私人檔案；bytes=" + str(len(data)))


if __name__ == "__main__":
    try:
        main()
    except (ValueError, OSError, http.client.HTTPException) as error:
        raise SystemExit(str(error))
