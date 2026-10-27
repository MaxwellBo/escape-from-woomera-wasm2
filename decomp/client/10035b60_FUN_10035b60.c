
void __fastcall FUN_10035b60(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_1006228c;
  if (iVar1 != 0) {
    FUN_1004b841(iVar1,0x7c,*(int *)(iVar1 + -4),FUN_100352c0);
    FUN_10049a73((undefined *)(iVar1 + -4));
    param_1[2] = 0;
    return;
  }
  param_1[2] = 0;
  return;
}

