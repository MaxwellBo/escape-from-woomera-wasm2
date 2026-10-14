
void __thiscall FUN_1005a970(int *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_c [3];
  
  fVar6 = DAT_10121de0;
  fVar5 = DAT_10121ddc;
  fStack_24 = DAT_10121dd8;
  fStack_18 = DAT_10121dd8;
  fStack_20 = DAT_10121ddc;
  fStack_1c = DAT_10121de0;
  fStack_28 = 0.0;
  if (param_1[0x2e] != 0) {
    pfVar2 = FUN_10058750(afStack_c,(int)param_1,param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2e]));
    fStack_24 = *pfVar2;
    fStack_20 = pfVar2[1];
    fStack_1c = pfVar2[2];
  }
  if (param_1[0x2f] != 0) {
    pfVar2 = FUN_10058820(afStack_c,(int)param_1,param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2f]));
    fStack_18 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  if (param_1[0x30] != 0) {
    puVar4 = (undefined1 *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x30]);
    fVar7 = FUN_100588f0(puVar4,param_2,puVar4);
    fStack_28 = (float)fVar7;
  }
  if (param_1[0x31] == 0) {
    iVar1 = param_1[1];
    *(float *)(iVar1 + 8) = fStack_24;
    *(float *)(iVar1 + 0xc) = fStack_20;
    *(float *)(iVar1 + 0x10) = fStack_1c;
    iVar1 = param_1[1];
    *(float *)(iVar1 + 0x44) = fStack_18;
    *(float *)(iVar1 + 0x48) = fVar5;
    *(float *)(iVar1 + 0x4c) = fVar6;
    *(float *)(param_1[1] + 0x164) = fStack_28;
    FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x32]),param_1,param_1,3,0);
    return;
  }
  param_2 = (*DAT_10121e5c)();
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  iVar1 = *(int *)(param_2 + 0x208);
  if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0x7c), piVar3 == (int *)0x0)) {
    piVar3 = (int *)(*DAT_10121f04)(iVar1,0xb8);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = (int)&PTR_FUN_100eb448;
    }
    piVar3[1] = param_2;
  }
  *(int *)piVar3[1] = (int)&DAT_1011051c - *(int *)(DAT_10122044 + 0x98);
  iVar1 = piVar3[1];
  *(float *)(iVar1 + 8) = fStack_24;
  *(float *)(iVar1 + 0xc) = fStack_20;
  *(float *)(iVar1 + 0x10) = fStack_1c;
  iVar1 = piVar3[1];
  *(float *)(iVar1 + 0x44) = fStack_18;
  *(float *)(iVar1 + 0x48) = fVar5;
  *(float *)(iVar1 + 0x4c) = fVar6;
  *(float *)(piVar3[1] + 0x164) = fStack_28;
  *(int *)(piVar3[1] + 0x1cc) = param_1[0x31];
  (**(code **)(*piVar3 + 8))(param_1[0x33]);
  FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x32]),piVar3,param_1,3,0);
  return;
}

