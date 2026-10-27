
void FUN_100c6000(void)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = 0;
  if (0 < DAT_1011cf74) {
    ppuVar2 = &PTR_s_models_detaineeMaleT0_mdl_1011cf40;
    do {
      (*DAT_10121e08)(*ppuVar2);
      iVar1 = iVar1 + 1;
      ppuVar2 = ppuVar2 + 1;
    } while (iVar1 < DAT_1011cf74);
  }
  FUN_100c5fb0();
  return;
}

