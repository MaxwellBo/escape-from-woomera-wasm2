
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10047380(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  undefined3 extraout_var;
  void *extraout_ECX;
  void *this;
  float10 fVar5;
  float in_stack_ffffff58;
  float fVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char *pcVar13;
  undefined4 uVar14;
  void *pvVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [3];
  undefined4 auStack_1c [3];
  float afStack_10 [4];
  
  bVar4 = FUN_10019450((uint *)(param_1 + 0x58));
  if ((CONCAT31(extraout_var,bVar4) == 0) && (param_1[0xbf] == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x214))();
  FUN_10061590(param_1,auStack_1c,afStack_28);
  if (*DAT_10122044 <= (float)param_1[0xc2] + _DAT_100de4ac) {
    fVar8 = (float)param_1[0xc3];
    fVar9 = (float)_DAT_100dfb88;
    param_1[0xc3] = (int)(fVar8 - fVar9);
    if (fVar8 - fVar9 < (float)_DAT_100de4c8) {
      param_1[0xc3] = 0x3ca3d70a;
    }
  }
  else {
    param_1[0xc3] = 0x3dcccccd;
  }
  param_1[0xc2] = (int)*DAT_10122044;
  FUN_100af200(param_1[1] + 0x50);
  fVar5 = (float10)(*DAT_10121f74)();
  pfVar2 = DAT_10122044;
  pfVar1 = DAT_10122044 + 0xd;
  fStack_58 = (float)(fVar5 * (float10)DAT_10122044[10]);
  fStack_54 = (float)(fVar5 * (float10)DAT_10122044[0xb]);
  fStack_50 = (float)(fVar5 * (float10)DAT_10122044[0xc]);
  fVar5 = (float10)(*DAT_10121f74)();
  pfVar3 = DAT_10122044;
  fVar12 = 40.0;
  fStack_64 = (float)(fVar5 * (float10)*pfVar1);
  fStack_60 = (float)(fVar5 * (float10)pfVar2[0xe]);
  pfVar1 = DAT_10122044 + 0x10;
  fStack_5c = (float)(fVar5 * (float10)pfVar2[0xf]);
  fVar11 = 2.6122255e-29;
  fVar5 = (float10)(*DAT_10121f74)();
  fStack_4c = (float)(fVar5 * (float10)*pfVar1);
  fStack_48 = (float)(fVar5 * (float10)pfVar3[0x11]);
  fStack_40 = fStack_4c + fStack_64;
  fStack_3c = fStack_48 + fStack_60;
  fStack_34 = fStack_40 + fStack_58;
  fStack_30 = fStack_3c + fStack_54;
  fStack_2c = (float)(fVar5 * (float10)pfVar3[0x12] + (float10)fStack_5c + (float10)fStack_50);
  fStack_58 = DAT_10122044[10] * _DAT_100dd624;
  fStack_54 = DAT_10122044[0xb] * _DAT_100dd624;
  fStack_50 = DAT_10122044[0xc] * _DAT_100dd624;
  FUN_10001d60(&fStack_40,DAT_10122044[0xd] * _DAT_100ddac8,DAT_10122044[0xe] * _DAT_100ddac8,
               DAT_10122044[0xf] * _DAT_100ddac8);
  iVar18 = param_1[1];
  FUN_10001d60(&fStack_4c,fStack_40 + *(float *)(iVar18 + 8),fStack_3c + *(float *)(iVar18 + 0xc),
               fStack_38 + *(float *)(iVar18 + 0x10));
  FUN_10001d60(&fStack_64,fStack_4c + fStack_58,fStack_48 + fStack_54,fStack_44 + fStack_50);
  uVar14 = 0x100475c9;
  FUN_100b2da0(&fStack_64,&fStack_34,*(undefined4 *)(param_1[1] + 0x54),param_1[0xcf],1);
  fVar8 = (float)param_1[0xc3];
  fVar20 = 0.0;
  iVar19 = 0;
  iVar18 = 4;
  fVar17 = 8.40779e-45;
  fVar16 = 2048.0;
  fVar9 = fVar8;
  fVar10 = fVar8;
  FUN_10001d60(&stack0xffffff70,fVar8,fVar8,fVar8);
  puVar7 = auStack_1c;
  fVar6 = 2.6123326e-29;
  FUN_10003850(&stack0xffffff64,puVar7);
  FUN_10003850(&stack0xffffff58,afStack_28);
  FUN_100204d0(param_1,1,in_stack_ffffff58,fVar6,(float)puVar7,fVar8,fVar9,fVar10,fVar11,fVar12,
               uVar14,fVar16,fVar17,iVar18,iVar19,fVar20);
  iVar18 = (*DAT_10121f70)();
  if (iVar18 == 0) {
    uVar14 = *(undefined4 *)(param_1[1] + 0x208);
    fVar5 = (float10)(*DAT_10121f74)();
    pvVar15 = (void *)(float)fVar5;
    pcVar13 = s_weapons_pl_gun1_wav_1010dbf4;
    this = extraout_ECX;
  }
  else {
    if (iVar18 != 1) goto LAB_100476a1;
    uVar14 = *(undefined4 *)(param_1[1] + 0x208);
    fVar5 = (float10)(*DAT_10121f74)();
    this = (void *)(float)fVar5;
    pcVar13 = s_weapons_pl_gun2_wav_1010dc08;
    pvVar15 = this;
  }
  FUN_10094b20(this,uVar14,1,pcVar13,pvVar15,0x3f4ccccd,0,100);
LAB_100476a1:
  *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) | 2;
  FUN_100ae830(afStack_10,auStack_1c);
  FUN_100083f0(param_1,0,afStack_10[0]);
  param_1[0xad] = param_1[0xad] + -1;
  return;
}

