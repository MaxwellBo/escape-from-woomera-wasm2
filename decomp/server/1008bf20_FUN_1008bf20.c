
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008bf20(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int *piVar12;
  float unaff_ESI;
  float10 fVar13;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  undefined1 auStack_68 [12];
  int iStack_5c;
  int *piStack_58;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_1[0x43] != 0) {
    *(undefined4 *)(param_1[0x37] + 0x314) = 1000;
    *(undefined4 *)(param_1[0x37] + 0x31c) = 0x200;
    piStack_58 = (int *)0x1008bf62;
    FUN_1007c580((void *)param_1[0x37],5);
    piStack_58 = (int *)0x1008bf74;
    FUN_100af200(*(int *)(param_1[0x37] + 4) + 0x74);
    fVar1 = *(float *)(DAT_10122044 + 0x34) * _DAT_100e4120;
    fVar2 = *(float *)(DAT_10122044 + 0x38) * _DAT_100e4120;
    fVar5 = *(float *)(DAT_10122044 + 0x40) * _DAT_100de45c;
    fVar6 = *(float *)(DAT_10122044 + 0x44) * _DAT_100de45c;
    fVar7 = *(float *)(DAT_10122044 + 0x48) * _DAT_100de45c;
    fVar8 = *(float *)(DAT_10122044 + 0x28) * _DAT_100dd634;
    fVar9 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd634;
    fVar10 = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd634;
    piStack_58 = (int *)0x1008c004;
    pfVar11 = (float *)(**(code **)(*(int *)param_1[0x37] + 0x214))();
    fStack_1c = unaff_ESI + *pfVar11 + fVar10 + fVar7;
    fStack_18 = fVar8 + pfVar11[1] + fVar5 + fVar1;
    fStack_14 = fVar9 + pfVar11[2] + fVar6 + fVar2;
    iStack_5c = param_1[0x37];
    uStack_70 = 0x1008c075;
    piStack_58 = param_1;
    FUN_10003850(auStack_68,(undefined4 *)(*(int *)(iStack_5c + 4) + 0x74));
    FUN_10003850(auStack_74,&fStack_1c);
    piVar12 = FUN_1008b220();
    FUN_100af200(*(int *)(param_1[0x37] + 4) + 0x74);
    iVar3 = piVar12[1];
    iVar4 = *(int *)(param_1[0x37] + 4);
    fVar5 = *(float *)(iVar4 + 0x20) * *(float *)(DAT_10122044 + 0x28) +
            *(float *)(DAT_10122044 + 0x2c) * *(float *)(iVar4 + 0x24) +
            *(float *)(DAT_10122044 + 0x30) * *(float *)(iVar4 + 0x28);
    fVar1 = *(float *)(DAT_10122044 + 0x2c);
    fVar2 = *(float *)(DAT_10122044 + 0x30);
    *(float *)(iVar3 + 0x20) = fVar5 * *(float *)(DAT_10122044 + 0x28) + *(float *)(iVar3 + 0x20);
    *(float *)(iVar3 + 0x24) = fVar5 * fVar1 + *(float *)(iVar3 + 0x24);
    *(float *)(iVar3 + 0x28) = fVar5 * fVar2 + *(float *)(iVar3 + 0x28);
    (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                    CONCAT22((short)((uint)(iVar3 + 0x20) >> 0x10),(short)param_1[0x4b]),0,
                    &DAT_10121dd8,&DAT_10121dd8,0,0,0,0,0,0);
    param_1[0x43] = param_1[0x43] + -1;
    piStack_58 = (int *)0x1008c15c;
    fVar13 = FUN_100ae400();
    param_1[0x3e] = (int)(float)(fVar13 + (float10)_DAT_100dd650);
    piStack_58 = (int *)0x1008c16d;
    fVar13 = FUN_100ae400();
    param_1[0x40] = (int)(float)(fVar13 + (float10)_DAT_100dd650);
    piStack_58 = (int *)0x1008c180;
    FUN_1008c2c0((int)param_1);
    return;
  }
  (**(code **)(*param_1 + 0x174))();
  FUN_1008c2c0((int)param_1);
  return;
}

