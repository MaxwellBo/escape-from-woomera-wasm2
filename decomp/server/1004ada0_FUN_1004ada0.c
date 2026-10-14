
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004ada0(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float in_stack_ffffff5c;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float afStack_10 [4];
  
  bVar1 = FUN_10019450((uint *)(param_1 + 0x58));
  if ((CONCAT31(extraout_var,bVar1) != 0) || (param_1[0xbf] != 0)) {
    (**(code **)(*param_1 + 0x214))();
    FUN_10061590(param_1,&fStack_40,&fStack_4c);
    if (0 < param_1[0xad]) {
      FUN_100af200(param_1[1] + 0x50);
      fVar2 = (float10)(*DAT_10121f74)();
      iVar15 = DAT_10122044;
      fVar5 = *(float *)(DAT_10122044 + 0x28);
      pfVar6 = (float *)(DAT_10122044 + 0x34);
      fVar7 = *(float *)(DAT_10122044 + 0x2c);
      fVar8 = *(float *)(DAT_10122044 + 0x30);
      fVar3 = (float10)(*DAT_10121f74)();
      iVar16 = DAT_10122044;
      fVar9 = *pfVar6;
      uVar12 = 0x42b40000;
      fVar11 = 40.0;
      fVar10 = *(float *)(iVar15 + 0x38);
      fVar13 = *(float *)(iVar15 + 0x3c);
      pfVar6 = (float *)(DAT_10122044 + 0x40);
      fVar4 = (float10)(*DAT_10121f74)();
      fStack_28 = (float)(fVar4 * (float10)*pfVar6) + (float)(fVar3 * (float10)fVar9);
      fStack_1c = fStack_28 + (float)(fVar2 * (float10)fVar5);
      fStack_18 = (float)(fVar4 * (float10)*(float *)(iVar16 + 0x44)) +
                  (float)(fVar3 * (float10)fVar10) + (float)(fVar2 * (float10)fVar7);
      fStack_14 = (float)(fVar4 * (float10)*(float *)(iVar16 + 0x48) +
                          (float10)(float)(fVar3 * (float10)fVar13) +
                         (float10)(float)(fVar2 * (float10)fVar8));
      fStack_24 = fStack_3c * _DAT_100e0ed0;
      fStack_20 = fStack_38 * _DAT_100e0ed0;
      fStack_34 = fStack_4c - fStack_40 * _DAT_100e0ed0;
      fVar10 = 1.4013e-45;
      fStack_30 = local_48 - fStack_24;
      fStack_2c = fStack_44 - fStack_20;
      FUN_100b2da0(&fStack_34,&fStack_1c,*(undefined4 *)(param_1[1] + 0x54),param_1[0xdb],1);
      fVar17 = 0.0;
      iVar16 = 0;
      iVar15 = 4;
      fVar14 = 9.80909e-45;
      fVar13 = 2048.0;
      fVar9 = 0.08716;
      fVar8 = 0.08716;
      fVar7 = 0.08716;
      FUN_10001d60(&stack0xffffff74,0x3db280f1,0x3db280f1,0x3db280f1);
      pfVar6 = &fStack_40;
      fVar5 = 2.6167517e-29;
      FUN_10003850(&stack0xffffff68,pfVar6);
      FUN_10003850(&stack0xffffff5c,&fStack_4c);
      FUN_100204d0(param_1,1,in_stack_ffffff5c,fVar5,(float)pfVar6,fVar7,fVar8,fVar9,fVar10,fVar11,
                   uVar12,fVar13,fVar14,iVar15,iVar16,fVar17);
      *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) | 2;
      param_1[0xad] = param_1[0xad] + -1;
    }
    FUN_100ae830(afStack_10,&fStack_40);
    FUN_100083f0(param_1,0,afStack_10[0]);
  }
  return;
}

