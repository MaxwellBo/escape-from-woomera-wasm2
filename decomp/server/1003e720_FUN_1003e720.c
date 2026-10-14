
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003e720(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x308) != 0) {
    fVar3 = FUN_100afe80((float)*(int *)(param_1 + 0x31c),
                         *(float *)(*(int *)(*(int *)(param_1 + 0x308) + 4) + 0x14c),26.0);
    *(float *)(*(int *)(*(int *)(param_1 + 0x308) + 4) + 0x14c) = (float)fVar3;
    iVar1 = *(int *)(*(int *)(param_1 + 0x308) + 4);
    if (*(float *)(iVar1 + 0x14c) == _DAT_100dd5f8) {
      uVar2 = *(uint *)(iVar1 + 0x118) | 0x80;
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x118) & 0xffffff7f;
    }
    *(uint *)(iVar1 + 0x118) = uVar2;
    FUN_100afe10(*(int *)(param_1 + 0x308),*(int *)(param_1 + 4) + 8);
  }
  return;
}

