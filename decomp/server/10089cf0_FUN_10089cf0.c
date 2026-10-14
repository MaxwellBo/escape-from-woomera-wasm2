
void __fastcall FUN_10089cf0(int *param_1)

{
  void *this;
  int iVar1;
  float10 fVar2;
  float in_stack_ffffff98;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_stack_ffffffb0;
  float in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  float fStack_24;
  float fStack_20;
  float afStack_1c [3];
  undefined4 auStack_10 [4];
  
  this = *(void **)(param_1[0x37] + 4);
  if ((*(int *)((int)this + 0x1c0) == 3) && (-0x11 < *(int *)((int)this + 0x1c4))) {
    (**(code **)(*param_1 + 0x174))();
    param_1[0x3e] = 0x3e19999a;
    return;
  }
  if (0 < param_1[0x43]) {
    *(undefined4 *)(param_1[0x37] + 0x314) = 1000;
    *(undefined4 *)(param_1[0x37] + 0x31c) = 0x200;
    param_1[0x43] = param_1[0x43] + -1;
    *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) =
         *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) | 2;
    FUN_1007c580((void *)param_1[0x37],5);
    iVar1 = *(int *)(param_1[0x37] + 4);
    afStack_1c[0] = *(float *)(iVar1 + 0x70) + *(float *)(iVar1 + 0x7c);
    fStack_20 = *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x78);
    fStack_24 = *(float *)(iVar1 + 0x68) + *(float *)(iVar1 + 0x74);
    FUN_100af200(&fStack_24);
    (**(code **)(*(int *)param_1[0x37] + 0x214))();
    FUN_10081540((void *)param_1[0x37],afStack_1c);
    iVar1 = *(int *)(param_1[0x37] + 0x308);
    fVar12 = *(float *)(param_1[0x37] + 4);
    iVar11 = 0;
    uVar10 = 0;
    fVar9 = 4.2039e-45;
    fVar8 = 8192.0;
    fVar7 = 0.00873;
    fVar6 = 0.00873;
    fVar5 = 0.00873;
    FUN_10001d60(&stack0xffffffb0,0x3c0f0846,0x3c0f0846,0x3c0f0846);
    pfVar4 = afStack_1c;
    fVar3 = 2.6943315e-29;
    FUN_10003850(&stack0xffffffa4,pfVar4);
    FUN_10003850(&stack0xffffff98,auStack_10);
    iVar1 = FUN_10020cd0((void *)param_1[0x37],(float *)&stack0xffffffd8,1,in_stack_ffffff98,fVar3,
                         (float)pfVar4,fVar5,fVar6,fVar7,in_stack_ffffffb0,in_stack_ffffffb4,
                         in_stack_ffffffb8,fVar8,fVar9,uVar10,iVar11,fVar12,iVar1);
    fStack_20 = *(float *)(iVar1 + 8);
    (*DAT_10121ff4)();
    if ((param_1[0x43] == 0) && (*(int *)(param_1[0x37] + param_1[0x41] * 4 + 0x534) < 1)) {
      FUN_1007e210((void *)param_1[0x37],(byte *)s__HEV_AMO0_1010665c,0,0);
    }
    param_1[0x3e] = 0x3f400000;
    fVar2 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
    param_1[0x40] = (int)(float)fVar2;
    return;
  }
  if (param_1[0x3b] == 0) {
    (**(code **)(*param_1 + 0x18c))();
    return;
  }
  FUN_10094b20(this,*(undefined4 *)((int)this + 0x208),1,s_weapons_357_cock1_wav_101085d8,0x3f4ccccd
               ,0x3f4ccccd,0,100);
  param_1[0x3e] = 0x3e19999a;
  return;
}

