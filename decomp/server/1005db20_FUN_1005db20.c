
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005db20(void *this,int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  FUN_100af200(*(int *)((int)this + 4) + 0x50);
  fVar1 = *(float *)(*(int *)(param_1 + 4) + 8) - *(float *)(*(int *)((int)this + 4) + 8);
  fVar5 = *(float *)(*(int *)(param_1 + 4) + 0xc) - *(float *)(*(int *)((int)this + 4) + 0xc);
  fVar2 = SQRT(fVar1 * fVar1 + fVar5 * fVar5);
  fVar3 = _DAT_100dd5f8;
  fVar4 = _DAT_100dd5f8;
  if (fVar2 != _DAT_100dd5f8) {
    fVar2 = _DAT_100dd618 / fVar2;
    fVar3 = fVar1 * fVar2;
    fVar4 = fVar5 * fVar2;
  }
  fVar1 = *(float *)(DAT_10122044 + 0x28);
  fVar2 = *(float *)(DAT_10122044 + 0x2c);
  *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) & 0xffffc3ff;
  fVar1 = fVar1 * fVar3 + fVar4 * fVar2;
  if (((*(uint *)((int)this + 0x2b8) & 0x800) != 0) &&
     (iVar6 = (**(code **)(*(int *)this + 0x168))(fVar1,param_2), iVar6 != 0)) {
    *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x400;
  }
  if (((*(uint *)((int)this + 0x2b8) & 0x1000) != 0) &&
     (iVar6 = (**(code **)(*(int *)this + 0x16c))(fVar1,param_2), iVar6 != 0)) {
    *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x1000;
  }
  if (((*(uint *)((int)this + 0x2b8) & 0x2000) != 0) &&
     (iVar6 = (**(code **)(*(int *)this + 0x170))(fVar1,param_2), iVar6 != 0)) {
    *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x800;
  }
  if (((*(uint *)((int)this + 0x2b8) & 0x4000) != 0) &&
     (iVar6 = (**(code **)(*(int *)this + 0x174))(fVar1,param_2), iVar6 != 0)) {
    *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x2000;
  }
  return;
}

