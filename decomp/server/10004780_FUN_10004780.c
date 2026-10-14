
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10004780(int *param_1,int *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  float unaff_ESI;
  float fVar8;
  char *pcVar9;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 auStack_b8 [16];
  float fStack_a8;
  undefined4 auStack_7c [2];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [8];
  float afStack_5c [3];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  float afStack_38 [3];
  float afStack_2c [3];
  float afStack_20 [5];
  undefined1 auStack_c [12];
  
  if (*param_2 == 0x5d) {
    piVar5 = (int *)FUN_10019460((uint *)(param_1 + 0x58));
    iVar4 = (**(code **)(*piVar5 + 0x74))();
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0xf8))(auStack_c);
      iVar4 = param_1[1];
      pfVar7 = (float *)(param_1 + 0xaa);
      fStack_d0 = (float)param_1[0xac] - *(float *)(iVar4 + 0x10);
      fStack_d4 = (float)param_1[0xab] - *(float *)(iVar4 + 0xc);
      fStack_d8 = *pfVar7 - *(float *)(iVar4 + 8);
      FUN_100ae830(auStack_7c,&fStack_d8);
      fVar8 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddaf4;
      uVar1 = *(undefined4 *)(param_1[1] + 0x208);
      fVar2 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddaf4;
      fStack_100 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddaf4;
      pfVar6 = (float *)(**(code **)(*param_1 + 0xf8))(auStack_64);
      fStack_f8 = fVar2 + pfVar6[2];
      fStack_fc = fVar8 + pfVar6[1];
      fStack_100 = unaff_ESI + *pfVar6;
      FUN_100afc60(&fStack_100,pfVar7,1,uVar1,auStack_b8);
      if (fStack_a8 == (float)_DAT_100dd628) {
        fVar8 = 128.0;
        pfVar7 = afStack_38;
LAB_1000493d:
        pfVar7 = (float *)FUN_10002280((void *)(DAT_10122044 + 0x40),pfVar7,fVar8);
        iVar4 = param_1[1];
        fVar8 = pfVar7[2] + *(float *)(iVar4 + 0x10);
        fVar2 = pfVar7[1] + *(float *)(iVar4 + 0xc);
        fVar3 = *pfVar7 + *(float *)(iVar4 + 8);
      }
      else {
        fVar8 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddaf4;
        uVar1 = *(undefined4 *)(param_1[1] + 0x208);
        fVar2 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddaf4;
        fVar3 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddaf4;
        pfVar6 = (float *)(**(code **)(*param_1 + 0xf8))(auStack_50);
        fStack_ec = pfVar6[2] - fVar3;
        fStack_f0 = pfVar6[1] - fVar2;
        fStack_f4 = *pfVar6 - fVar8;
        FUN_100afc60(&fStack_f4,pfVar7,1,uVar1,auStack_b8);
        if (fStack_a8 == (float)_DAT_100dd628) {
          pfVar7 = (float *)FUN_10002280((void *)(DAT_10122044 + 0x40),afStack_20,128.0);
          iVar4 = param_1[1];
          fVar8 = *(float *)(iVar4 + 0x10) - pfVar7[2];
          fVar2 = *(float *)(iVar4 + 0xc) - pfVar7[1];
          fVar3 = *(float *)(iVar4 + 8) - *pfVar7;
        }
        else {
          uVar1 = *(undefined4 *)(param_1[1] + 0x208);
          fVar8 = *(float *)(DAT_10122044 + 0x28) * _DAT_100dd658;
          fVar2 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd658;
          fVar3 = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd658;
          pfVar6 = (float *)(**(code **)(*param_1 + 0xf8))(auStack_74);
          fStack_e0 = fVar3 + pfVar6[2];
          fStack_e4 = fVar2 + pfVar6[1];
          fStack_e8 = fVar8 + *pfVar6;
          FUN_100afc60(&fStack_e8,pfVar7,1,uVar1,auStack_b8);
          if (fStack_a8 == (float)_DAT_100dd628) {
            fVar8 = 256.0;
            pfVar7 = afStack_5c;
            goto LAB_1000493d;
          }
          fVar8 = *(float *)(DAT_10122044 + 0x28) * _DAT_100dd658;
          uVar1 = *(undefined4 *)(param_1[1] + 0x208);
          fVar2 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd658;
          fVar3 = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd658;
          pfVar6 = (float *)(**(code **)(*param_1 + 0xf8))(auStack_44);
          FUN_10001d60(&fStack_c4,*pfVar6 - fVar8,pfVar6[1] - fVar2,pfVar6[2] - fVar3);
          FUN_100afc60(&fStack_c4,pfVar7,1,uVar1,auStack_b8);
          if (fStack_a8 != (float)_DAT_100dd628) goto LAB_10004bef;
          pfVar7 = (float *)FUN_10002280((void *)(DAT_10122044 + 0x40),afStack_2c,256.0);
          iVar4 = param_1[1];
          fVar8 = *(float *)(iVar4 + 0x10) - pfVar7[2];
          fVar2 = *(float *)(iVar4 + 0xc) - pfVar7[1];
          fVar3 = *(float *)(iVar4 + 8) - *pfVar7;
        }
      }
      FUN_10060260(param_1,fVar3,fVar2,fVar8);
LAB_10004976:
      if ((param_1[0x57] & 0x40000000U) != 0) {
        return;
      }
      param_1[0x78] = 4;
      return;
    }
    pcVar9 = s_AGRunt___no_enemy_monster_ptr____10101ac4;
  }
  else {
    if (*param_2 != 0x5e) {
      FUN_100057f0(param_1,param_2);
      return;
    }
    FUN_100af200(param_1[1] + 0x50);
    fStack_100 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddaf8;
    fStack_fc = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddaf8;
    fStack_c8 = (float)param_1[0xaa] - *(float *)(DAT_10122044 + 0x28) * _DAT_100ddaf8;
    fStack_c4 = (float)param_1[0xab] - fStack_100;
    fStack_c0 = (float)param_1[0xac] - fStack_fc;
    iVar4 = FUN_1005e720(param_1,&fStack_c8,0x40,0);
    if (iVar4 != 0) goto LAB_10004976;
    pcVar9 = s_AGruntGetPathToEnemyCorpse_faile_10101ae8;
  }
  (*DAT_10121efc)(2,pcVar9);
LAB_10004bef:
  param_1[0x57] = param_1[0x57] | 0x40000000;
  return;
}

