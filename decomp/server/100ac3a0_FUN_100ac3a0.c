
void __fastcall FUN_100ac3a0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_100ac130();
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_turret_mdl_1011a3e0;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e08)(s_sprites_flare3_spr_1011a3cc);
  return;
}

