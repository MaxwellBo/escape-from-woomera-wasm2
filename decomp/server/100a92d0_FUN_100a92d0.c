
void __thiscall FUN_100a92d0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
    (*DAT_10121efc)(1,s_DEBUG__Creating_MotionThread_for_10119d70,
                    **(int **)(param_1 + 4) + *(int *)(DAT_10122044 + 0x98),
                    (*(int **)(param_1 + 4))[0x73] + *(int *)(DAT_10122044 + 0x98));
  }
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0x7c), piVar3 == (int *)0x0)) {
    piVar3 = (int *)(*DAT_10121f04)(iVar1,0xd8);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = (int)&PTR_FUN_100f4f74;
    }
    piVar3[1] = iVar2;
    if (piVar3 == (int *)0x0) {
      return;
    }
  }
  FUN_10019420(piVar3 + 0x32,param_2);
  FUN_10019420(piVar3 + 0x34,param_1);
  piVar3[0x2e] = *(int *)((int)this + 0xb8);
  piVar3[0x2f] = *(int *)((int)this + 0xbc);
  piVar3[0x30] = *(int *)((int)this + 0xc0);
  piVar3[0x31] = *(int *)((int)this + 0xc4);
  *(undefined4 *)(piVar3[1] + 0x1a0) = *(undefined4 *)(*(int *)((int)this + 4) + 0x1a0);
  (**(code **)(*piVar3 + 8))(0);
  return;
}

