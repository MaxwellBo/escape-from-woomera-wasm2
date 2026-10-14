
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1004b1e0(int *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  void *pvVar9;
  int *piVar10;
  int iVar11;
  void *this;
  void *this_00;
  byte *pbVar12;
  float10 fVar13;
  float *pfVar14;
  float *pfVar15;
  undefined1 *puVar16;
  undefined4 *in_stack_ffffff14;
  float fVar17;
  undefined4 uVar18;
  float in_stack_ffffff20;
  float in_stack_ffffff24;
  char *pcVar19;
  undefined4 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_6c [3];
  undefined4 auStack_60 [3];
  float afStack_54 [6];
  float afStack_3c [3];
  undefined4 auStack_30 [3];
  float afStack_24 [3];
  float afStack_18 [3];
  float afStack_c [3];
  
  switch(*param_2) {
  case 2:
    FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),1,
                 s_hgrunt_gr_reload1_wav_1010ea0c,0x3f800000,0x3f4ccccd,0,100);
    param_1[0xad] = param_1[0xd9];
    param_1[0x57] = param_1[0x57] & 0xfffffffe;
    return;
  case 3:
    piVar10 = (int *)FUN_1004ac90((int)param_1);
    if (piVar10 != (int *)0x0) {
      FUN_100af200(param_1[1] + 0x50);
      *(undefined4 *)(piVar10[1] + 0x68) = 0x41700000;
      fStack_b0 = DAT_10122044[0xe] * _DAT_100ddaf8;
      fStack_ac = DAT_10122044[0xf] * _DAT_100ddaf8;
      fStack_a4 = DAT_10122044[0xb] * _DAT_100dd61c;
      fStack_a0 = DAT_10122044[0xc] * _DAT_100dd61c;
      iVar11 = piVar10[1];
      fStack_98 = fStack_a4 + *(float *)(iVar11 + 0x24);
      fStack_94 = fStack_a0 + *(float *)(iVar11 + 0x28);
      fStack_c0 = DAT_10122044[10] * _DAT_100dd61c + *(float *)(iVar11 + 0x20) +
                  DAT_10122044[0xd] * _DAT_100ddaf8;
      fStack_bc = fStack_98 + fStack_b0;
      *(float *)(iVar11 + 0x20) = fStack_c0;
      fStack_b8 = fStack_94 + fStack_ac;
      *(float *)(iVar11 + 0x24) = fStack_bc;
      *(float *)(iVar11 + 0x28) = fStack_b8;
      (**(code **)(*piVar10 + 0x60))();
      return;
    }
    break;
  case 4:
    iVar11 = param_1[1];
    if ((*(byte *)(iVar11 + 0x168) & 1) == 0) {
      FUN_1004afc0(param_1);
      FUN_10094b20(this_00,*(undefined4 *)(param_1[1] + 0x208),1,s_weapons_sbarrel1_wav_1010e99c,
                   0x3f800000,0x3f4ccccd,0,100);
    }
    else {
      if (param_1[0xad] < 1) {
        pcVar19 = s_weapons_dryfire1_wav_1010e9b4;
      }
      else {
        iVar11 = (*DAT_10121f70)();
        if (iVar11 == 0) {
          FUN_10094b20(this,*(undefined4 *)(param_1[1] + 0x208),1,s_hgrunt_gr_mgun2_wav_1010e9cc,
                       0x3f800000,0x3f4ccccd,0,100);
          FUN_1004ada0(param_1);
          goto LAB_1004ba1e;
        }
        iVar11 = param_1[1];
        pcVar19 = s_hgrunt_gr_mgun1_wav_1010e9e0;
      }
      FUN_10094b20(*(void **)(iVar11 + 0x208),*(void **)(iVar11 + 0x208),1,pcVar19,0x3f800000,
                   0x3f4ccccd,0,100);
      FUN_1004ada0(param_1);
    }
