
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004afc0(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  longlong lVar5;
  float in_stack_ffffff5c;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float fVar18;
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
    FUN_100af200(param_1[1] + 0x50);
    fVar2 = (float10)(*DAT_10121f74)();
    iVar16 = DAT_10122044;
    fVar6 = *(float *)(DAT_10122044 + 0x28);
    pfVar7 = (float *)(DAT_10122044 + 0x34);
    fVar8 = *(float *)(DAT_10122044 + 0x2c);
    fVar9 = *(float *)(DAT_10122044 + 0x30);
    fVar3 = (float10)(*DAT_10121f74)();
    iVar17 = DAT_10122044;
    fVar10 = *pfVar7;
    uVar13 = 0x42b40000;
    fVar12 = 40.0;
    fVar11 = *(float *)(iVar16 + 0x38);
    fVar14 = *(float *)(iVar16 + 0x3c);
    pfVar7 = (float *)(DAT_10122044 + 0x40);
    fVar4 = (float10)(*DAT_10121f74)();
    fStack_28 = (float)(fVar4 * (float10)*pfVar7) + (float)(fVar3 * (float10)fVar10);
    fStack_1c = fStack_28 + (float)(fVar2 * (float10)fVar6);
    fStack_18 = (float)(fVar4 * (float10)*(float *)(iVar17 + 0x44)) +
                (float)(fVar3 * (float10)fVar11) + (float)(fVar2 * (float10)fVar8);
    fStack_14 = (float)(fVar4 * (float10)*(float *)(iVar17 + 0x48) +
                        (float10)(float)(fVar3 * (float10)fVar14) +
                       (float10)(float)(fVar2 * (float10)fVar9));
    fStack_24 = fStack_3c * _DAT_100e0ed0;
    fVar11 = 2.8026e-45;
    fStack_20 = fStack_38 * _DAT_100e0ed0;
    fStack_34 = fStack_4c - fStack_40 * _DAT_100e0ed0;
    fStack_30 = local_48 - fStack_24;
    fStack_2c = fStack_44 - fStack_20;
    FUN_100b2da0(&fStack_34,&fStack_1c,*(undefined4 *)(param_1[1] + 0x54),param_1[0xdc],2);
    fVar18 = 0.0;
    iVar17 = 0;
    iVar16 = 0;
    fVar15 = 5.60519e-45;
    fVar14 = 2048.0;
    fVar10 = 0.13053;
    fVar9 = 0.13053;
    fVar8 = 0.13053;
    FUN_10001d60(&stack0xffffff74,0x3e05a9a8,0x3e05a9a8,0x3e05a9a8);
    pfVar7 = &fStack_40;
    fVar6 = 2.6169112e-29;
    FUN_10003850(&stack0xffffff68,pfVar7);
    FUN_10003850(&stack0xffffff5c,&fStack_4c);
    lVar5 = __ftol();
    FUN_100204d0(param_1,(uint)lVar5,in_stack_ffffff5c,fVar6,(float)pfVar7,fVar8,fVar9,fVar10,fVar11
                 ,fVar12,uVar13,fVar14,fVar15,iVar16,iVar17,fVar18);
    *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) | 2;
    param_1[0xad] = param_1[0xad] + -1;
    FUN_100ae830(afStack_10,&fStack_40);
    FUN_100083f0(param_1,0,afStack_10[0]);
  }
  return;
}

