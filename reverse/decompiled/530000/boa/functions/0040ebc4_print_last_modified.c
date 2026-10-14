/* print_last_modified @ 0040ebc4 */

void print_last_modified(int param_1)

{
  (*(code *)PTR_rfc822_time_buf_0046ac58)
            (s_Last_Modified__0046851c + 0xf,*(undefined4 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0040ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_write_0046abec)(param_1,s_Last_Modified__0046851c);
  return;
}

