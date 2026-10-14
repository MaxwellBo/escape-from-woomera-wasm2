
void __cdecl FUN_10036c90(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  local_4 = 0;
  ppuVar1 = FUN_10036bf0(param_1,&local_4);
  if (0 < local_4) {
    do {
      (*DAT_10121e0c)(*ppuVar1);
      iVar2 = iVar2 + 1;
      ppuVar1 = ppuVar1 + 1;
    } while (iVar2 < local_4);
  }
  return;
}

