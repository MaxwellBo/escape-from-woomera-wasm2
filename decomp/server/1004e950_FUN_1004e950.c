
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004e950(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = FUN_100ae400();
  *(float *)(param_1[0x37] + 700) = (float)(fVar2 + (float10)_DAT_100dd648);
  (**(code **)(*param_1 + 0x17c))(3,1,0);
  iVar1 = (**(code **)(*param_1 + 0x150))();
  if (*(int *)(param_1[0x37] + 0x534 + iVar1 * 4) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x150))();
    *(undefined4 *)(param_1[0x37] + 0x534 + iVar1 * 4) = 1;
  }
  return;
}

