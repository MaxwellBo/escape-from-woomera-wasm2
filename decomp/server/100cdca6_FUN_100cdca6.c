
undefined4 __cdecl FUN_100cdca6(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10136204 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10136204 != (HANDLE)0x0) {
    DAT_10136208 = FUN_100cdb5e();
    if (DAT_10136208 == 3) {
      ppuVar1 = (undefined **)FUN_100cde7d(0x3f8);
    }
    else {
      if (DAT_10136208 != 2) {
        return 1;
      }
      ppuVar1 = FUN_100cede6();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10136204);
  }
  return 0;
}

