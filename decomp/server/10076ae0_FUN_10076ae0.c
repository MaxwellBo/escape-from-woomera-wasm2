
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10076ae0(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  char *pcVar3;
  
  if (*(float *)(param_1 + 0xf4) == (float)_DAT_100de1e8) {
    *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  }
  switch(*(undefined4 *)(param_1 + 0xf0)) {
  case 1:
    pcVar3 = s_plats_ttrain1_wav_10114024;
    break;
  case 2:
    pcVar3 = s_plats_ttrain2_wav_10114010;
    break;
  case 3:
    pcVar3 = s_plats_ttrain3_wav_10113ffc;
    break;
  case 4:
    pcVar3 = s_plats_ttrain4_wav_10113fe8;
    break;
  case 5:
    pcVar3 = s_plats_ttrain6_wav_10113fd4;
    break;
  case 6:
    pcVar3 = s_plats_ttrain7_wav_10113fc0;
    break;
  default:
    goto switchD_10076b0d_default;
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1e8) = (int)pcVar3 - *(int *)(DAT_10122044 + 0x98);
switchD_10076b0d_default:
  if (*(int *)(*(int *)(param_1 + 4) + 0x1ec) == 0) {
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) =
         (int)s_plats_ttrain_brake1_wav_10113fa8 - *(int *)(DAT_10122044 + 0x98);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x1f0) == 0) {
    *(int *)(*(int *)(param_1 + 4) + 0x1f0) =
         (int)s_plats_ttrain_start1_wav_10113f90 - *(int *)(DAT_10122044 + 0x98);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1e8);
  if (iVar1 != 0) {
    (*DAT_10121e0c)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e0c)(*(int *)(*(int *)(param_1 + 4) + 0x1ec) + *(int *)(DAT_10122044 + 0x98));
  (*DAT_10121e0c)(*(int *)(*(int *)(param_1 + 4) + 0x1f0) + *(int *)(DAT_10122044 + 0x98));
  uVar2 = (*DAT_10121ff0)(1,s_events_train_sc_10113f80);
  *(undefined2 *)(param_1 + 0x118) = uVar2;
  return;
}

