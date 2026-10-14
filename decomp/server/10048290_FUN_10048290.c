
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10048290(CBaseEntity *param_1)

{
  void *this;
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  void *this_00;
  char *pcVar5;
  
  FUN_10062050(param_1);
  if (((((DAT_10121df0 == 3) &&
        (bVar3 = FUN_10019450((uint *)(param_1 + 0x160)), CONCAT31(extraout_var,bVar3) != 0)) &&
       (*(int *)(*(int *)(param_1 + 4) + 0x170) == 0)) &&
      ((*(int *)(param_1 + 0x1cc) != 4 && (*(int *)(param_1 + 0x1cc) != 3)))) &&
     ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0x334) = 0x14;
  }
  else {
    *(undefined4 *)(param_1 + 0x334) = 0xff;
  }
  fVar1 = (float)*(int *)(param_1 + 0x334);
  this = *(void **)(param_1 + 4);
  if (*(float *)((int)this + 0x14c) <= fVar1) {
    if (*(float *)((int)this + 0x14c) < fVar1) {
      fVar2 = *(float *)((int)this + 0x14c) + _DAT_100ddaf8;
      if (fVar1 <= fVar2) {
        fVar2 = fVar1;
      }
      *(float *)((int)this + 0x14c) = fVar2;
      if (*(int *)(*(int *)(param_1 + 4) + 0x14c) == 0x437f0000) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x148) = 0;
      }
    }
  }
  else {
    if (*(int *)((int)this + 0x14c) == 0x437f0000) {
      FUN_10094b20(this,*(undefined4 *)((int)this + 0x208),4,s_debris_beamstart1_wav_1010dc48,
                   0x3e4ccccd,0x3f4ccccd,0,100);
    }
    fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x14c) - _DAT_100ddaf8;
    if (fVar1 <= (float)*(int *)(param_1 + 0x334)) {
      fVar1 = (float)*(int *)(param_1 + 0x334);
    }
    *(float *)(*(int *)(param_1 + 4) + 0x14c) = fVar1;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x148) = 2;
  }
  if (((*(int *)(param_1 + 0x1cc) == 4) || (*(int *)(param_1 + 0x1cc) == 3)) &&
     (DAT_10122048 = (uint)(DAT_10122048 == 0), DAT_10122048 != 0)) {
    uVar4 = (*DAT_10121f70)(0,3);
    switch(uVar4) {
    case 0:
      pcVar5 = s_player_pl_step1_wav_10105e34;
      break;
    case 1:
      FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),4,
                   s_player_pl_step3_wav_10105e0c,0x3f000000,0x3f4ccccd,0,100);
      return;
    case 2:
      FUN_10094b20(*(void **)(*(int *)(param_1 + 4) + 0x208),
                   *(void **)(*(int *)(param_1 + 4) + 0x208),4,s_player_pl_step2_wav_10105e20,
                   0x3f000000,0x3f4ccccd,0,100);
      return;
    case 3:
      pcVar5 = s_player_pl_step4_wav_10105df8;
      break;
    default:
      goto switchD_1004840d_default;
    }
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),4,pcVar5,0x3f000000,
                 0x3f4ccccd,0,100);
  }
switchD_1004840d_default:
  return;
}

