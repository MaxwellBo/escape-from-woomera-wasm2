
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10016a00(int *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  pcVar1 = FUN_10016d30(param_1[100]);
  (*DAT_10121e0c)(pcVar1);
  uVar2 = (*DAT_10121f14)(pcVar1);
  *(undefined4 *)(param_1[1] + 0x1e8) = uVar2;
  (**(code **)(*param_1 + 0x2c))();
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x40) != 0) {
    param_1[0x1d] = (int)CBaseButton::ButtonSpark;
    (**(code **)(*param_1 + 8))(0x3f000000);
  }
  FUN_10098fc0(param_1[1]);
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  iVar3 = param_1[1];
  if ((*(byte *)(iVar3 + 0x1a0) & 0x80) == 0) {
    *(undefined4 *)(iVar3 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar3 + 0x10c) = 0;
    *(undefined4 *)(param_1[1] + 0x110) = 0xffffffff;
  }
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  iVar3 = param_1[0x18];
  if (iVar3 < 0x20) {
    if (-0x20 < iVar3) goto LAB_10016ae7;
    puVar4 = &DAT_10103c18;
    iVar3 = -iVar3;
  }
  else {
    puVar4 = &DAT_10103c14;
  }
  (*DAT_10121eb4)(iVar3,puVar4);
LAB_10016ae7:
  if (*(float *)(param_1[1] + 0x1f8) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42200000;
  }
  if (_DAT_100dd5f8 < *(float *)(param_1[1] + 0x160)) {
    *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  }
  if ((float)param_1[0x3a] == _DAT_100dd5f8) {
    param_1[0x3a] = 0x3f800000;
  }
  if ((float)param_1[0x3b] == _DAT_100dd5f8) {
    param_1[0x3b] = 0x40800000;
  }
  param_1[0x37] = 1;
  param_1[0x57] = (uint)(param_1[0x3a] == -0x40800000);
  iVar3 = param_1[1];
  param_1[0x58] = 0;
  if ((*(uint *)(iVar3 + 0x1a0) & 0x100) == 0) {
    param_1[0x1e] = 0;
    if ((*(uint *)(iVar3 + 0x1a0) & 0x200) != 0) {
      param_1[0x1f] = (int)CBaseButton::ButtonUse_IgnorePlayer;
      return;
    }
  }
  else {
    param_1[0x1e] = (int)CBaseButton::ButtonTouch;
    if ((*(uint *)(iVar3 + 0x1a0) & 0x200) == 0) {
      param_1[0x1f] = (int)CBaseButton::ButtonUse_IgnorePlayer;
      return;
    }
  }
  param_1[0x1f] = (int)CBaseButton::ButtonUse;
  return;
}

