#!/usr/bin/env python3
"""Protect release selection, verified feed deployment and post-deploy checks."""
import hashlib
import http.server
import json
import re
import subprocess
import sys
import tempfile
import threading
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import pages_site as pages


def release(tag, date="2026-11-12T09:20:33Z", draft=False,
            assets=("matter.ota", "matter.json"), prerelease=True):
    return {"tag_name": tag, "published_at": date, "draft": draft,
            "prerelease": prerelease, "assets": [{"name": name} for name in assets]}


class ReleaseSelection(unittest.TestCase):
    def setUp(self):
        self.old = release("v0.2.11-preview", date="2026-10-20T16:46:54Z")
        self.new = release("v0.3.0-preview")
        self.items = [self.old, self.new]

    def test_release_event_precedes_dispatch_and_ref(self):
        self.assertEqual(pages.resolve_release(self.items, release_tag=self.old["tag_name"],
                         dispatch_tag=self.new["tag_name"], ref_type="tag",
                         ref_name="updates-v0.3.0-preview"), self.old["tag_name"])

    def test_dispatch_precedes_updates_ref(self):
        self.assertEqual(pages.resolve_release(self.items, dispatch_tag=self.old["tag_name"],
                         ref_type="tag", ref_name="updates-v0.3.0-preview"),
                         self.old["tag_name"])

    def test_updates_tag_strips_only_its_prefix(self):
        self.assertEqual(pages.resolve_release(self.items, ref_type="tag",
                         ref_name="updates-v0.2.11-preview"), self.old["tag_name"])
        self.assertEqual(pages.requested_tag(dispatch_tag="updates-custom"), "updates-custom")

    def test_main_and_empty_dispatch_choose_newest_published_firmware(self):
        newer = "2026-12-01T00:00:00Z"
        items = [release("draft", date=newer, draft=True),
                 release("website", date=newer, assets=("site.zip",)),
                 release("unpublished", date=None), self.new, self.old]
        for args in ({}, {"ref_type": "branch", "ref_name": "main"},
                     {"dispatch_tag": ""}, {"ref_type": "tag", "ref_name": "other"}):
            self.assertEqual(pages.resolve_release(items, **args), self.new["tag_name"])

    def test_release_date_order_is_not_tag_or_api_order(self):
        items = [release("v9.0.0", date="2026-10-01T00:00:00Z"), self.new, self.old]
        self.assertEqual(pages.resolve_release(items), self.new["tag_name"])

    def test_newest_missing_metadata_fails_instead_of_falling_back(self):
        self.new["assets"] = [{"name": "matter.ota"}]
        with self.assertRaisesRegex(ValueError, "matter.json"):
            pages.resolve_release(self.items)

    def test_explicit_draft_unpublished_and_incomplete_releases_fail(self):
        for item in (release("chosen", draft=True), release("chosen", date=None),
                     release("chosen", assets=("matter.ota",)),
                     release("chosen", assets=("matter.json",))):
            with self.subTest(item=item), self.assertRaises(ValueError):
                pages.resolve_release([self.new, item], dispatch_tag="chosen")

    def test_missing_tag_or_firmware_fails(self):
        with self.assertRaisesRegex(ValueError, "找不到"):
            pages.resolve_release(self.items, release_tag="absent")
        for items in ([], [release("draft", draft=True)],
                      [release("site", assets=("site.zip",))]):
            with self.assertRaises(ValueError):
                pages.resolve_release(items)

    def test_api_pagination_and_tag_endpoint_are_read_only(self):
        with patch.object(pages.subprocess, "run", return_value=SimpleNamespace(
                stdout=json.dumps([[self.new], [self.old]]))) as run:
            self.assertEqual(pages.github_releases("owner/repo", ""), self.items[::-1])
            self.assertEqual(run.call_args.args[0], ["gh", "api", "--paginate", "--slurp",
                             "repos/owner/repo/releases?per_page=100"])
        with patch.object(pages.subprocess, "run", return_value=SimpleNamespace(
                stdout=json.dumps(self.new))) as run:
            self.assertEqual(pages.github_releases("owner/repo", "release/test"), [self.new])
            self.assertEqual(run.call_args.args[0],
                             ["gh", "api", "repos/owner/repo/releases/tags/release%2Ftest"])


