
void __fastcall FUN_10074380(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x1e8) == 0) {
    switch(*(undefined1 *)(param_1 + 0x15c)) {
    case 1:
      pcVar1 = s_plats_bigmove1_wav_10113e40;
      break;
    case 2:
      pcVar1 = s_plats_bigmove2_wav_10113e2c;
      break;
    case 3:
      pcVar1 = s_plats_elevmove1_wav_10113e18;
      break;
    case 4:
      pcVar1 = s_plats_elevmove2_wav_10113e04;
      break;
    case 5:
      pcVar1 = s_plats_elevmove3_wav_10113df0;
      break;
    case 6:
      pcVar1 = s_plats_freightmove1_wav_10113dd8;
      break;
    case 7:
      pcVar1 = s_plats_freightmove2_wav_10113dc0;
      break;
    case 8:
      pcVar1 = s_plats_heavymove1_wav_10113da8;
      break;
    case 9:
      pcVar1 = s_plats_rackmove1_wav_10113d94;
      break;
    case 10:
      pcVar1 = s_plats_railmove1_wav_10113d80;
      break;
    case 0xb:
      pcVar1 = s_plats_squeekmove1_wav_10113d68;
      break;
    case 0xc:
      pcVar1 = s_plats_talkmove1_wav_10113d54;
      break;
    case 0xd:
      pcVar1 = s_plats_talkmove2_wav_10113d40;
      break;
    default:
      pcVar1 = s_common_null_wav_10103c74;
    }
    *(int *)(*(int *)(param_1 + 4) + 0x1e8) = (int)pcVar1 - *(int *)(DAT_10122044 + 0x98);
  }
  (*DAT_10121e0c)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1e8));
  if (*(int *)(*(int *)(param_1 + 4) + 0x1ec) == 0) {
    switch(*(undefined1 *)(param_1 + 0x15d)) {
    case 1:
      pcVar1 = s_plats_bigstop1_wav_10113d2c;
      break;
    case 2:
      pcVar1 = s_plats_bigstop2_wav_10113d18;
      break;
    case 3:
      pcVar1 = s_plats_freightstop1_wav_10113d00;
      break;
    case 4:
      pcVar1 = s_plats_heavystop2_wav_10113ce8;
      break;
    case 5:
      pcVar1 = s_plats_rackstop1_wav_10113cd4;
      break;
    case 6:
      pcVar1 = s_plats_railstop1_wav_10113cc0;
      break;
    case 7:
      pcVar1 = s_plats_squeekstop1_wav_10113ca8;
      break;
    case 8:
      pcVar1 = s_plats_talkstop1_wav_10113c94;
      break;
    default:
      pcVar1 = s_common_null_wav_10103c74;
    }
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = (int)pcVar1 - *(int *)(DAT_10122044 + 0x98);
  }
  (*DAT_10121e0c)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1ec));
  return;
}

