
void __fastcall FUN_10014b75(int param_1,int param_2)

{
  int *in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *this;
  void *extraout_ECX;
  void *this_00;
  int unaff_EBX;
  int unaff_EDI;
  char in_CF;
  void *pvVar4;
  char *pcVar5;
  int *piStack00000064;
  int *in_stack_00000070;
  
  pcVar5 = (char *)(unaff_EBX + param_1 * 2);
  *pcVar5 = *pcVar5 + (char)((uint)param_1 >> 8) + in_CF;
  *in_EAX = *in_EAX + param_2;
  piVar1 = (int *)((uint)in_EAX ^ 0x3e10014b);
  *piVar1 = *piVar1 + param_2;
  piStack00000064 = (int *)(unaff_EDI + 1);
  *piVar1 = *piVar1 + param_2;
  *piVar1 = *piVar1 + param_2;
  *piVar1 = *piVar1 + param_2;
  this = (int *)(*(int *)(unaff_EBX + -3) * 0x10);
  *(char *)piStack00000064 = *(char *)piStack00000064 + (char)piVar1;
  *piStack00000064 = *piStack00000064 + (int)piVar1;
  this[0x78] = 1;
  iVar2 = *in_stack_00000070;
  if (iVar2 == 8) {
    uVar3 = FUN_10019410((uint *)(this + 0x58));
    iVar2 = FUN_10019460((uint *)(this + 0x58));
    iVar2 = FUN_1005e720(this,(float *)(*(int *)(iVar2 + 4) + 8),2,uVar3);
    if (iVar2 != 0) {
      this[0x78] = 4;
      return;
    }
    (*DAT_10121efc)();
    this[0x57] = this[0x57] | 0x40000000;
    return;
  }
  if (iVar2 != 0x26) {
    if (iVar2 != 0x5d) {
      FUN_100057f0(this,in_stack_00000070);
      return;
    }
    (**(code **)(*this + 0x1a8))();
    FUN_10060260(this,(float)this[0xaa],(float)this[0xab],(float)this[0xac]);
    return;
  }
  iVar2 = (*DAT_10121f70)();
  if (iVar2 == 0) {
    this_00 = *(void **)(this[1] + 0x208);
    pcVar5 = s_bullchicken_bc_attackgrowl_wav_1010428c;
    pvVar4 = this_00;
  }
  else if (iVar2 == 1) {
    this_00 = (void *)this[1];
    pcVar5 = s_bullchicken_bc_attackgrowl2_wav_1010426c;
    pvVar4 = *(void **)((int)this_00 + 0x208);
  }
  else {
    if (iVar2 != 2) goto LAB_10014caa;
    pcVar5 = s_bullchicken_bc_attackgrowl3_wav_1010424c;
    this_00 = extraout_ECX;
    pvVar4 = *(void **)(this[1] + 0x208);
  }
  FUN_10094b20(this_00,pvVar4,2,pcVar5,0x3f800000,0x3f4ccccd,0,100);
LAB_10014caa:
  FUN_100057f0(this,in_stack_00000070);
  return;
}

