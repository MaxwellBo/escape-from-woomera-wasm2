
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10095dc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  piVar3 = (int *)(param_1 + 0xe0);
  iVar2 = 0;
  do {
    iVar1 = iVar2;
    FUN_10095b00(piVar3 + -6);
    iVar2 = iVar1 + 1;
    *piVar3 = iVar2;
    piVar3 = piVar3 + 8;
  } while (iVar2 < 0x40);
  *(undefined4 *)((iVar1 + 7) * 0x20 + param_1) = 0xffffffff;
  iVar2 = 0;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      iVar1 = FUN_10095cf0(DAT_10131058);
      if (iVar1 == -1) {
        (*DAT_10121efc)(1,s_Could_not_AllocSound___for_Clien_101171fc);
        return;
      }
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 * 0x20 + 0xdc + DAT_10131058) = 0xbf800000;
    } while (iVar2 < *(int *)(DAT_10122044 + 0x90));
  }
  fVar4 = (float10)(*DAT_10121eec)(s_displaysoundlist_1010c4e8);
  if (fVar4 != (float10)_DAT_100dd618) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc4) = 1;
  return;
}

