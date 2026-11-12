import hashlib
import hmac
import json
import io
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from setup_control import control,main
from fwlib import profile_diag_key


class SetupControl(unittest.TestCase):
    def test_downloaded_management_profile(self):
        with tempfile.TemporaryDirectory() as name:
            path=Path(name)/'commandkit-management.json';key=bytes(range(32))
            path.write_text(json.dumps({'format':'commandkit-management-v1','diag_key':key.hex()}))
            self.assertEqual(profile_diag_key(path),key)
            path.write_text(json.dumps({'format':'other','diag_key':key.hex()}))
            with self.assertRaises(ValueError):profile_diag_key(path)
            path.write_text('[]')
            with self.assertRaises(ValueError):profile_diag_key(path)
    def test_scope_and_nonce_are_bound_and_key_not_sent(self):
        for action,method,path in [('status','GET','/state'),('enter-setup','POST','/enter-setup'),
                                   ('matter-status','GET','/matter-state'),('reset-matter','POST','/reset-matter'),
                                   ('open-commissioning','POST','/open-commissioning')]:
            with self.subTest(action=action),tempfile.TemporaryDirectory() as name:
                key=bytes(range(32));nonce=b'1'*64
                (Path(name)/'diag.key').write_bytes(key.hex().encode()+b'\n')
                with patch('setup_control.http.client.HTTPConnection') as constructor:
                    connection=constructor.return_value
                    challenge=unittest.mock.Mock(status=200);challenge.read.return_value=nonce
                    response=unittest.mock.Mock(status=202);response.read.return_value=b'accepted\n'
                    connection.getresponse.side_effect=[challenge,response]
                    self.assertEqual(control('192.168.1.20',name,action),'accepted\n')
                    call=connection.request.call_args_list[1]
                    self.assertEqual(call.args,(method,path))
                    expect=hmac.new(key,(method+' '+path+'\n').encode()+nonce,hashlib.sha256).hexdigest()
                    self.assertEqual(call.kwargs['headers'],{'X-Setup-Proof':nonce.decode()+':'+expect})
                    self.assertNotIn(key.hex(),str(connection.request.call_args_list))
    def test_invalid_challenge_sends_no_mutation(self):
        with tempfile.TemporaryDirectory() as name:
            (Path(name)/'diag.key').write_text('01'*32+'\n')
            with patch('setup_control.http.client.HTTPConnection') as constructor:
                response=constructor.return_value.getresponse.return_value
                response.status=200;response.read.return_value=b'invalid'
                with self.assertRaises(ValueError):control('192.168.1.20',name,'enter-setup')
                constructor.return_value.request.assert_called_once_with('GET','/challenge',body=None,headers={})
    def test_wait_ignores_previous_completed_request(self):
        previous={'request_id':'old','result':'complete','window_open':True,'fabrics':0}
        completed={**previous,'request_id':'new'}
        with patch('sys.argv',['setup_control.py','reset-matter','--host','192.168.1.20','--profile','profile','--wait']), \
             patch('setup_control.control',side_effect=[json.dumps({'request_id':'new'}),json.dumps(previous),json.dumps(completed)]) as api, \
             patch('setup_control.time.sleep'),patch('sys.stdout',new_callable=io.StringIO) as output:
            main()
            self.assertEqual(json.loads(output.getvalue()),completed)
            self.assertEqual(api.call_count,3)
    def test_wait_does_not_report_reset_success_with_fabrics_remaining(self):
        state={'request_id':'new','result':'complete','window_open':True,'fabrics':1}
        with patch('sys.argv',['setup_control.py','reset-matter','--host','192.168.1.20','--profile','profile','--wait']), \
             patch('setup_control.control',side_effect=[json.dumps({'request_id':'new'}),json.dumps(state)]), \
             patch('setup_control.time.sleep'):
            with self.assertRaisesRegex(ValueError,'尚未清除'):main()


if __name__=='__main__':unittest.main()
