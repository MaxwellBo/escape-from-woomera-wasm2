
void __fastcall FUN_1008a710(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_roach_mdl_10115424;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e0c)(s_roach_rch_die_wav_10115460);
  (*DAT_10121e0c)(s_roach_rch_walk_wav_1011544c);
  (*DAT_10121e0c)(s_roach_rch_smash_wav_10115438);
  return;
}

