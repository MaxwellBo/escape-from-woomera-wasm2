
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1000a2a0(void *this,int param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(*(int *)((int)this + 0xdc) + 0x534 + *(int *)((int)this + 0x104) * 4);
  if (iVar1 < 1) {
    return 0;
  }
  iVar2 = param_1 - *(int *)((int)this + 0x10c);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  if (iVar2 == 0) {
    return 0;
  }
  fVar4 = FUN_10018f40();
  *(float *)(*(int *)((int)this + 0xdc) + 700) = (float)(fVar4 + (float10)param_3);
  iVar1 = *(int *)this;
  uVar3 = (**(code **)(iVar1 + 0x19c))(param_4);
  (**(code **)(iVar1 + 0x17c))(param_2,uVar3);
  *(undefined4 *)((int)this + 0x118) = 1;
  fVar4 = FUN_10018f40();
  *(float *)((int)this + 0x100) = (float)(fVar4 + (float10)_DAT_10059eb8);
  return 1;
}

