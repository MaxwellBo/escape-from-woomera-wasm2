
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1004ad50(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x35c) != 0) {
    fVar3 = *(float *)(iVar2 + 0x10) + _DAT_100de498;
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    *param_2 = *(undefined4 *)(iVar2 + 8);
    param_2[1] = uVar1;
    param_2[2] = fVar3;
    return;
  }
  fVar3 = *(float *)(iVar2 + 0x10) + _DAT_100e8afc;
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  *param_2 = *(undefined4 *)(iVar2 + 8);
  param_2[1] = uVar1;
  param_2[2] = fVar3;
  return;
}

