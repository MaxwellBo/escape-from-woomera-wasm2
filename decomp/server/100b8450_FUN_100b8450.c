
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_100b8450(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_1005d250(param_1);
  iVar1 = *(int *)(param_1 + 0x1cc);
  if ((iVar1 == 0x1e) && (*DAT_10122044 <= *(float *)(param_1 + 0x308))) {
    uVar2 = uVar2 | 0x300;
  }
  if (((iVar1 == 0x1a) || (iVar1 == 0x1b)) && (*(float *)(param_1 + 0x308) < *DAT_10122044)) {
    *(float *)(param_1 + 0x308) = *DAT_10122044 + _DAT_100de4ac;
  }
  return uVar2;
}

