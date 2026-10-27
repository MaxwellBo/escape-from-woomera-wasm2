
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10084940(int param_1,undefined4 param_2)

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
  
  *(uint *)(DAT_10126a38 + 0x98) = (uint)(*(int *)(DAT_10126a38 + 0x98) == 0);
  if (*(int *)(DAT_10126a38 + 0x4f5b0) == 0) {
    return;
  }
  iVar2 = (**(code **)(DAT_10126a38 + 0x4f588))(0,1);
  uVar1 = iVar2 + *(int *)(DAT_10126a38 + 0x98) * 2;
  if ((*(int *)(DAT_10126a38 + 8) != 0) && (*(int *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x40) == 0))
  {
    return;
  }
  fStack_c = *(float *)(DAT_10126a38 + 0x5c);
  uStack_8 = *(undefined4 *)(DAT_10126a38 + 0x60);
  uStack_4 = 0;
  if (((*(int *)(DAT_10126a38 + 8) != 0) && (DAT_10126a40 == 0)) &&
     (fVar6 = FUN_100841e0(&fStack_c), fVar6 <= (float10)_DAT_100df28c)) {
    return;
  }
  if (param_1 == 6) {
    puVar7 = &DAT_101083d0;
LAB_10084ab8:
    pcVar3 = (char *)(**(code **)(DAT_10126a38 + 0x4f554))(DAT_10126a38 + 0x4f3f0,puVar7);
    if ((*pcVar3 != '\0') && (pcVar3[1] != '\0')) {
LAB_10084ace:
      FUN_10084870(pcVar3,uVar1,param_2);
      return;
    }
  }
  else if (param_1 == 7) {
    pcVar3 = (char *)(**(code **)(DAT_10126a38 + 0x4f554))(DAT_10126a38 + 0x4f3f0,&DAT_101083d8);
    if ((*pcVar3 != '\0') && (pcVar3[1] != '\0')) {
      if (DAT_10126a48 == 0) {
        DAT_10126a48 = 1;
        return;
      }
      bVar5 = DAT_10126a48 == 3;
      DAT_10126a48 = DAT_10126a48 + 1;
      if (bVar5) {
        DAT_10126a48 = 0;
      }
      goto LAB_10084ace;
    }
  }
  else {
    if (param_1 == 8) {
      puVar7 = &DAT_101083e0;
      goto LAB_10084ab8;
    }
    pcVar3 = (char *)(**(code **)(DAT_10126a38 + 0x4f554))(DAT_10126a38 + 0x4f3f0,&DAT_101083e8);
    if ((*pcVar3 != '\0') && (pcVar3[1] != '\0')) goto LAB_10084ace;
    pbVar4 = (byte *)(**(code **)(DAT_10126a38 + 0x4f554))(DAT_10126a38 + 0x4f3f0,s_stype_101083f0);
    iVar2 = FUN_100c8388(this,pbVar4);
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
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_metal1_wav_10105d80,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      pcVar3 = s_player_pl_metal3_wav_10105d50;
      break;
    case 2:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_metal2_wav_10105d68,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_metal4_wav_10105d38,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1008509a_default;
    }
    break;
  case 2:
    switch(uVar1) {
    case 0:
      pcVar3 = s_Footsteps_Player_Footstep_Dirt_5_10105cc0;
      break;
    case 1:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_Footsteps_Player_Footstep_Dirt_2_10105c98,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_Footsteps_Player_Footstep_Dirt_3_10105c70,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      pcVar3 = s_Footsteps_Player_Footstep_Dirt_4_10105c48;
      break;
    default:
      goto switchD_1008509a_default;
    }
    break;
  case 3:
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_duct1_wav_10105b94,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_duct3_wav_10105b6c,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      pcVar3 = s_player_pl_duct2_wav_10105b80;
      break;
    case 3:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_duct4_wav_10105b58,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1008509a_default;
    }
    break;
  case 4:
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_grate1_wav_10105b40,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      pcVar3 = s_player_pl_grate3_wav_10105b10;
      break;
    case 2:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_grate2_wav_10105b28,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_grate4_wav_10105af8,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1008509a_default;
    }
    break;
  case 5:
    iVar2 = (**(code **)(DAT_10126a38 + 0x4f588))(0,4);
    if ((iVar2 != 0) && (4 < uVar1)) {
      return;
    }
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_tile1_wav_10105a84,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      pcVar3 = s_player_pl_tile3_wav_10105a5c;
      break;
    case 2:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_tile2_wav_10105a70,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_tile4_wav_10105a48,param_2,0x3f4ccccd,0,100);
      return;
    default:
      pcVar3 = s_player_pl_tile5_wav_10105a34;
    }
    break;
  case 6:
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_slosh1_wav_10105ae0,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_slosh3_wav_10105ab0,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      pcVar3 = s_player_pl_slosh2_wav_10105ac8;
      break;
    case 3:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_slosh4_wav_10105a98,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1008509a_default;
    }
    break;
  case 7:
    if (DAT_10126a48 == 0) {
      DAT_10126a48 = 1;
      return;
    }
    bVar5 = DAT_10126a48 == 3;
    DAT_10126a48 = DAT_10126a48 + 1;
    if (bVar5) {
      DAT_10126a48 = 0;
    }
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_wade1_wav_101059e4,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_wade2_wav_101059d0,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      pcVar3 = s_player_pl_wade3_wav_101059bc;
      break;
    case 3:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_wade4_wav_101059a8,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1008509a_default;
    }
    break;
  case 8:
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_ladder1_wav_10101a1c,param_2,0x3f4ccccd,0,100);
      return;
    case 1:
      pcVar3 = s_player_pl_ladder3_wav_10101a34;
      break;
    case 2:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_ladder2_wav_10101a4c,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_player_pl_ladder4_wav_10101a64,param_2,0x3f4ccccd,0,100);
      return;
    default:
      goto switchD_1008509a_default;
    }
    break;
  default:
    switch(uVar1) {
    case 0:
      pcVar3 = s_Footsteps_Guard_Footstep_Generic_10105c20;
      break;
    case 1:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_Footsteps_Guard_Footstep_Generic_10105bf8,param_2,0x3f4ccccd,0,100);
      return;
    case 2:
      (**(code **)(DAT_10126a38 + 0x4f5b4))
                (4,s_Footsteps_Guard_Footstep_Generic_10105bd0,param_2,0x3f4ccccd,0,100);
      return;
    case 3:
      pcVar3 = s_Footsteps_Guard_Footstep_Generic_10105ba8;
      break;
    default:
      goto switchD_1008509a_default;
    }
  }
  (**(code **)(DAT_10126a38 + 0x4f5b4))(4,pcVar3,param_2,0x3f4ccccd,0,100);
switchD_1008509a_default:
  return;
}

