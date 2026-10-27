
void __fastcall FUN_1006f9b0(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = (*(int *)((int)param_1 + 0x1c) * 3) / 2 + 3;
  *(int *)((int)param_1 + 0x20c0) = iVar1;
  FUN_1006f6a0(param_1,iVar1);
  piVar2 = FUN_100c8dda(2,*(int *)((int)param_1 + 0x20c0));
  *(int **)((int)param_1 + 0x20bc) = piVar2;
  if (piVar2 != (int *)0x0) {
    iVar1 = 0;
    if (0 < *(int *)((int)param_1 + 0x20c0)) {
      do {
        iVar1 = iVar1 + 1;
        *(undefined2 *)(*(int *)((int)param_1 + 0x20bc) + -2 + iVar1 * 2) = 0xffff;
      } while (iVar1 < *(int *)((int)param_1 + 0x20c0));
    }
    iVar1 = 0;
    if (0 < *(int *)((int)param_1 + 0x1c)) {
      iVar4 = 0;
      do {
        puVar3 = (undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar4);
        FUN_1006f4f0(param_1,*puVar3,(short)puVar3[1],(short)iVar1);
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x18;
      } while (iVar1 < *(int *)((int)param_1 + 0x1c));
    }
    return;
  }
  (*DAT_10121efc)(2,s_Couldn_t_allocated_Link_Lookup_T_101132b8);
  return;
}