LAB_1004ba1e:
    FUN_10095d30(1,(undefined4 *)(param_1[1] + 8),0x180,0.3);
    return;
  case 5:
  case 6:
    FUN_1004ada0(param_1);
    return;
  case 7:
    fVar17 = 2.6170328e-29;
    FUN_100af200(param_1[1] + 0x50);
    if (param_1[0xbf] == 0) {
      pfVar5 = (float *)(param_1 + 0xd3);
      goto LAB_1004b574;
    }
    fStack_ac = DAT_10121de0;
    fStack_b4 = DAT_10121dd8;
    fStack_b0 = DAT_10121ddc;
    bVar2 = FUN_10019450((uint *)(param_1 + 0x5a));
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (iVar11 = param_1[0xbf], *(int *)(iVar11 + 0x328) == 1)) {
      if (*(int *)(iVar11 + 0x324) == 5) {
LAB_1004b3b9:
        fVar21 = 0.5;
        fVar17 = 2.61709e-29;
        iVar11 = FUN_10019460((uint *)(param_1 + 0x5a));
        FUN_10003850(&stack0xffffff20,(undefined4 *)(*(int *)(iVar11 + 4) + 8));
        pfVar5 = (float *)(**(code **)(*param_1 + 0x214))();
        in_stack_ffffff14 = auStack_30;
        pfVar5 = (float *)FUN_100446d0(in_stack_ffffff14,param_1[1],pfVar5,in_stack_ffffff20,
                                       in_stack_ffffff24,fVar17,fVar21);
        fStack_b4 = *pfVar5;
        fStack_b0 = pfVar5[1];
        fStack_ac = pfVar5[2];
      }
      else if (*(int *)(iVar11 + 0x324) != 0) {
        pbVar12 = (byte *)(*(int *)(iVar11 + 0x31c) + (int)DAT_10122044[0x26]);
        pbVar4 = (byte *)(*(int *)(iVar11 + 0x318) + (int)DAT_10122044[0x26]);
        do {
          bVar1 = *pbVar4;
          bVar2 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_1004b3b0:
            iVar11 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
            goto LAB_1004b3b5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar2 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_1004b3b0;
          pbVar4 = pbVar4 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_1004b3b5:
        if (iVar11 != 0) goto LAB_1004b3b9;
      }
    }
    if (((fStack_b4 == DAT_10121dd8) && (fStack_b0 == DAT_10121ddc)) && (fStack_ac == DAT_10121de0))
    {
      fStack_a4 = DAT_10122044[0xe] * _DAT_100dd614;
      fStack_a0 = DAT_10122044[0xf] * _DAT_100dd614;
      fStack_98 = DAT_10122044[0xb] * _DAT_100dd614;
      fStack_94 = DAT_10122044[0xc] * _DAT_100dd614;
      in_stack_ffffff24 = DAT_10122044[10] * _DAT_100dd614 + DAT_10122044[0xd] * _DAT_100dd614;
      fStack_bc = fStack_98 + fStack_a4;
      fStack_b8 = fStack_94 + fStack_a0;
      fVar21 = SQRT(fStack_bc * fStack_bc +
                    fStack_b8 * fStack_b8 + in_stack_ffffff24 * in_stack_ffffff24);
      if (fVar21 == _DAT_100dd5f8) {
        fVar23 = 1.0;
        fVar17 = 0.0;
        in_stack_ffffff24 = 0.0;
      }
      else {
        fVar21 = _DAT_100dd618 / fVar21;
        fVar23 = fStack_b8 * fVar21;
        fVar17 = fStack_bc * fVar21;
        in_stack_ffffff24 = in_stack_ffffff24 * fVar21;
      }
      in_stack_ffffff20 = 2.6171913e-29;
      FUN_10001d60(&fStack_90,in_stack_ffffff24,fVar17,fVar23);
      fStack_c0 = fStack_90 * DAT_10126aac;
      fStack_bc = fStack_8c * DAT_10126aac;
      fStack_b8 = fStack_88 * DAT_10126aac;
      fStack_b4 = fStack_c0;
      fStack_b0 = fStack_bc;
      fStack_ac = fStack_b8;
    }
    pfVar5 = &fStack_b4;
LAB_1004b574:
    uVar18 = 0x1004b57a;
    FUN_10003850(&stack0xffffff20,pfVar5);
    puVar16 = &stack0xffffff14;
    (**(code **)(*param_1 + 0x214))();
    FUN_10043bd0(param_1[1],puVar16,in_stack_ffffff14,uVar18,pfVar5,in_stack_ffffff20,
                 in_stack_ffffff24,fVar17);
    param_1[0xd6] = 0;
    param_1[0xd0] = (int)(*DAT_10122044 + _DAT_100dd620);
    return;
  case 8:
    fVar17 = 0.8;
    pcVar19 = s_weapons_glauncher_wav_1010e9f4;
    FUN_10094b20(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),1,
                 s_weapons_glauncher_wav_1010e9f4,0x3f4ccccd,0x3f4ccccd,0,100);
    if (param_1[0xbf] == 0) goto LAB_1004b824;
    bVar2 = FUN_10019450((uint *)(param_1 + 0x5a));
    if ((CONCAT31(extraout_var_00,bVar2) != 0) &&
       (iVar11 = param_1[0xbf], *(int *)(iVar11 + 0x328) == 1)) {
      if (*(int *)(iVar11 + 0x324) == 5) {
LAB_1004b67c:
        fVar22 = 0.5;
        fVar23 = 2.6173045e-29;
        fVar21 = DAT_10126aac;
        iVar11 = FUN_10019460((uint *)(param_1 + 0x5a));
        FUN_10003850(&stack0xffffff1c,(undefined4 *)(*(int *)(iVar11 + 4) + 8));
        pfVar5 = (float *)(**(code **)(*param_1 + 0x214))();
        pfVar5 = (float *)FUN_10044b60(afStack_18,param_1[1],pfVar5,(float)pcVar19,fVar17,fVar23,
                                       fVar21,fVar22);
        fStack_b4 = *pfVar5;
        fStack_b0 = pfVar5[1];
        fStack_ac = pfVar5[2];
        goto LAB_1004b824;
      }
      if (*(int *)(iVar11 + 0x324) != 0) {
        pbVar12 = (byte *)(*(int *)(iVar11 + 0x31c) + (int)DAT_10122044[0x26]);
        pbVar4 = (byte *)(*(int *)(iVar11 + 0x318) + (int)DAT_10122044[0x26]);
        do {
          bVar1 = *pbVar4;
          bVar2 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_1004b673:
            iVar11 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
            goto LAB_1004b678;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar2 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_1004b673;
          pbVar4 = pbVar4 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_1004b678:
        if (iVar11 != 0) goto LAB_1004b67c;
      }
    }
    FUN_100af200(param_1[1] + 0x50);
    fStack_98 = DAT_10122044[0xe] * _DAT_100dd614;
    fStack_94 = DAT_10122044[0xf] * _DAT_100dd614;
    fStack_a4 = DAT_10122044[0xb] * _DAT_100dd614;
    fStack_a0 = DAT_10122044[0xc] * _DAT_100dd614;
    fVar17 = DAT_10122044[10] * _DAT_100dd614 + DAT_10122044[0xd] * _DAT_100dd614;
    fStack_bc = fStack_a4 + fStack_98;
    fStack_b8 = fStack_a0 + fStack_94;
    fVar21 = SQRT(fVar17 * fVar17 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8);
    if (fVar21 == _DAT_100dd5f8) {
      fVar23 = 1.0;
      fVar22 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar21 = _DAT_100dd618 / fVar21;
      fVar23 = fStack_b8 * fVar21;
      fVar22 = fStack_bc * fVar21;
      fVar17 = fVar17 * fVar21;
    }
    FUN_10001d60(&fStack_84,fVar17,fVar22,fVar23);
    fStack_c0 = fStack_84 * DAT_10126aac;
    fStack_bc = fStack_80 * DAT_10126aac;
    fStack_b8 = fStack_7c * DAT_10126aac;
    fStack_b4 = fStack_c0;
    fStack_b0 = fStack_bc;
    fStack_ac = fStack_b8;
LAB_1004b824:
    (**(code **)(*param_1 + 0x214))();
    FUN_10043ac0(param_1[1]);
    param_1[0xd6] = 0;
    if (DAT_10121df0 != 3) {
      param_1[0xd0] = (int)(*DAT_10122044 + _DAT_100dd620);
      return;
    }
    fVar13 = (float10)(*DAT_10121f74)();
    param_1[0xd0] = (int)(float)(fVar13 + (float10)*DAT_10122044);
    return;
  case 9:
    fVar21 = 2.6174685e-29;
    FUN_100af200(param_1[1] + 0x50);
    fVar23 = 3.0;
    FUN_10003850(&stack0xffffff20,&DAT_10121dd8);
    pfVar5 = afStack_6c;
    uVar18 = 0x40c00000;
    fVar17 = 2.6174823e-29;
    pfVar6 = (float *)FUN_10002280(DAT_10122044 + 0xd,pfVar5,6.0);
    pfVar15 = (float *)&stack0xffffff14;
    pfVar7 = (float *)FUN_10002280(DAT_10122044 + 0x10,afStack_54,27.0);
    pfVar14 = afStack_3c;
    pfVar8 = (float *)FUN_10002280(DAT_10122044 + 10,afStack_24,17.0);
    pvVar9 = (void *)FUN_1000b550((void *)(param_1[1] + 8),afStack_c,pfVar8);
    pvVar9 = (void *)FUN_10002250(pvVar9,pfVar14,pfVar7);
    FUN_1000b550(pvVar9,pfVar15,pfVar6);
    FUN_10043bd0(param_1[1],fVar17,pfVar5,uVar18,in_stack_ffffff20,in_stack_ffffff24,fVar21,fVar23);
    return;
  case 10:
    iVar11 = FUN_1004a210((int)param_1);
    if (iVar11 != 0) {
      FUN_100945d0(*(undefined4 *)(param_1[1] + 0x208),(byte *)s_HG_ALERT_1010e8d8);
      FUN_1004a250((int)param_1);
    }
  default:
    FUN_10060620(param_1,param_2);
    break;
  case 0xb:
    if ((*(uint *)(param_1[1] + 0x1a0) & 0x400) == 0) {
      FUN_10008450(param_1,0,&uStack_a8,&fStack_c0);
      FUN_100084f0(param_1,2,2);
      if ((*(byte *)(param_1[1] + 0x168) & 8) == 0) {
        pcVar19 = s_weapon_9mmAR_10108bb0;
      }
      else {
        pcVar19 = s_weapon_shotgun_10108b84;
      }
      FUN_10061e00(param_1,(int)pcVar19,&uStack_a8,&fStack_c0);
      if ((*(byte *)(param_1[1] + 0x168) & 4) != 0) {
        puVar20 = auStack_60;
        puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x104))();
        FUN_10061e00(param_1,0x10108b94,puVar3,puVar20);
        return;
      }
    }
  }
  return;
}

