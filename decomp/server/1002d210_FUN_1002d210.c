
void __thiscall FUN_1002d210(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1001a140(param_3,~*(uint *)(*(int *)((int)this + 4) + 0x1a0) & 1);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar2 | 1;
    }
    else {
      uVar2 = uVar2 & 0xfffffffe;
    }
    *(uint *)(*(int *)((int)this + 4) + 0x1a0) = uVar2;
    FUN_1002d2e0(this);
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  return;
}

