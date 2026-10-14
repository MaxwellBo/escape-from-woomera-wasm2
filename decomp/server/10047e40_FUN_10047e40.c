
void __fastcall FUN_10047e40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar3 = s_models_hassassin_mdl_1010dc1c;
  }
  else {
    pcVar3 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar3);
  (*DAT_10121e0c)(s_weapons_pl_gun1_wav_1010dbf4);
  (*DAT_10121e0c)(s_weapons_pl_gun2_wav_1010dc08);
  (*DAT_10121e0c)(s_debris_beamstart1_wav_1010dc48);
  uVar2 = (*DAT_10121e08)(s_models_shell_mdl_1010dc34);
  *(undefined4 *)(param_1 + 0x33c) = uVar2;
  return;
}

