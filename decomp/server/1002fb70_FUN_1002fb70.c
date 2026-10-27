
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002fb70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  iVar1 = param_1[1];
  iVar2 = *(int *)(iVar1 + 0x184);
  if (iVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0x3fa00000;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0x3f4ccccd;
  }
  else if (iVar2 == 3) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x1f8) = 0x40000000;
  }
  *(undefined4 *)(param_1[1] + 0x184) = 0;
  if (*(float *)(param_1[1] + 0x144) <= _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x144) = 0x3f800000;
  }
  return;
}

