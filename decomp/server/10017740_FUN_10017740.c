
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10017740(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  pcVar7 = FUN_10016d30(*(undefined4 *)(param_1 + 400));
  (*DAT_10121e0c)(pcVar7);
  uVar8 = (*DAT_10121f14)(pcVar7);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e8) = uVar8;
  FUN_10099880(*(int *)(param_1 + 4));
  iVar6 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar6 + 0x1a0) & 2) != 0) {
    fVar1 = *(float *)(iVar6 + 0x48) * _DAT_100df2b0;
    fVar2 = *(float *)(iVar6 + 0x4c) * _DAT_100df2b0;
    *(float *)(iVar6 + 0x44) = *(float *)(iVar6 + 0x44) * _DAT_100df2b0;
    *(float *)(iVar6 + 0x48) = fVar1;
    *(float *)(iVar6 + 0x4c) = fVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  iVar6 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar6 + 0x1a0) & 1) == 0) {
    *(undefined4 *)(iVar6 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar6 + 0x10c) = 0;
  }
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) == _DAT_100dd5f8) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x42200000;
  }
  if (*(float *)(param_1 + 0xe8) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  }
  if (_DAT_100dd5f8 < *(float *)(*(int *)(param_1 + 4) + 0x160)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0x3f800000;
  }
  iVar6 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0xdc) = 1;
  *(float *)(param_1 + 0x110) = *(float *)(iVar6 + 0x50);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(iVar6 + 0x58);
  fVar2 = *(float *)(iVar6 + 0x48);
  fVar3 = *(float *)(iVar6 + 0x4c);
  fVar4 = *(float *)(iVar6 + 0x54);
  fVar5 = *(float *)(iVar6 + 0x58);
  *(float *)(param_1 + 0x11c) = fVar1 * *(float *)(iVar6 + 0x44) + *(float *)(iVar6 + 0x50);
  *(float *)(param_1 + 0x120) = fVar1 * fVar2 + fVar4;
  *(float *)(param_1 + 0x124) = fVar1 * fVar3 + fVar5;
  *(uint *)(param_1 + 0x15c) = (uint)(*(int *)(param_1 + 0xe8) == -0x40800000);
  *(undefined4 *)(param_1 + 0x160) = 1;
  if ((*(uint *)(iVar6 + 0x1a0) & 0x100) == 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    if ((*(uint *)(iVar6 + 0x1a0) & 0x200) != 0) {
      *(code **)(param_1 + 0x7c) = CBaseButton::ButtonUse_IgnorePlayer;
      return;
    }
  }
  else {
    *(code **)(param_1 + 0x78) = CBaseButton::ButtonTouch;
    if ((*(uint *)(iVar6 + 0x1a0) & 0x200) == 0) {
      *(code **)(param_1 + 0x7c) = CBaseButton::ButtonUse_IgnorePlayer;
      return;
    }
  }
  *(code **)(param_1 + 0x7c) = CBaseButton::ButtonUse;
  return;
}

