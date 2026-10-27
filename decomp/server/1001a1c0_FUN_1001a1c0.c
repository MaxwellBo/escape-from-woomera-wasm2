
undefined4 __fastcall FUN_1001a1c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x148);
  if (iVar1 == 4) {
    return 0xffffffff;
  }
  if (iVar1 != 0) {
    return 0x23;
  }
  uVar2 = (*DAT_10121f70)(0,4);
  return uVar2;
}

