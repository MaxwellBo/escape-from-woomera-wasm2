
undefined4 __fastcall FUN_1003e150(int param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_100a5178 + 0x8b4) != 1) {
    iVar1 = *(int *)(param_1 + 300);
    if (iVar1 == 5) {
      return 0;
    }
    if ((iVar1 <= *(int *)(DAT_100a5178 + 0x8b4)) && (iVar1 != DAT_100b6730)) {
      return 0;
    }
  }
  return 1;
}

