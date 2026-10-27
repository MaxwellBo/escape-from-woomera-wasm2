
undefined4 __cdecl FUN_10050042(int param_1)

{
  undefined **ppuVar1;
  
  DAT_100bd04c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100bd04c != (HANDLE)0x0) {
    DAT_100bd050 = FUN_1004fefa();
    if (DAT_100bd050 == 3) {
      ppuVar1 = (undefined **)FUN_10050147(0x3f8);
    }
    else {
      if (DAT_100bd050 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10050c8e();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_100bd04c);
  }
  return 0;
}

