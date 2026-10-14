
int __thiscall FUN_10008480(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_10121f30)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
  if (param_3 == (int *)0x0) {
    iVar1 = FUN_10008f50(iVar1,param_1,param_2,&param_2);
    if (param_2 != 1) {
      return -1;
    }
  }
  else {
    iVar1 = FUN_10008f50(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

