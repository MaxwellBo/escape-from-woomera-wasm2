
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100489d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  fVar3 = *(float *)(iVar2 + 0x10) + _DAT_100dd620;
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  *param_2 = *(undefined4 *)(iVar2 + 8);
  param_2[1] = uVar1;
  param_2[2] = fVar3;
  return;
}

