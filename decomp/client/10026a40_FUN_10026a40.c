
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10026a40(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  void *this;
  bool bVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(uint *)(DAT_100acc38 + 0x98) = (uint)(*(int *)(DAT_100acc38 + 0x98) == 0);
  if (*(int *)(DAT_100acc38 + 0x4f5b0) == 0) {
    return;
  }
  iVar2 = (**(code **)(DAT_100acc38 + 0x4f588))(0,1);
  uVar1 = iVar2 + *(int *)(DAT_100acc38 + 0x98) * 2;
  if ((*(int *)(DAT_100acc38 + 8) != 0) && (*(int *)(*(int *)(DAT_100acc38 + 0x4f4f0) + 0x40) == 0))
  {
    return;
  }
  fStack_c = *(float *)(DAT_100acc38 + 0x5c);
  uStack_8 = *(undefined4 *)(DAT_100acc38 + 0x60);
  uStack_4 = 0;
  if (((*(int *)(DAT_100acc38 + 8) != 0) && (DAT_100acc40 == 0)) &&
     (fVar6 = FUN_100264c0(&fStack_c), fVar6 <= (float10)_DAT_1006020c)) {
    return;
  }
  if (param_1 == 6) {
    puVar7 = &DAT_10079918;
LAB_10026bb8:
    pcVar3 = (char *)(**(code **)(DAT_100acc38 + 0x4f554))(DAT_100acc38 + 0x4f3f0,puVar7);
    if ((*pcVar3 != '\0') && (pcVar3[1] != '\0')) {
LAB_10026bce:
      FUN_10026970(pcVar3,uVar1,param_2);
      return;
    }
  }
  else if (param_1 == 7) {
    pcVar3 = (char *)(**(code **)(DAT_100acc38 + 0x4f554))(DAT_100acc38 + 0x4f3f0,&DAT_10079920);
    if ((*pcVar3 != '\0') && (pcVar3[1] != '\0')) {
      if (DAT_100acc48 == 0) {
        DAT_100acc48 = 1;
        return;
      }
      bVar5 = DAT_100acc48 == 3;
      DAT_100acc48 = DAT_100acc48 + 1;
      if (bVar5) {
        DAT_100acc48 = 0;
      }
      goto LAB_10026bce;
    }
  }
  else {
    if (param_1 == 8) {
      puVar7 = &DAT_10079928;
      goto LAB_10026bb8;
    }
    pcVar3 = (char *)(**(code **)(DAT_100acc38 + 0x4f554))(DAT_100acc38 + 0x4f3f0,&DAT_10079938);
    if ((*pcVar3 != '\0') && (pcVar3[1] != '\0')) goto LAB_10026bce;
    pbVar4 = (byte *)(**(code **)(DAT_100acc38 + 0x4f554))(DAT_100acc38 + 0x4f3f0,s_stype_10079930);
    iVar2 = FUN_100499e5(this,pbVar4);
    if (iVar2 == -1) {
      param_1 = 0;
    }
    else if (iVar2 != 0) {
      param_1 = iVar2;
    }
  }
  switch(param_1) {
  case 1:
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_metal1_wav_10076694,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      pcVar3 = s_player_pl_metal3_wav_10079900;
      break;
    case 2:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_metal2_wav_1007667c,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_metal4_wav_100798e8,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1002719a_default;
    }
    break;
  case 2:
    switch(uVar1) {
    case 0:
      pcVar3 = s_Footsteps_Player_Footstep_Dirt_5_100798c0;
      break;
    case 1:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_Footsteps_Player_Footstep_Dirt_2_10079898,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_Footsteps_Player_Footstep_Dirt_3_10079870,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      pcVar3 = s_Footsteps_Player_Footstep_Dirt_4_10079848;
      break;
    default:
      goto switchD_1002719a_default;
    }
    break;
  case 3:
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_duct1_wav_1007662c,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_duct3_wav_10079834,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      pcVar3 = s_player_pl_duct2_wav_10079820;
      break;
    case 3:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_duct4_wav_1007980c,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1002719a_default;
    }
    break;
  case 4:
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_grate1_wav_10076614,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      pcVar3 = s_player_pl_grate3_wav_100797f4;
      break;
    case 2:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_grate2_wav_100797dc,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_grate4_wav_100765fc,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1002719a_default;
    }
    break;
  case 5:
    iVar2 = (**(code **)(DAT_100acc38 + 0x4f588))(0,4);
    if ((iVar2 != 0) && (4 < uVar1)) {
      return;
    }
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_tile1_wav_100765e8,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      pcVar3 = s_player_pl_tile3_wav_100765d4;
      break;
    case 2:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_tile2_wav_100765c0,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_tile4_wav_100765ac,param_2,0x3f4ccccd,0,100);
      return;
    default:
      pcVar3 = s_player_pl_tile5_wav_100797c8;
    }
    break;
  case 6:
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_slosh1_wav_10076594,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_slosh3_wav_1007657c,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      pcVar3 = s_player_pl_slosh2_wav_10076564;
      break;
    case 3:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_slosh4_wav_1007654c,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1002719a_default;
    }
    break;
  case 7:
    if (DAT_100acc48 == 0) {
      DAT_100acc48 = 1;
      return;
    }
    bVar5 = DAT_100acc48 == 3;
    DAT_100acc48 = DAT_100acc48 + 1;
    if (bVar5) {
      DAT_100acc48 = 0;
    }
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_wade1_wav_100797b4,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_wade2_wav_100797a0,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      pcVar3 = s_player_pl_wade3_wav_1007978c;
      break;
    case 3:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_wade4_wav_10079778,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1002719a_default;
    }
    break;
  case 8:
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_ladder1_wav_10079760,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      pcVar3 = s_player_pl_ladder3_wav_10079748;
      break;
    case 2:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_ladder2_wav_10079730,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_player_pl_ladder4_wav_10079718,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1002719a_default;
    }
    break;
  default:
    switch(uVar1) {
    case 0:
      pcVar3 = s_Footsteps_Guard_Footstep_Generic_100796f0;
      break;
    case 1:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_Footsteps_Guard_Footstep_Generic_100796c8,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      (**(code **)(DAT_100acc38 + 0x4f5b4))
                (4,s_Footsteps_Guard_Footstep_Generic_100796a0,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      pcVar3 = s_Footsteps_Guard_Footstep_Generic_10079678;
      break;
    default:
      goto switchD_1002719a_default;
    }
  }
  (**(code **)(DAT_100acc38 + 0x4f5b4))(4,pcVar3,param_2,0x3f4ccccd,0,100);
switchD_1002719a_default:
  return;
}