class Smoke(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.site = Path(self.temp.name)
        (self.site / "updates").mkdir()
        self.ota = b"signed firmware fixture"
        self.catalog = json.dumps({"updates": [{"variant": "matter",
                                    "sha256": hashlib.sha256(self.ota).hexdigest()}]}).encode()
        (self.site / "updates/index.json").write_bytes(self.catalog)
        self.routes = {"/project/updates/index.json": (200, {}, self.catalog),
                       "/project/updates/matter.ota":
                       (200, {"Access-Control-Allow-Origin": "*"}, self.ota),
                       "/project/": (200, {}, b"home"), "/project/en/": (200, {}, b"en")}
        routes = self.routes
        class Handler(http.server.BaseHTTPRequestHandler):
            def do_GET(self):
                status, headers, data = routes.get(self.path.split("?", 1)[0], (404, {}, b"missing"))
                self.send_response(status)
                for name, value in headers.items():
                    self.send_header(name, value)
                self.end_headers()
                self.wfile.write(data)

            def log_message(self, *args):
                pass
        server = http.server.ThreadingHTTPServer(("127.0.0.1", 0), Handler)
        thread = threading.Thread(target=server.serve_forever, daemon=True)
        thread.start()
        self.addCleanup(server.server_close)
        self.addCleanup(server.shutdown)
        self.url = f"http://127.0.0.1:{server.server_port}/project/"

    def test_project_url_and_trailing_slash(self):
        pages.smoke_once(self.url, self.site)
        pages.smoke_once(self.url.rstrip("/"), self.site)

    def test_catalog_must_match_byte_for_byte(self):
        self.routes["/project/updates/index.json"] = (200, {}, self.catalog + b"\n")
        with self.assertRaisesRegex(ValueError, "index.json"):
            pages.smoke_once(self.url, self.site)

    def test_ota_cors_is_required(self):
        self.routes["/project/updates/matter.ota"] = (200, {}, self.ota)
        with self.assertRaisesRegex(ValueError, "Access-Control"):
            pages.smoke_once(self.url, self.site)

    def test_ota_hash_is_required(self):
        self.routes["/project/updates/matter.ota"] = (
            200, {"Access-Control-Allow-Origin": "*"}, b"tampered")
        with self.assertRaisesRegex(ValueError, "SHA-256"):
            pages.smoke_once(self.url, self.site)

    def test_both_language_pages_and_ota_must_be_available(self):
        for path in ("/project/", "/project/en/", "/project/updates/matter.ota"):
            with self.subTest(path=path):
                original = self.routes.pop(path)
                with self.assertRaises(pages.urllib.error.HTTPError):
                    pages.smoke_once(self.url, self.site)
                self.routes[path] = original

    def test_retries_transient_failure(self):
        with patch.object(pages, "smoke_once", side_effect=[ValueError("old cache"), None]) as check, \
                patch.object(pages.time, "sleep"):
            pages.smoke(self.url, self.site)
            self.assertEqual(check.call_count, 2)

    def test_retry_deadline_fails(self):
        with patch.object(pages, "smoke_once", side_effect=ValueError("stale")), \
                patch.object(pages.time, "monotonic", side_effect=[0, 181]):
            with self.assertRaisesRegex(RuntimeError, "逾時"):
                pages.smoke(self.url, self.site)


def workflow_steps(text):
    """Parse this workflow's steps/scalar blocks without a third-party YAML dependency.

    actionlint validates the full YAML schema separately. Restrict this parser to
    the conventional six-space step sequence and eight-space scalar properties.
    """
    steps = []
    lines = text.splitlines()
    for index, line in enumerate(lines):
        start = re.fullmatch(r"      - (name|uses|run): (.*)", line)
        prop = re.fullmatch(r"        (run|uses|id): (.*)", line)
        if start:
            steps.append({})
        match = start or prop
        if not match:
            continue
        key, value = match.groups()
        if value == "|":
            block = []
            for following in lines[index + 1:]:
                if following and not following.startswith("          "):
                    break
                block.append(following[10:])
            value = "\n".join(block)
        steps[-1][key] = value
    return steps


class DeploymentContract(unittest.TestCase):
    def test_workflow_preserves_verified_feed_and_combines_site(self):
        text = (ROOT / ".github/workflows/pages.yml").read_text()
        steps = workflow_steps(text)
        build = next(step["run"] for step in steps if "cp -R site/. _site/" in step.get("run", ""))
        required = ["test -d site", "[ -e site/updates ] || [ -L site/updates ]",
                    "cp -R site/. _site/", 'gh release download "$RELEASE_TAG"',
                    "tools/ota.py verify _site/updates/matter.ota --public third_party/ota-signing.pub",
                    "tools/ota.py verify _site/updates/exec-test.ota --public third_party/ota-signing.pub",
                    'tools/ota.py catalog _site/updates/*.ota --base-url "https://${GITHUB_REPOSITORY_OWNER}.github.io/${GITHUB_REPOSITORY#*/}/updates" --output _site/updates/index.json',
                    "if error.code!=404:raise", "validate_catalog_upgrade(old,incoming)",
                    "touch _site/.nojekyll"]
        for command in required:
            self.assertIn(command, build)
        self.assertLess(build.index("tools/ota.py verify"), build.index("tools/ota.py catalog"))
        self.assertLess(build.index("tools/ota.py catalog"), build.index("validate_catalog_upgrade(old,incoming)"))
        deploy = next(i for i, step in enumerate(steps) if step.get("id") == "deployment")
        smoke = next(i for i, step in enumerate(steps) if
                     'tools/pages_site.py smoke "$PAGE_URL" _site' in step.get("run", ""))
        self.assertGreater(smoke, deploy)
        self.assertIn("          path: _site", text)
        self.assertNotIn("branches:", text)  # same-commit redeploys are ignored by Pages
        self.assertIn("  group: update-feed", text)
        self.assertIn("  cancel-in-progress: false", text)
        self.assertIn("        required: false", text)
        self.assertEqual(json.loads((ROOT / "version.json").read_text())["catalog_url"],
                         "https://lee98064.github.io/incipio-commandkit/updates/index.json")


if __name__ == "__main__":
    unittest.main(verbosity=2)
