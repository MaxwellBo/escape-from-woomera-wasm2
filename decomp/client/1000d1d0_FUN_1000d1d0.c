
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000d1d0(void *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0xdc);
  if (0 < *(int *)(iVar2 + 0x88)) {
    if (*(float *)(*(int *)(iVar2 + 4) + 0x214) != _DAT_10059a18) {
      *(undefined4 *)((int)param_1 + 0x124) = 0;
      *(undefined4 *)(iVar2 + 0x508) = 0;
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xdc) + 4) + 0x214) = 0;
    }
    bVar1 = FUN_1000a1d0();
    iVar2 = FUN_1000a2a0(param_1,6,3,2.0,(uint)bVar1);
    if (iVar2 != 0) {
      *(undefined4 *)((int)param_1 + 0x120) = 0x3fc00000;
    }
  }
  return;
}

