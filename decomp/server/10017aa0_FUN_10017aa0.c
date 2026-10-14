
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10017aa0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  
  FUN_10099880(*(int *)(param_1 + 4));
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) == _DAT_100dd5f8) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x42c80000;
  }
  if (_DAT_100dd5f8 <= *(float *)(param_1 + 0xe4)) {
    iVar8 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(param_1 + 0xe4);
    *(float *)(param_1 + 0x168) = *(float *)(iVar8 + 0x50);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(iVar8 + 0x54);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(iVar8 + 0x58);
    fVar2 = *(float *)(iVar8 + 0x44);
    fVar3 = *(float *)(iVar8 + 0x48);
    fVar4 = *(float *)(iVar8 + 0x4c);
    fVar5 = *(float *)(iVar8 + 0x50);
    fVar6 = *(float *)(iVar8 + 0x54);
    fVar7 = *(float *)(iVar8 + 0x58);
    *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
    *(float *)(param_1 + 0x174) = fVar1 * fVar2 + fVar5;
    *(float *)(param_1 + 0x178) = fVar1 * fVar3 + fVar6;
    *(float *)(param_1 + 0x17c) = fVar1 * fVar4 + fVar7;
  }
  else {
    fVar1 = *(float *)(param_1 + 0xe4);
    iVar8 = *(int *)(param_1 + 4);
    fVar2 = *(float *)(iVar8 + 0x48);
    fVar3 = *(float *)(iVar8 + 0x4c);
    fVar4 = *(float *)(iVar8 + 0x54);
    fVar5 = *(float *)(iVar8 + 0x58);
    *(float *)(param_1 + 0x168) = fVar1 * *(float *)(iVar8 + 0x44) + *(float *)(iVar8 + 0x50);
    *(float *)(param_1 + 0x16c) = fVar1 * fVar2 + fVar4;
    *(float *)(param_1 + 0x170) = fVar1 * fVar3 + fVar5;
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(iVar8 + 0x50);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(iVar8 + 0x54);
    uVar10 = *(undefined4 *)(iVar8 + 0x58);
    *(float *)(param_1 + 0xe4) = -*(float *)(param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0x17c) = uVar10;
    *(undefined4 *)(param_1 + 0x160) = 1;
  }
  if ((*(byte *)(iVar8 + 0x1a0) & 1) == 0) {
    *(undefined4 *)(iVar8 + 0x10c) = 0;
  }
  else {
    *(undefined4 *)(iVar8 + 0x10c) = 4;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  pcVar9 = FUN_10016d30(*(undefined4 *)(param_1 + 0x180));
  (*DAT_10121e0c)(pcVar9);
  uVar10 = (*DAT_10121f14)(pcVar9);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e8) = uVar10;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  return;
}

