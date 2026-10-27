
int __cdecl FUN_100555fa(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_100bcd58 = 1;
                    /* WARNING: Could not recover jumptable at 0x10055614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_100bcd58 = 1;
                    /* WARNING: Could not recover jumptable at 0x10055629. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100bcb14;
  }
  DAT_100bcd58 = (uint)bVar2;
  return param_1;
}

