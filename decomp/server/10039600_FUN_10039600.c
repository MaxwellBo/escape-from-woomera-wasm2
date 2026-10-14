
void __thiscall FUN_10039600(void *this,int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
  if ((uVar1 & 0x20) != 0) {
    (**(code **)(*param_1 + 0x4c))();
    return;
  }
  iVar2 = FUN_1001a140(param_3,uVar1 & 1);
  if (iVar2 != 0) {
    iVar2 = *(int *)((int)this + 4);
    uVar1 = *(uint *)(iVar2 + 0x1a0);
    if ((uVar1 & 1) == 0) {
      *(uint *)(iVar2 + 0x1a0) = uVar1 | 1;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      *(undefined4 *)((int)this + 0xcc) = 0;
      if (*(CLaserSpot **)((int)this + 0xc4) != (CLaserSpot *)0x0) {
        CLaserSpot::Revive(*(CLaserSpot **)((int)this + 0xc4));
      }
    }
    else {
      *(uint *)(iVar2 + 0x1a0) = uVar1 & 0xfffffffe;
      *(undefined4 *)((int)this + 0xcc) = 0;
      FUN_1003afb0((int)this);
      if (*(void **)((int)this + 0xc4) != (void *)0x0) {
        FUN_1008b140(*(void **)((int)this + 0xc4),-1.0);
        return;
      }
    }
  }
  return;
}

