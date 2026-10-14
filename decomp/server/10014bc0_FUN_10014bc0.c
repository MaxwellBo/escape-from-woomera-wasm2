
void __thiscall FUN_10014bc0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *extraout_ECX;
  void *this;
  void *pvVar3;
  char *pcVar4;
  uint uVar5;
  
  param_1[0x78] = 1;
  iVar1 = *param_2;
  if (iVar1 == 8) {
    uVar2 = FUN_10019410((uint *)(param_1 + 0x58));
    uVar5 = 2;
    iVar1 = FUN_10019460((uint *)(param_1 + 0x58));
    iVar1 = FUN_1005e720(param_1,(float *)(*(int *)(iVar1 + 4) + 8),uVar5,uVar2);
    if (iVar1 != 0) {
      param_1[0x78] = 4;
      return;
    }
    (*DAT_10121efc)(2,s_GetPathToEnemy_failed___10101c7c);
    param_1[0x57] = param_1[0x57] | 0x40000000;
    return;
  }
  if (iVar1 != 0x26) {
    if (iVar1 != 0x5d) {
      FUN_100057f0(param_1,param_2);
      return;
    }
    (**(code **)(*param_1 + 0x1a8))(7);
    FUN_10060260(param_1,(float)param_1[0xaa],(float)param_1[0xab],(float)param_1[0xac]);
    return;
  }
  iVar1 = (*DAT_10121f70)(0,2);
  if (iVar1 == 0) {
    this = *(void **)(param_1[1] + 0x208);
    pcVar4 = s_bullchicken_bc_attackgrowl_wav_1010428c;
    pvVar3 = this;
  }
  else if (iVar1 == 1) {
    this = (void *)param_1[1];
    pcVar4 = s_bullchicken_bc_attackgrowl2_wav_1010426c;
    pvVar3 = *(void **)((int)this + 0x208);
  }
  else {
    if (iVar1 != 2) goto LAB_10014caa;
    pcVar4 = s_bullchicken_bc_attackgrowl3_wav_1010424c;
    this = extraout_ECX;
    pvVar3 = *(void **)(param_1[1] + 0x208);
  }
  FUN_10094b20(this,pvVar3,2,pcVar4,0x3f800000,0x3f4ccccd,0,100);
LAB_10014caa:
  FUN_100057f0(param_1,param_2);
  return;
}

