
void __thiscall FUN_10099dc0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    iVar1 = FUN_1009bcc0((int)this);
    if (iVar1 == 0) goto LAB_10099df5;
    param_1 = 0x17;
  }
  else if (param_1 != 0x17) goto LAB_10099df5;
  iVar1 = FUN_10008100(this,0x17);
  if (iVar1 == -1) {
    param_1 = 1;
  }
LAB_10099df5:
  FUN_1005e120(this,param_1);
  return;
}

