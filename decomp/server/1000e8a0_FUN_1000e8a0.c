
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000e8a0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 uVar8;
  int iVar9;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int *piStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_74 [12];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  int aiStack_20 [5];
  int *piStack_c;
  
  switch(*param_2) {
  case 1:
  case 3:
    uVar2 = *(undefined4 *)(param_1[1] + 0x208);
    uVar8 = (*DAT_10121f70)(0x5f,0x69);
    uVar14 = 0;
    uVar13 = 0x3f4ccccd;
    uVar12 = 0x3f800000;
    iVar9 = (*DAT_10121f70)(0,2);
    FUN_10094b20(this_04,uVar2,3,(&PTR_s_gonarch_gon_step1_wav_101034b0)[iVar9],uVar12,uVar13,uVar14
                 ,uVar8);
    return;
  case 2:
  case 4:
    uVar2 = *(undefined4 *)(param_1[1] + 0x208);
    uVar8 = (*DAT_10121f70)(0x5f,0x69);
    uVar14 = 0;
    uVar13 = 0x3f4ccccd;
    uVar12 = 0x3f800000;
    iVar9 = (*DAT_10121f70)(0,2);
    FUN_10094b20((&PTR_s_gonarch_gon_step1_wav_101034b0)[iVar9],uVar2,4,
                 (&PTR_s_gonarch_gon_step1_wav_101034b0)[iVar9],uVar12,uVar13,uVar14,uVar8);
    return;
  case 5:
    iVar9 = (*DAT_10121f70)(0,100);
    if (iVar9 < 0x1e) {
      uVar2 = *(undefined4 *)(param_1[1] + 0x208);
      uVar8 = (*DAT_10121f70)(0x5f,0x69);
      uVar14 = 0;
      uVar13 = 0x3f4ccccd;
      uVar12 = 0x3f800000;
      iVar9 = (*DAT_10121f70)(0,2);
      FUN_10094b20((&PTR_s_gonarch_gon_sack1_wav_10103464)[iVar9],uVar2,4,
                   (&PTR_s_gonarch_gon_sack1_wav_10103464)[iVar9],uVar12,uVar13,uVar14,uVar8);
      return;
    }
    break;
  case 6:
    uVar2 = *(undefined4 *)(param_1[1] + 0x208);
    uVar8 = (*DAT_10121f70)(0x5f,0x69);
    uVar14 = 0;
    uVar13 = 0x3f4ccccd;
    uVar12 = 0x3f800000;
    iVar9 = (*DAT_10121f70)(0,0);
    FUN_10094b20(this_03,uVar2,2,(&PTR_s_gonarch_gon_die1_wav_10103470)[iVar9],uVar12,uVar13,uVar14,
                 uVar8);
    return;
  default:
    FUN_10060620(param_1,param_2);
    break;
  case 8:
  case 9:
  case 10:
    (*DAT_10121e58)(param_1[1] + 0x50,&fStack_90,auStack_74,0);
    iVar9 = param_1[1];
    fVar3 = fStack_88 * _DAT_100ddaf4;
    fStack_5c = fStack_90 * _DAT_100ddaf4 + *(float *)(iVar9 + 8);
    fStack_58 = fStack_8c * _DAT_100ddaf4 + *(float *)(iVar9 + 0xc);
    fStack_60 = fVar3 + *(float *)(iVar9 + 0x10);
    fStack_68 = fStack_5c - _DAT_100ddb10;
    fStack_64 = fStack_58 - _DAT_100ddb10;
    fStack_5c = fStack_5c + _DAT_100ddb10;
    fStack_58 = fStack_58 + _DAT_100ddb10;
    fStack_54 = fStack_60 + _DAT_100ddb10;
    iVar9 = FUN_100ae980(aiStack_20,8,&fStack_68,&fStack_5c,0x28);
    piVar11 = (int *)0x0;
    iVar10 = 0;
    if (iVar9 < 1) {
      return;
    }
    piStack_84 = aiStack_20;
    do {
      if (piVar11 != (int *)0x0) goto LAB_1000e9f6;
      piVar1 = (int *)*piStack_84;
      if ((piVar1 != param_1) && (*(int *)(piVar1[1] + 0x198) != *(int *)(param_1[1] + 0x208))) {
        piVar11 = piVar1;
      }
      iVar10 = iVar10 + 1;
      piStack_84 = piStack_84 + 1;
    } while (iVar10 < iVar9);
    if (piVar11 == (int *)0x0) {
      return;
    }
LAB_1000e9f6:
    (**(code **)(*piVar11 + 0x60))(param_1[1],param_1[1],DAT_10126a68,5);
    *(undefined4 *)(piVar11[1] + 0x68) = 0x41700000;
    iVar9 = *piStack_c;
    if (iVar9 == 8) {
      fStack_8c = fStack_80 * _DAT_100de484;
      iVar9 = piVar11[1];
      pfVar7 = (float *)(iVar9 + 0x20);
      fStack_88 = fStack_7c * _DAT_100de484;
      fVar4 = fStack_9c * _DAT_100df288;
      fStack_4c = fStack_98 * _DAT_100df288 + *(float *)(iVar9 + 0x28) + _DAT_100dd640;
      *pfVar7 = (fVar3 * _DAT_100df288 + *pfVar7) - (float)piStack_84 * _DAT_100de484;
      fStack_4c = fStack_4c - fStack_88;
      *(float *)(iVar9 + 0x24) = (fVar4 + *(float *)(iVar9 + 0x24)) - fStack_8c;
    }
    else {
      if (iVar9 == 9) {
        fStack_80 = fStack_80 * _DAT_100de484;
        iVar9 = piVar11[1];
        fStack_7c = fStack_7c * _DAT_100de484;
        fVar4 = fStack_9c * _DAT_100df288;
        fVar5 = fStack_98 * _DAT_100df288 + *(float *)(iVar9 + 0x28) + _DAT_100dd640;
        *(float *)(iVar9 + 0x20) =
             fVar3 * _DAT_100df288 + *(float *)(iVar9 + 0x20) + (float)piStack_84 * _DAT_100de484;
        *(float *)(iVar9 + 0x24) = fVar4 + *(float *)(iVar9 + 0x24) + fStack_80;
        *(float *)(iVar9 + 0x28) = fVar5 + fStack_7c;
        goto LAB_1000ec5f;
      }
      if (iVar9 != 10) goto LAB_1000ec5f;
      FUN_10001d60(&fStack_60,fVar3 * _DAT_100df28c,fStack_9c * _DAT_100df28c,
                   fStack_98 * _DAT_100df28c);
      iVar9 = piVar11[1];
      FUN_10001d60(&uStack_3c,fStack_60 + *(float *)(iVar9 + 0x20),
                   fStack_5c + *(float *)(iVar9 + 0x24),fStack_58 + *(float *)(iVar9 + 0x28));
      FUN_10001d60(&fStack_54,uStack_3c,uStack_38,fStack_34 + _DAT_100de484);
      iVar9 = piVar11[1];
      pfVar7 = (float *)(iVar9 + 0x20);
      *pfVar7 = fStack_54;
      *(undefined4 *)(iVar9 + 0x24) = uStack_50;
    }
    pfVar7[2] = fStack_4c;
LAB_1000ec5f:
    *(uint *)(piVar11[1] + 0x1a4) = *(uint *)(piVar11[1] + 0x1a4) & 0xfffffdff;
    uVar2 = *(undefined4 *)(param_1[1] + 0x208);
    iVar9 = (*DAT_10121f70)(0xfffffffb,5);
    iVar9 = iVar9 + 100;
    uVar13 = 0;
    uVar12 = 0x3f4ccccd;
    uVar8 = 0x3f800000;
    iVar10 = (*DAT_10121f70)(0,2);
    FUN_10094b20(this,uVar2,1,(&PTR_s_zombie_claw_strike1_wav_10103480)[iVar10],uVar8,uVar12,uVar13,
                 iVar9);
    return;
  case 0xb:
    FUN_1000f4a0((int)param_1);
    return;
  case 0xc:
    FUN_1000f2f0((int)param_1);
    return;
  case 0xd:
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    iVar9 = param_1[1];
    fStack_30 = *(float *)(iVar9 + 0x10) + _DAT_100dd618;
    fStack_34 = *(float *)(iVar9 + 0xc);
    uStack_38 = *(undefined4 *)(iVar9 + 8);
    FUN_100afe10((int)param_1,&uStack_38);
    FUN_100af200(param_1[1] + 0x50);
    iVar9 = param_1[1];
    fVar3 = *(float *)(DAT_10122044 + 0x38) * _DAT_100df284;
    fVar4 = *(float *)(DAT_10122044 + 0x3c) * _DAT_100df284;
    fVar5 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100de484;
    fVar6 = *(float *)(DAT_10122044 + 0x30) * _DAT_100de484;
    *(float *)(iVar9 + 0x20) =
         *(float *)(DAT_10122044 + 0x28) * _DAT_100de484 +
         *(float *)(DAT_10122044 + 0x34) * _DAT_100df284;
    *(float *)(iVar9 + 0x24) = fVar5 + fVar3;
    *(float *)(iVar9 + 0x28) = fVar6 + fVar4;
    return;
  case 0xe:
    uVar2 = *(undefined4 *)(param_1[1] + 0x208);
    uVar8 = (*DAT_10121f70)(0x5f,0x69);
    uVar14 = 0;
    uVar13 = 0x3f4ccccd;
    uVar12 = 0x3f800000;
    iVar9 = (*DAT_10121f70)(0,2);
    FUN_10094b20(this_00,uVar2,2,(&PTR_s_gonarch_gon_alert1_wav_10103498)[iVar9],uVar12,uVar13,
                 uVar14,uVar8);
    return;
  case 0xf:
    uVar2 = *(undefined4 *)(param_1[1] + 0x208);
    uVar8 = (*DAT_10121f70)(0x5f,0x69);
    uVar14 = 0;
    uVar13 = 0x3f4ccccd;
    uVar12 = 0x3f800000;
    iVar9 = (*DAT_10121f70)(0,2);
    FUN_10094b20((&PTR_s_gonarch_gon_pain2_wav_101034a4)[iVar9],uVar2,2,
                 (&PTR_s_gonarch_gon_pain2_wav_101034a4)[iVar9],uVar12,uVar13,uVar14,uVar8);
    return;
  case 0x10:
    uVar2 = *(undefined4 *)(param_1[1] + 0x208);
    uVar8 = (*DAT_10121f70)(0x5f,0x69);
    uVar14 = 0;
    uVar13 = 0x3f4ccccd;
    uVar12 = 0x3f800000;
    iVar9 = (*DAT_10121f70)(0,2);
    FUN_10094b20(this_01,uVar2,1,(&PTR_s_gonarch_gon_attack1_wav_10103474)[iVar9],uVar12,uVar13,
                 uVar14,uVar8);
    return;
  case 0x11:
    uVar2 = *(undefined4 *)(param_1[1] + 0x208);
    uVar8 = (*DAT_10121f70)(0x5f,0x69);
    uVar14 = 0;
    uVar13 = 0x3f4ccccd;
    uVar12 = 0x3f800000;
    iVar9 = (*DAT_10121f70)(0,2);
    FUN_10094b20(this_02,uVar2,4,(&PTR_s_gonarch_gon_birth1_wav_1010348c)[iVar9],uVar12,uVar13,
                 uVar14,uVar8);
    return;
  case 0x32:
    iVar9 = FUN_10019410((uint *)(param_1 + 0x5a));
    if ((iVar9 != 0) && (iVar9 = *(int *)(*(int *)(iVar9 + 4) + 0x1d4), iVar9 != 0)) {
      FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + iVar9),param_1,param_1,3,0);
    }
    param_1[0xa8] = param_1[0xa8] | 0x10000000;
    return;
  }
  return;
}

