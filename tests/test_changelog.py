#!/usr/bin/env python3
"""Release notes must match one exact published tag."""
import subprocess
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from changelog import release_section


class Changelog(unittest.TestCase):
    def test_exact_tag_and_section_boundary(self):
        text = ("# Changes\n\n## v0.2.11-preview — 新版（2026-10-21）\n\n"
                "- one\n\n### Detail\n\n- two\n\n## v0.2.1-preview — Older\n\n- old\n")
        self.assertEqual(release_section(text, "v0.2.11-preview"),
                         "## v0.2.11-preview — 新版（2026-10-21）\n\n"
                         "- one\n\n### Detail\n\n- two\n")
        self.assertEqual(release_section(text, "v0.2.1-preview"),
                         "## v0.2.1-preview — Older\n\n- old\n")

    def test_missing_and_prefix_tags_fail(self):
        for tag in ("v0.2", "v0.2.1-preview", "v99.0.0-preview"):
            with self.assertRaisesRegex(ValueError, "缺少版本"):
                release_section("## v0.2.11-preview — Release\n- note\n", tag)

    def test_repository_has_exactly_the_published_releases(self):
        text = (ROOT / "CHANGELOG.md").read_text()
        headings = [line.split()[1] for line in text.splitlines() if line.startswith("## ")]
        self.assertEqual(headings, ["v0.3.1-preview", "v0.3.0-preview", "v0.2.11-preview", "v0.2.3-preview",
                                    "v0.1.0-preview"])
        for tag in headings:
            self.assertTrue(release_section(text, tag).startswith("## " + tag + " — "))

    def test_cli_from_another_directory(self):
        result = subprocess.run([sys.executable, str(ROOT / "tools/changelog.py"),
                                 "v0.3.0-preview"], cwd=ROOT.parent,
                                capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertIn("## v0.3.0-preview", result.stdout)
        self.assertNotIn("## v0.2.11-preview", result.stdout)

    def test_cli_missing_release_is_nonzero(self):
        result = subprocess.run([sys.executable, str(ROOT / "tools/changelog.py"),
                                 "v99.0.0-preview"], capture_output=True, text=True)
        self.assertNotEqual(result.returncode, 0)
        self.assertEqual(result.stdout, "")
        self.assertIn("缺少版本", result.stderr)


if __name__ == "__main__":
    unittest.main(verbosity=2)
