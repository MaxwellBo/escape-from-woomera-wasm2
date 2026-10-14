
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10028df0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_a0 [12];
  undefined4 uStack_70;
  int *piStack_6c;
  int iStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  int local_44 [5];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_1c;
  int iStack_14;
  
  iStack_5c = 0x10028dfa;
  FUN_10028c10();
  local_50 = *(undefined4 *)(DAT_100acc38 + 0x38);
  iStack_68 = DAT_100acc38 + 0x38;
  local_4c = *(undefined4 *)(DAT_100acc38 + 0x3c);
  local_48 = *(float *)(DAT_100acc38 + 0x40) - _DAT_10059ea0;
  if (_DAT_100601f4 < *(float *)(DAT_100acc38 + 100)) {
    *(undefined4 *)(DAT_100acc38 + 0xe0) = 0xffffffff;
    return;
  }
  iStack_5c = 0xffffffff;
  puStack_64 = &local_50;
  uStack_60 = 0;
  piStack_6c = local_44;
  uStack_70 = 0x10028e53;
  piVar1 = (int *)(**(code **)(DAT_100acc38 + 0x4f580))();
  piVar3 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if ((float)_DAT_1005d770 <= fStack_1c) {
    *(int *)(DAT_100acc38 + 0xe0) = iStack_14;
  }
  else {
    *(undefined4 *)(DAT_100acc38 + 0xe0) = 0xffffffff;
  }
  if (*(int *)(DAT_100acc38 + 0xe0) != -1) {
    *(undefined4 *)(DAT_100acc38 + 0xcc) = 0;
    if (((*(int *)(DAT_100acc38 + 0xe4) < 2) && (local_44[1] == 0)) && (local_44[0] == 0)) {
      *(undefined4 *)(DAT_100acc38 + 0x38) = uStack_30;
      *(undefined4 *)(DAT_100acc38 + 0x3c) = uStack_2c;
      *(undefined4 *)(DAT_100acc38 + 0x40) = uStack_28;
    }
  }
  if (0 < iStack_14) {
    iStack_5c = DAT_100acc38 + 0x5c;
    piVar1 = local_44;
    piVar3 = aiStack_a0;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_10027780();
  }
  return;
}

