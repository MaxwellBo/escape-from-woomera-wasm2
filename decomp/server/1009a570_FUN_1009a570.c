
void __thiscall FUN_1009a570(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x1a4) & 8) == 0) || (*(int *)((int)this + 0x1d8) == 5))
  goto LAB_1009a5b8;
  FUN_1009a6e0(this);
  iVar1 = *(int *)(param_1 + 0x208);
  if (iVar1 == 0) {
    iVar1 = (*DAT_10121f1c)(0);
    if (iVar1 != 0) goto LAB_1009a5a7;
    iVar1 = 0;
  }
  else {
LAB_1009a5a7:
    iVar1 = *(int *)(iVar1 + 0x7c);
  }
  FUN_1009a790(this,iVar1,0);
LAB_1009a5b8:
  FUN_10019420((void *)((int)this + 0x168),0);
  (**(code **)(*(int *)this + 0x1a0))();
  *(undefined4 *)((int)this + 0x7c) = 0;
  FUN_1001ec30(this,param_1,param_2);
  return;
}

