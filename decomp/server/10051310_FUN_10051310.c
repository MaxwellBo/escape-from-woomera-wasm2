
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10051310(int *param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
  if ((0 < *param_2) && (*param_2 < 3)) {
    puVar1 = (uint *)(param_1 + 0x58);
    bVar2 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      iVar3 = *param_1;
      FUN_10019410(puVar1);
      iVar3 = (**(code **)(iVar3 + 0x110))();
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_10019410(puVar1);
        if ((float)param_1[0xce] < *DAT_10122044 - (float)_DAT_100dd608) {
          iVar3 = param_1[1];
          piVar5 = (int *)FUN_10019460(puVar1);
          pfVar6 = (float *)(**(code **)(*piVar5 + 0x104))();
          fVar8 = *pfVar6 - *(float *)(iVar3 + 8);
          fVar10 = pfVar6[1] - *(float *)(iVar3 + 0xc);
          fVar9 = pfVar6[2] - *(float *)(iVar3 + 0x10);
          if (_DAT_100de4e4 < SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9)) {
            return;
          }
        }
        FUN_10061590(param_1,&fStack_24,(float *)(param_1[1] + 8));
        FUN_100af210((float *)(param_1[1] + 0x50));
        if ((float)_DAT_100e9aa8 <
            fStack_24 * DAT_10122044[10] +
            fStack_20 * DAT_10122044[0xb] + fStack_1c * DAT_10122044[0xc]) {
          param_1[0xcf] = 1;
          *(undefined4 *)(piVar4[1] + 0x70) = 0xc1900000;
          *(undefined4 *)(piVar4[1] + 0x68) = 0x40a00000;
          fStack_14 = DAT_10122044[0x11] * _DAT_100ddae4;
          fStack_10 = DAT_10122044[0x12] * _DAT_100ddae4;
          iVar3 = piVar4[1];
          fStack_30 = *(float *)(iVar3 + 0x20) - DAT_10122044[0x10] * _DAT_100ddae4;
          fStack_2c = *(float *)(iVar3 + 0x24) - fStack_14;
          fStack_28 = *(float *)(iVar3 + 0x28) - fStack_10;
          *(float *)(iVar3 + 0x20) = fStack_30;
          *(float *)(iVar3 + 0x24) = fStack_2c;
          *(float *)(iVar3 + 0x28) = fStack_28;
          iVar3 = (**(code **)(*piVar4 + 0xcc))();
          if (iVar3 != 0) {
            iVar3 = piVar4[1];
            fVar7 = (float10)(*DAT_10121f74)();
            *(float *)(iVar3 + 0x50) = (float)(fVar7 + (float10)*(float *)(iVar3 + 0x50));
            iVar3 = piVar4[1];
            fVar7 = (float10)(*DAT_10121f74)();
            *(float *)(iVar3 + 0x54) = (float)(fVar7 + (float10)*(float *)(iVar3 + 0x54));
            *(undefined4 *)(piVar4[1] + 0x58) = 0;
            *(undefined4 *)(piVar4[1] + 0xa0) = 1;
          }
          (**(code **)(*piVar4 + 0x60))();
        }
      }
    }
    FUN_10051050((int)param_1);
    iVar3 = param_1[1];
    uVar14 = 0x10;
    fStack_18 = DAT_10122044[10] * _DAT_100ddac8;
    fVar13 = 8.0;
    fVar12 = 8.0;
    fVar11 = 8.0;
    fStack_14 = DAT_10122044[0xb] * _DAT_100ddac8;
    fStack_28 = DAT_10122044[0xc] * _DAT_100ddac8 + *(float *)(iVar3 + 0x10);
    fStack_2c = fStack_14 + *(float *)(iVar3 + 0xc);
    fStack_30 = fStack_18 + *(float *)(iVar3 + 8);
    pfVar6 = (float *)FUN_10001d60(auStack_c,0x41000000,0x41000000,0x41000000);
    FUN_1000b550(&fStack_30,(float *)&stack0xffffffb0,pfVar6);
    fVar10 = 8.0;
    fVar9 = 8.0;
    fVar8 = 8.0;
    pfVar6 = (float *)FUN_10001d60(&fStack_18,0x41000000,0x41000000,0x41000000);
    FUN_10002250(&fStack_30,(float *)&stack0xffffffa4,pfVar6);
    FUN_100b0cc0(fVar8,fVar9,fVar10,fVar11,fVar12,fVar13,uVar14);
    return;
  }
  FUN_10035d20(param_1,param_2);
  return;
}

