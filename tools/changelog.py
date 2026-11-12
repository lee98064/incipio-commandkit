#!/usr/bin/env python3
"""Print one release section from CHANGELOG.md, including its heading."""
import argparse
import re
from pathlib import Path


def release_section(text, tag):
    headings = list(re.finditer(r"^## ([^\s]+)(?:[^\n]*)$", text, re.MULTILINE))
    for index, heading in enumerate(headings):
        if heading.group(1) == tag:
            end = headings[index + 1].start() if index + 1 < len(headings) else len(text)
            return text[heading.start():end].rstrip() + "\n"
    raise ValueError("CHANGELOG.md 缺少版本：" + tag)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("tag")
    args = parser.parse_args()
    try:
        print(release_section((Path(__file__).resolve().parents[1] / "CHANGELOG.md").read_text(),
                              args.tag), end="")
    except ValueError as error:
        parser.exit(1, str(error) + "\n")


if __name__ == "__main__":
    main()
