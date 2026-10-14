
int __fastcall FUN_100814b0(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_10121e44)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  iVar1 = iVar1 + *(int *)(param_1 + 0x31c);
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

