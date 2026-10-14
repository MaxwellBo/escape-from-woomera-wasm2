
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_100dbcfd(void *this,LPCSTR param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 0x4c) == -1) {
    uVar4 = (-(uint)((param_2 & 0x80) != 0) & 0x4000) + 0x4000;
    if ((param_2 & 0x20) == 0) {
      uVar4 = uVar4 | 0x100;
    }
    uVar5 = 0x40;
    if ((param_2 & 0x40) != 0) {
      uVar4 = uVar4 | 0x400;
    }
    if ((param_2 & 8) != 0) {
      param_2 = param_2 | 2;
      uVar4 = uVar4 | 8;
    }
    if ((param_2 & 0x10) != 0) {
      param_2 = param_2 | 2;
      uVar4 = uVar4 | 0x200;
    }
    if ((param_2 & 2) == 0) {
      if ((param_2 & 1) == 0) {
        return (int *)0x0;
      }
    }
    else {
      if ((param_2 & 1) == 0) {
        uVar4 = uVar4 | 1;
      }
      else {
        uVar4 = uVar4 | 2;
      }
      if ((param_2 & 0x4d) == 0) {
        param_2 = param_2 | 0x10;
        uVar4 = uVar4 | 0x200;
      }
    }
    uVar3 = param_3 & (DAT_100fa5a8 | _DAT_100fa5b0 | _DAT_100fa5ac);
    if (uVar3 != 0) {
      if (uVar3 == 0x800) {
        uVar5 = 0x10;
      }
      else if (uVar3 == 0xa00) {
        uVar5 = 0x20;
      }
      else if (uVar3 == 0xc00) {
        uVar5 = 0x30;
      }
      else if (uVar3 == 0xe00) {
        uVar5 = 0x40;
      }
    }
    uVar4 = FUN_100d43d3(param_1,uVar4,uVar5,0x180);
    *(uint *)((int)this + 0x4c) = uVar4;
    if (uVar4 != 0xffffffff) {
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_100db550((LPCRITICAL_SECTION)((int)this + 0x34));
      }
      *(undefined4 *)((int)this + 0x50) = 1;
      if ((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0x14) == 0)) {
        pvVar1 = operator_new(0x200);
        if (pvVar1 == (void *)0x0) {
          *(undefined4 *)((int)this + 8) = 1;
        }
        else {
          FUN_100dc14c(this,pvVar1,(int)pvVar1 + 0x200,1);
        }
      }
      if (((param_2 & 4) == 0) ||
         (iVar2 = (**(code **)(*(int *)this + 0xc))(0,2,param_2), iVar2 != -1)) {
        if (*(int *)((int)this + 0x30) < 0) {
          FUN_100db55b((LPCRITICAL_SECTION)((int)this + 0x34));
          return this;
        }
        return this;
      }
      FUN_100db243(this);
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_100db55b((LPCRITICAL_SECTION)((int)this + 0x34));
      }
    }
  }
  return (int *)0x0;
}

