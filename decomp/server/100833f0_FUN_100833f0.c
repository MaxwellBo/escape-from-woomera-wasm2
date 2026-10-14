
void __thiscall FUN_100833f0(void *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0xcc))(), iVar1 == 0)) {
    iVar1 = (*DAT_10121f28)(1);
    if ((iVar1 == 0) && (iVar1 = (*DAT_10121f1c)(0), iVar1 == 0)) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = *(int **)(iVar1 + 0x7c);
    }
  }
  iVar1 = FUN_1001a170(param_1,param_4);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(*(int *)((int)param_1 + 4) + 0x1a0);
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar2 | 1;
    }
    else {
      uVar2 = uVar2 & 0xfffffffe;
    }
    *(uint *)(*(int *)((int)param_1 + 4) + 0x1a0) = uVar2;
  }
  (*DAT_10121ec0)(1,DAT_101248f4,0,*(undefined4 *)(param_2[1] + 0x208));
  (*DAT_10121ec8)(*(uint *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1);
  (*DAT_10121ee0)(*(int *)(*(int *)((int)param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  lVar3 = __ftol();
  (*DAT_10121ec8)((int)lVar3);
  lVar3 = __ftol();
  (*DAT_10121ec8)((int)lVar3);
  lVar3 = __ftol();
  (*DAT_10121ec8)((int)lVar3);
  (*DAT_10121ec4)();
  return;
}

