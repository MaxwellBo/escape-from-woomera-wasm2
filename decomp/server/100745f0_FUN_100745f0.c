
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100745f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  
  if (*(float *)(param_1 + 0xf4) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1 + 0xf4) = 0x42a00000;
  }
  if (*(float *)(param_1 + 0xf0) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1 + 0xf0) = 0x41200000;
  }
  iVar7 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar7 + 0x50) = DAT_10121dd8;
  *(undefined4 *)(iVar7 + 0x54) = DAT_10121ddc;
  *(undefined4 *)(iVar7 + 0x58) = DAT_10121de0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  iVar7 = *(int *)(param_1 + 4);
  FUN_100afdc0(iVar7,iVar7 + 0xdc,iVar7 + 0xe8);
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar7 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(iVar7 + 8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(iVar7 + 0xc);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar7 + 0x10);
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    iVar7 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar7 + 0xc);
    fVar2 = *(float *)(iVar5 + 0xc);
    fVar3 = *(float *)(iVar7 + 0x10);
    fVar4 = *(float *)(iVar5 + 0x10);
    *(float *)(param_1 + 0xf8) = *(float *)(iVar7 + 8) - *(float *)(iVar5 + 8);
    *(float *)(param_1 + 0xfc) = fVar1 - fVar2;
    *(float *)(param_1 + 0x100) = fVar3 - fVar4;
  }
  bVar6 = *(float *)(param_1 + 300) == _DAT_100dd5f8;
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x100);
  if (bVar6) {
    fVar1 = (*(float *)(param_1 + 0x10c) - *(float *)(iVar7 + 0xfc)) + _DAT_100de45c;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x10c) - *(float *)(param_1 + 300);
  }
  *(float *)(param_1 + 0x10c) = fVar1;
  if (*(float *)(iVar7 + 0x1f8) == _DAT_100dd5f8) {
    *(undefined4 *)(iVar7 + 0x1f8) = 0x43160000;
  }
  if (*(float *)(param_1 + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1 + 0x160) = 0x3f59999a;
  }
  return;
}

