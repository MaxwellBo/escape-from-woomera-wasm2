
void __fastcall FUN_10036d40(char *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  switch(*(undefined4 *)(param_1 + 200)) {
  case 0:
  case 7:
    (*DAT_10121e0c)(s_debris_bustglass1_wav_10108d68);
    (*DAT_10121e0c)(s_debris_bustglass2_wav_10108d38);
    pcVar2 = s_models_glassgibs_mdl_10108d50;
    break;
  case 1:
    (*DAT_10121e0c)(s_debris_bustcrate1_wav_10108e3c);
    (*DAT_10121e0c)(s_debris_bustcrate2_wav_10108e10);
    pcVar2 = s_models_woodgibs_mdl_10108e28;
    break;
  case 2:
    (*DAT_10121e0c)(s_debris_bustmetal1_wav_10108db0);
    (*DAT_10121e0c)(s_debris_bustmetal2_wav_10108d80);
    pcVar2 = s_models_metalplategibs_mdl_10108d1c;
    break;
  case 3:
    (*DAT_10121e0c)(s_debris_bustflesh1_wav_10108df8);
    (*DAT_10121e0c)(s_debris_bustflesh2_wav_10108dc8);
    pcVar2 = s_models_fleshgibs_mdl_10108de0;
    break;
  case 4:
    pcVar2 = s_models_cindergibs_mdl_10108d04;
    goto LAB_10036e26;
  case 5:
    (*DAT_10121e0c)(s_debris_bustceiling_wav_10108ca0);
    pcVar2 = s_models_ceilinggibs_mdl_10108c88;
    break;
  case 6:
    (*DAT_10121e0c)(s_buttons_spark5_wav_10104a74);
    (*DAT_10121e0c)(s_buttons_spark6_wav_10104a60);
    (*DAT_10121e0c)(s_debris_bustmetal1_wav_10108db0);
    (*DAT_10121e0c)(s_debris_bustmetal2_wav_10108d80);
    pcVar2 = s_models_computergibs_mdl_10108d98;
    break;
  case 8:
    pcVar2 = s_models_rockgibs_mdl_10108cf0;
LAB_10036e26:
    (*DAT_10121e0c)(s_debris_bustconcrete1_wav_10108cd4);
    (*DAT_10121e0c)(s_debris_bustconcrete2_wav_10108cb8);
  }
  FUN_10036c90(*(undefined4 *)(param_1 + 200));
  if (*(int *)(param_1 + 0xd8) != 0) {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xd8));
  }
  uVar1 = (*DAT_10121e08)(pcVar2);
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_100b0f60(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xdc));
  }
  return;
}

