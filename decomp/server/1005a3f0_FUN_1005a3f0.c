
void __thiscall FUN_1005a3f0(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 auStack_c [3];
  
  FUN_10058820(&fStack_30,param_1,(int)param_3,
               (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d0)));
  iVar3 = *(int *)(param_1 + 4);
  pfVar4 = (float *)FUN_100ae830(auStack_c,&fStack_30);
  fStack_1c = *(float *)(iVar3 + 0x58) + pfVar4[2];
  fStack_20 = *(float *)(iVar3 + 0x54) + pfVar4[1];
  fStack_24 = *(float *)(iVar3 + 0x50) + *pfVar4;
  FUN_10058820(&fStack_18,param_1,(int)param_3,
               (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d4)));
  fVar5 = FUN_100588f0(*(undefined1 **)(param_1 + 4),(int)param_3,
                       (byte *)(*(int *)(DAT_10122044 + 0x98) +
                               *(int *)(*(undefined1 **)(param_1 + 4) + 0x1e8)));
  param_3 = (float)fVar5;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
    param_3 = SQRT(fStack_30 * fStack_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28) * param_3;
  }
  FUN_100af200(&fStack_24);
  fVar1 = *(float *)(DAT_10122044 + 0x2c);
  fVar2 = *(float *)(DAT_10122044 + 0x30);
  *param_2 = fStack_18 + param_3 * *(float *)(DAT_10122044 + 0x28);
  param_2[1] = fStack_14 + param_3 * fVar1;
  param_2[2] = fStack_10 + param_3 * fVar2;
  return;
}

