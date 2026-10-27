
int __cdecl FUN_100d5f09(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10134bf8 = 1;
                    /* WARNING: Could not recover jumptable at 0x100d5f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10134bf8 = 1;
                    /* WARNING: Could not recover jumptable at 0x100d5f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10134a70;
  }
  DAT_10134bf8 = (uint)bVar2;
  return param_1;
}

