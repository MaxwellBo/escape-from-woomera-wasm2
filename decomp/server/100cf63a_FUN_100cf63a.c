
void FUN_100cf63a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_101204d0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10120514)) && (ppuVar1 != &PTR_DAT_10120504)) &&
       ((ppuVar1 != &PTR_DAT_101204f4 && (ppuVar1 != &PTR_DAT_101204d4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100c8cf1(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10120590);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_101204f4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10120504);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10120514);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_101204d4);
  return;
}

