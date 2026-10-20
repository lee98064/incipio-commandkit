#!/usr/bin/env python3
"""Keep Pages release-tag setup idempotent without replacing existing protections."""
import json
import subprocess
import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
import setup_github_updates as setup
from ota import validate_catalog_upgrade

class PagesEnvironment(unittest.TestCase):
    def configure(self,policy,rules,missing=False):
        calls=[]
        def gh(args,**kwargs):
            calls.append((args,kwargs))
            if args[0]!='api':raise AssertionError('Pages setup must not touch secrets')
            if args==['api','repos/example/outlet/environments/github-pages']:
                if missing:raise subprocess.CalledProcessError(1,'gh',stderr=b'HTTP 404')
                result={'deployment_branch_policy':policy,'protection_rules':[{'type':'required_reviewers'}]}
            elif args[:3]==['api','--method','PUT']:
                result={'deployment_branch_policy':json.loads(kwargs['input'])['deployment_branch_policy']}
            elif args[:3]==['api','--method','POST']:result={}
            else:result={'branch_policies':rules}
            return SimpleNamespace(stdout=json.dumps(result).encode())
        with patch.object(setup,'gh',side_effect=gh):setup.configure_pages_environment('example/outlet')
        return calls
    def test_adds_only_version_tag_rule_without_replacing_reviewers(self):
        calls=self.configure({'protected_branches':False,'custom_branch_policies':True},[{'name':'main','type':'branch'}])
        writes=[(a,k) for a,k in calls if '--method' in a]
        self.assertEqual(len(writes),1);self.assertEqual(writes[0][0][2],'POST')
        self.assertEqual(json.loads(writes[0][1]['input']),{'name':'v*','type':'tag'})
    def test_existing_tag_rule_and_unrestricted_environment_are_unchanged(self):
        calls=self.configure({'protected_branches':False,'custom_branch_policies':True},[{'name':'v*','type':'tag'}])
        self.assertFalse(any('--method' in a for a,k in calls))
        calls=self.configure(None,[]);self.assertEqual(len(calls),1)
    def test_protected_branch_policy_is_not_weakened(self):
        with self.assertRaisesRegex(ValueError,'受保護分支'):
            self.configure({'protected_branches':True,'custom_branch_policies':False},[])
    def test_new_environment_keeps_main_and_adds_release_tags(self):
        calls=self.configure(None,[],missing=True)
        posts=[json.loads(k['input']) for a,k in calls if a[:3]==['api','--method','POST']]
        self.assertEqual(posts,[{'name':'main','type':'branch'},{'name':'v*','type':'tag'}])

class CatalogUpgrade(unittest.TestCase):
    def catalog(self,**versions):return {'updates':[{'variant':v,'software_version':n} for v,n in versions.items()]}
    def test_legacy_diagnostic_can_retire_while_matter_advances(self):
        validate_catalog_upgrade(self.catalog(matter=5,**{'exec-test':5}),self.catalog(matter=13))
    def test_supported_channel_cannot_disappear_or_downgrade(self):
        for incoming in [self.catalog(matter=4),self.catalog(**{'exec-test':13}),self.catalog()]:
            with self.assertRaises(ValueError):validate_catalog_upgrade(self.catalog(matter=5),incoming)
        with self.assertRaises(ValueError):validate_catalog_upgrade(self.catalog(matter=5,other=5),self.catalog(matter=13))
    def test_retained_diagnostic_cannot_downgrade(self):
        with self.assertRaises(ValueError):validate_catalog_upgrade(self.catalog(matter=5,**{'exec-test':5}),self.catalog(matter=13,**{'exec-test':4}))

if __name__=='__main__':unittest.main(verbosity=2)
