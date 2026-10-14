
void FUN_1004ca1f(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1007bd48;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1007bd8c)) && (ppuVar1 != &PTR_DAT_1007bd7c)) &&
       ((ppuVar1 != &PTR_DAT_1007bd6c && (ppuVar1 != &PTR_DAT_1007bd4c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1004ad7e(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1007be08);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1007bd6c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1007bd7c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1007bd8c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1007bd4c);
  return;
}

