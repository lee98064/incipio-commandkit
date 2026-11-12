import json
import sys
import tempfile
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from check_public import public_paths, audit


class PublicManagement(unittest.TestCase):
    def test_downloaded_profile_is_excluded_from_source_archive(self):
        with tempfile.TemporaryDirectory() as name:
            path=Path(name)/'commandkit-management.json'
            path.write_text(json.dumps({'format':'commandkit-management-v1','diag_key':'01'*32}))
            self.assertEqual(public_paths(name),[])
    def test_renamed_profile_is_rejected_before_publication(self):
        with tempfile.TemporaryDirectory() as name:
            path=Path(name)/'renamed.json'
            path.write_text(json.dumps({'format':'commandkit-management-v1','diag_key':'01'*32}))
            with self.assertRaisesRegex(ValueError,'公開包含管理金鑰'):
                audit(name,Path(name)/'unused-release')


if __name__=='__main__':unittest.main()
