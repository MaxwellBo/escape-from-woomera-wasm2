
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10051950(CBaseEntity *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1d8);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x314) = 0x42a00000;
    (**(code **)(*(int *)param_1 + 0x184))(2);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      FUN_10006c50(param_1);
      return;
    }
    *(undefined4 *)(param_1 + 0x314) = 0x43160000;
    (**(code **)(*(int *)param_1 + 0x184))(2);
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x340) = 0x43c80000;
  if ((uVar2 & 0x800) != 0) {
    (**(code **)(*(int *)param_1 + 0x184))(0x16);
    return;
  }
  if ((uVar2 & 0x400) != 0) {
    (**(code **)(*(int *)param_1 + 0x184))(0xc);
    return;
  }
  if ((uVar2 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0x33c) = 1;
  }
  if (*(float *)(*(int *)(param_1 + 4) + 0x160) <
      *(float *)(*(int *)(param_1 + 4) + 0x1b0) - _DAT_100ddacc) {
    *(undefined4 *)(param_1 + 0x33c) = 1;
  }
  (**(code **)(*(int *)param_1 + 0x184))(0x1c);
  return;
}

