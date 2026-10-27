
void __fastcall FUN_10014630(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_bullsquid_mdl_10104234;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e08)(s_sprites_bigspit_spr_101040a4);
  DAT_10121ccc = (*DAT_10121e08)(s_sprites_tinyspit_spr_1010432c);
  (*DAT_10121e0c)(s_zombie_claw_miss2_wav_10101910);
  (*DAT_10121e0c)(s_bullchicken_bc_attack2_wav_10104310);
  (*DAT_10121e0c)(s_bullchicken_bc_attack3_wav_101042f4);
  (*DAT_10121e0c)(s_bullchicken_bc_die1_wav_101042dc);
  (*DAT_10121e0c)(s_bullchicken_bc_die2_wav_101042c4);
  (*DAT_10121e0c)(s_bullchicken_bc_die3_wav_101042ac);
  (*DAT_10121e0c)(s_bullchicken_bc_idle1_wav_10104170);
  (*DAT_10121e0c)(s_bullchicken_bc_idle2_wav_10104154);
  (*DAT_10121e0c)(s_bullchicken_bc_idle3_wav_10104138);
  (*DAT_10121e0c)(s_bullchicken_bc_idle4_wav_1010411c);
  (*DAT_10121e0c)(s_bullchicken_bc_idle5_wav_10104100);
  (*DAT_10121e0c)(s_bullchicken_bc_pain1_wav_101041e0);
  (*DAT_10121e0c)(s_bullchicken_bc_pain2_wav_101041c4);
  (*DAT_10121e0c)(s_bullchicken_bc_pain3_wav_101041a8);
  (*DAT_10121e0c)(s_bullchicken_bc_pain4_wav_1010418c);
  (*DAT_10121e0c)(s_bullchicken_bc_attackgrowl_wav_1010428c);
  (*DAT_10121e0c)(s_bullchicken_bc_attackgrowl2_wav_1010426c);
  (*DAT_10121e0c)(s_bullchicken_bc_attackgrowl3_wav_1010424c);
  (*DAT_10121e0c)(s_bullchicken_bc_acid1_wav_101038d4);
  (*DAT_10121e0c)(s_bullchicken_bc_bite2_wav_101041fc);
  (*DAT_10121e0c)(s_bullchicken_bc_bite3_wav_10104218);
  (*DAT_10121e0c)(s_bullchicken_bc_spithit1_wav_101038b8);
  (*DAT_10121e0c)(s_bullchicken_bc_spithit2_wav_1010389c);
  return;
}

