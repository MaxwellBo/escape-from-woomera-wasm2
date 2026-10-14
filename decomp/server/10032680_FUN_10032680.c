
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10032680(void *this,int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  longlong lVar4;
  float afStack_c [3];
  
  iVar1 = FUN_1001a170(this,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x58))();
    if (iVar1 == 2) {
      FUN_10019680((int)this);
      return;
    }
    iVar1 = *(int *)((int)this + 4);
    if (*(int *)(iVar1 + 0x1d4) == 0) {
      *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(iVar1 + 0x10);
    }
    else {
      pfVar2 = FUN_10058750(afStack_c,(int)this,param_1,
                            (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0x1d4)));
      *(float *)((int)this + 0xb8) = *pfVar2;
      *(float *)((int)this + 0xbc) = pfVar2[1];
      *(float *)((int)this + 0xc0) = pfVar2[2];
    }
    iVar1 = *(int *)((int)this + 4);
    if (*(float *)(iVar1 + 0x160) == _DAT_100dd5f8) {
      uVar3 = 10;
      (**(code **)(*(int *)this + 8))(0x3f800000);
    }
    else if (*(float *)(iVar1 + 0x160) <= _DAT_100e0eec) {
      lVar4 = __ftol();
      uVar3 = (undefined4)lVar4;
    }
    else {
      *(undefined4 *)(iVar1 + 0x16c) = 0x41c80000;
      uVar3 = 0xfa;
      (**(code **)(*(int *)this + 8))(0x41c80000);
    }
    (**(code **)(*(int *)this + 0x118))(uVar3);
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
      *(code **)((int)this + 0x74) = CBaseEntity::SUB_Remove;
      (**(code **)(*(int *)this + 8))(0);
    }
  }
  return;
}

