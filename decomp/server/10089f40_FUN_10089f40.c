
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10089f40(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0xdc);
  if (0 < *(int *)(iVar1 + 0x88)) {
    if (*(float *)(*(int *)(iVar1 + 4) + 0x214) != _DAT_100dd5f8) {
      *(undefined4 *)((int)param_1 + 0x124) = 0;
      *(undefined4 *)(iVar1 + 0x508) = 0;
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xdc) + 4) + 0x214) = 0;
    }
    (**(code **)(*DAT_10121db8 + 0x18))();
    iVar1 = FUN_100b4210(param_1,6,3,2.0);
    if (iVar1 != 0) {
      *(undefined4 *)((int)param_1 + 0x120) = 0x3fc00000;
    }
  }
  return;
}

