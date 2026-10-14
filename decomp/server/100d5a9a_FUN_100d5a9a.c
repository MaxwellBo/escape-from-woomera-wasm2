
undefined4 __cdecl FUN_100d5a9a(short param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10121124;
  do {
    if (param_1 == *(short *)ppuVar1) {
      return 0;
    }
    ppuVar1 = (undefined **)((int)ppuVar1 + 2);
  } while (ppuVar1 < &PTR_s_america_10121138);
  return 1;
}

