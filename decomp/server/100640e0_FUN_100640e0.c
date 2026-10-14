
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100640e0(int *param_1)

{
  int iVar1;
  float *pfVar2;
  void *this;
  float10 fVar3;
  float *pfVar4;
  float fStack_38;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
  iVar1 = param_1[0x37];
  if ((*(int *)(*(int *)(iVar1 + 4) + 0x1c0) == 3) &&
     (-0x11 < *(int *)(*(int *)(iVar1 + 4) + 0x1c4))) {
    (**(code **)(*param_1 + 0x174))();
    param_1[0x3e] = 0x3e19999a;
    return;
  }
  if (*(int *)(iVar1 + 0x534 + param_1[0x42] * 4) == 0) {
    (**(code **)(*param_1 + 0x174))();
    return;
  }
  *(undefined4 *)(iVar1 + 0x314) = 600;
  *(undefined4 *)(param_1[0x37] + 0x31c) = 0x200;
  *(undefined4 *)(param_1[0x37] + 0x318) = 0x20;
  fVar3 = FUN_100ae400();
  *(float *)(param_1[0x37] + 800) = (float)(fVar3 + (float10)_DAT_100dd608);
  *(int *)(param_1[0x37] + 0x534 + param_1[0x42] * 4) =
       *(int *)(param_1[0x37] + 0x534 + param_1[0x42] * 4) + -1;
  FUN_1007c580((void *)param_1[0x37],5);
  iVar1 = *(int *)(param_1[0x37] + 4);
  fStack_10 = *(float *)(iVar1 + 0x70) + *(float *)(iVar1 + 0x7c);
  fStack_14 = *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x78);
  fStack_18 = *(float *)(iVar1 + 0x68) + *(float *)(iVar1 + 0x74);
  FUN_100af200(&fStack_18);
  iVar1 = *(int *)(param_1[0x37] + 4);
  fStack_38 = 2.6477802e-29;
  pfVar2 = (float *)FUN_10002280((void *)(DAT_10122044 + 0x28),&fStack_18,16.0);
  pfVar4 = &fStack_38;
  this = (void *)FUN_1000b550((void *)(iVar1 + 8),afStack_c,(float *)(iVar1 + 0x174));
  FUN_1000b550(this,pfVar4,pfVar2);
  FUN_10043ac0(*(int *)(param_1[0x37] + 4));
  (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                  *(undefined2 *)((int)param_1 + 0x12a),0,&DAT_10121dd8,&DAT_10121dd8,0,0,0,0,0,0);
  fVar3 = FUN_100ae400();
  param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_100dd618);
  fVar3 = FUN_100ae400();
  param_1[0x3f] = (int)(float)(fVar3 + (float10)_DAT_100dd618);
  fVar3 = FUN_100ae400();
  param_1[0x40] = (int)(float)(fVar3 + (float10)_DAT_100dd5d8);
  if (*(int *)(param_1[0x37] + param_1[0x42] * 4 + 0x534) == 0) {
    FUN_1007e210((void *)param_1[0x37],(byte *)s__HEV_AMO0_1010665c,0,0);
  }
  return;
}

