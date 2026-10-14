
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009e490(void *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
  switch(*(int *)param_2) {
  case 1:
    FUN_10008450(param_1,0,&fStack_3c,auStack_c);
    iVar2 = *(int *)((int)param_1 + 0x340);
    if (iVar2 == 0) {
      uVar9 = 100;
      uVar10 = 0;
      uVar8 = 0x3f4ccccd;
      uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      uVar7 = 0x3f800000;
      iVar2 = (*DAT_10121f70)(0,1);
      pcVar1 = (&PTR_s_tentacle_te_strike1_wav_101180a0)[iVar2];
    }
    else if (iVar2 == 1) {
      uVar9 = 100;
      uVar10 = 0;
      uVar8 = 0x3f4ccccd;
      uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      uVar7 = 0x3f800000;
      iVar2 = (*DAT_10121f70)(0,3);
      pcVar1 = (&PTR_s_player_pl_dirt1_wav_101180a8)[iVar2];
    }
    else {
      if (iVar2 != 2) goto LAB_1009e56a;
      uVar9 = 100;
      uVar10 = 0;
      uVar8 = 0x3f4ccccd;
      uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      uVar7 = 0x3f800000;
      iVar2 = (*DAT_10121f70)(0,3);
      pcVar1 = (&PTR_s_player_pl_slosh1_wav_101180b8)[iVar2];
    }
    FUN_100af2c0(uVar3,&fStack_3c,pcVar1,uVar7,uVar8,uVar10,uVar9);
LAB_1009e56a:
    *(float *)(DAT_10122044 + 8) = *(float *)(DAT_10122044 + 8) + _DAT_100dd618;
    return;
  case 2:
  case 6:
    iVar2 = *(int *)((int)param_1 + 4);
    fVar5 = (float10)*(float *)(iVar2 + 0x54) * (float10)_DAT_100de1f8;
    fVar4 = (float10)fcos(fVar5);
    fStack_18 = (float)fVar4;
    fVar5 = (float10)fsin(fVar5);
    fStack_34 = _DAT_100dd5f8 + *(float *)(iVar2 + 0x10);
    fStack_38 = (float)(fVar5 * (float10)*(float *)((int)param_1 + 0x334)) + *(float *)(iVar2 + 0xc)
    ;
    fStack_3c = (float)((float10)fStack_18 * (float10)*(float *)((int)param_1 + 0x334)) +
                *(float *)(iVar2 + 8);
    fVar5 = FUN_1009d820((int)param_1);
    fStack_34 = (float)(fVar5 + (float10)fStack_34);
    fVar5 = (float10)(*DAT_10121f74)(0x3e99999a,0x3f000000);
    iVar2 = *(int *)((int)param_1 + 0x340);
    fVar6 = (float)fVar5;
    if (iVar2 == 0) {
      uVar10 = 100;
      uVar8 = 0;
      uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      uVar7 = 0x3f4ccccd;
      iVar2 = (*DAT_10121f70)(0,1);
      FUN_100af2c0(uVar3,&fStack_3c,(&PTR_s_tentacle_te_strike1_wav_101180a0)[iVar2],fVar6,uVar7,
                   uVar8,uVar10);
      return;
    }
    if (iVar2 == 1) {
      uVar10 = 100;
      uVar8 = 0;
      uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      uVar7 = 0x3f4ccccd;
      iVar2 = (*DAT_10121f70)(0,3);
      FUN_100af2c0(uVar3,&fStack_3c,(&PTR_s_player_pl_dirt1_wav_101180a8)[iVar2],fVar6,uVar7,uVar8,
                   uVar10);
      return;
    }
    if (iVar2 == 2) {
      uVar10 = 100;
      uVar8 = 0;
      uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      uVar7 = 0x3f4ccccd;
      iVar2 = (*DAT_10121f70)(0,3);
      FUN_100af2c0(uVar3,&fStack_3c,(&PTR_s_player_pl_slosh1_wav_101180b8)[iVar2],fVar6,uVar7,uVar8,
                   uVar10);
      return;
    }
    break;
  case 3:
    *(undefined4 *)((int)param_1 + 0x32c) = 200;
    return;
  case 4:
    *(undefined4 *)((int)param_1 + 0x32c) = 0x19;
    return;
  case 5:
    break;
  case 7:
    iVar2 = (*DAT_10121f70)(0,1);
    if (iVar2 == 0) {
      param_2 = s_tentacle_te_roar1_wav_101183c8;
    }
    else if (iVar2 == 1) {
      param_2 = s_tentacle_te_roar2_wav_101183b0;
    }
    fVar5 = FUN_1009d820((int)param_1);
    iVar2 = *(int *)((int)param_1 + 4);
    uStack_2c = *(undefined4 *)(iVar2 + 0xc);
    uStack_30 = *(undefined4 *)(iVar2 + 8);
    fStack_28 = (float)(fVar5 + (float10)*(float *)(iVar2 + 0x10));
    FUN_100af2c0(*(undefined4 *)(iVar2 + 0x208),&uStack_30,param_2,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 8:
    iVar2 = (*DAT_10121f70)(0,1);
    if (iVar2 == 0) {
      param_2 = s_tentacle_te_search1_wav_10118398;
    }
    else if (iVar2 == 1) {
      param_2 = s_tentacle_te_search2_wav_10118380;
    }
    fVar5 = FUN_1009d820((int)param_1);
    iVar2 = *(int *)((int)param_1 + 4);
    uStack_20 = *(undefined4 *)(iVar2 + 0xc);
    uStack_24 = *(undefined4 *)(iVar2 + 8);
    fStack_1c = (float)(fVar5 + (float10)*(float *)(iVar2 + 0x10));
    FUN_100af2c0(*(undefined4 *)(iVar2 + 0x208),&uStack_24,param_2,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 9:
    iVar2 = (*DAT_10121f70)(0,1);
    if (iVar2 == 0) {
      param_2 = s_tentacle_te_move1_wav_101183f8;
    }
    else if (iVar2 == 1) {
      param_2 = s_tentacle_te_move2_wav_101183e0;
    }
    fVar5 = FUN_1009d820((int)param_1);
    iVar2 = *(int *)((int)param_1 + 4);
    uStack_14 = *(undefined4 *)(iVar2 + 0xc);
    fStack_18 = *(float *)(iVar2 + 8);
    fStack_10 = (float)(fVar5 + (float10)*(float *)(iVar2 + 0x10));
    FUN_100af2c0(*(undefined4 *)(iVar2 + 0x208),&fStack_18,param_2,0x3f800000,0x3f4ccccd,0,100);
    return;
  default:
    FUN_10060620(param_1,(int *)param_2);
  }
  return;
}

