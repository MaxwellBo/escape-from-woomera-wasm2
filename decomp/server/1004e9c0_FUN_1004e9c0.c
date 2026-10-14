
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004e9c0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float fStack_4c;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_c [12];
  
  (**(code **)(*param_1 + 0x18c))();
  if (0 < *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4)) {
    FUN_100af200(*(int *)(param_1[0x37] + 4) + 0x74);
    uVar2 = *(undefined4 *)(((int *)param_1[0x37])[1] + 0x208);
    fVar3 = DAT_10122044[0xd] * _DAT_100e9600;
    fVar4 = DAT_10122044[0xe] * _DAT_100e9600;
    fVar5 = DAT_10122044[0x10] * _DAT_100de45c;
    fVar6 = DAT_10122044[0x11] * _DAT_100de45c;
    fVar7 = DAT_10122044[0x12] * _DAT_100de45c;
    fVar8 = DAT_10122044[10] * _DAT_100dd634;
    fVar9 = DAT_10122044[0xb] * _DAT_100dd634;
    fVar10 = DAT_10122044[0xc] * _DAT_100dd634;
    pfVar11 = (float *)(**(code **)(*(int *)param_1[0x37] + 0x214))(auStack_c);
    fStack_1c = fStack_4c + *pfVar11 + fVar10 + fVar7;
    fStack_18 = fVar8 + pfVar11[1] + fVar5 + fVar3;
    fStack_14 = fVar9 + pfVar11[2] + fVar6 + fVar4;
    iVar12 = FUN_1001a1f0(0x10101a7c,&fStack_1c,(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x74),
                          uVar2);
    fVar3 = DAT_10122044[0xb] * _DAT_100ddae4;
    iVar12 = *(int *)(iVar12 + 4);
    fVar4 = DAT_10122044[0xc] * _DAT_100ddae4;
    *(float *)(iVar12 + 0x20) = DAT_10122044[10] * _DAT_100ddae4;
    *(float *)(iVar12 + 0x24) = fVar3;
    *(float *)(iVar12 + 0x28) = fVar4;
    piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
    param_1[0x49] = (int)(*DAT_10122044 + (float)_DAT_100dd648);
    iVar12 = *piVar1 + -1;
    *piVar1 = iVar12;
    *(undefined4 *)(param_1[0x37] + 0x314) = 200;
    *(undefined4 *)(param_1[0x37] + 0x31c) = 0x80;
    (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                    CONCAT22((short)((uint)iVar12 >> 0x10),(short)param_1[0x4b]),0,&DAT_10121dd8,
                    &DAT_10121dd8,0,0,0,0,0,0);
    FUN_1007c580((void *)param_1[0x37],5);
    param_1[0x3e] = (int)((float)param_1[0x3e] + (float)_DAT_100dd5f0);
    fVar13 = FUN_100ae400();
    if ((float10)(float)param_1[0x3e] < fVar13) {
      fVar13 = FUN_100ae400();
      param_1[0x3e] = (int)(float)(fVar13 + (float10)_DAT_100dd5f0);
    }
    fVar13 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
    fVar14 = FUN_100ae400();
    param_1[0x40] = (int)(float)(fVar14 + (float10)(float)fVar13);
  }
  return;
}

