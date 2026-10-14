
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1007f6d0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)((int)this + 4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fVar3 = *(float *)(param_1 + 0x10) + _DAT_100ddac8;
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(float *)(iVar2 + 0x10) = fVar3;
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x198) = *(undefined4 *)(param_1 + 0x208);
  *(code **)((int)this + 0x74) = FUN_1007f750;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

