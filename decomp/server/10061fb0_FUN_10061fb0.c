
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10061fb0(void *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_1001a170(param_1,param_4);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)param_1 + 4);
    if (*(float *)(iVar1 + 0x160) != _DAT_100dd5f8) {
      *(undefined4 *)(iVar1 + 0x160) = 0;
      return;
    }
    *(undefined4 *)(iVar1 + 0x160) = 0x3f800000;
  }
  return;
}

