
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100b4210(void *this,int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
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
  fVar3 = FUN_100ae400();
  *(float *)(*(int *)((int)this + 0xdc) + 700) = (float)(fVar3 + (float10)param_3);
  iVar1 = *(int *)this;
  iVar2 = (**(code **)(iVar1 + 0x19c))(0);
  (**(code **)(iVar1 + 0x17c))(param_2,iVar2 != 0);
  *(undefined4 *)((int)this + 0x118) = 1;
  fVar3 = FUN_100ae400();
  *(float *)((int)this + 0x100) = (float)(fVar3 + (float10)_DAT_100ddad4);
  return 1;
}

