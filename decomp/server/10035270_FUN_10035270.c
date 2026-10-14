
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10035270(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) {
    fVar2 = *(float *)(iVar1 + 0x24) * _DAT_100e4374;
    fVar3 = *(float *)(iVar1 + 0x28) * _DAT_100e4374;
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * _DAT_100e4374;
    *(float *)(iVar1 + 0x24) = fVar2;
  }
  else {
    fVar2 = *(float *)(iVar1 + 0x24) * _DAT_100de1f0;
    fVar3 = *(float *)(iVar1 + 0x28) * _DAT_100de1f0;
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * _DAT_100de1f0;
    *(float *)(iVar1 + 0x24) = fVar2;
  }
  *(float *)(iVar1 + 0x28) = fVar3;
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
      *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) < (float)_DAT_100de4a0) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
  }
  return;
}

