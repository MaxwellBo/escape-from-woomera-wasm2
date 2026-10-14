
undefined4 __thiscall FUN_10054050(void *this,int param_1,int param_2,float param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_4 & 4) == 0) || (param_2 == 0)) goto LAB_1005409d;
  iVar1 = *(int *)(param_2 + 0x208);
  if (iVar1 == 0) {
    iVar1 = (*DAT_10121f1c)(0);
    if (iVar1 != 0) goto LAB_1005407e;
    uVar2 = 0;
  }
  else {
LAB_1005407e:
    uVar2 = *(undefined4 *)(iVar1 + 0x7c);
  }
  iVar1 = (**(code **)(*(int *)this + 0x130))(uVar2);
  if (iVar1 < 1) {
    return 0;
  }
LAB_1005409d:
  if (*(int *)((int)this + 0x304) == 0) {
    *(uint *)((int)this + 0x2a0) = *(uint *)((int)this + 0x2a0) | 1;
  }
  uVar2 = FUN_1001f350(this,param_1,param_2,param_3,param_4);
  return uVar2;
}

