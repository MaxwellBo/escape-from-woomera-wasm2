
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10018240(void *this,float param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 <= _DAT_100dd5f8) {
    *(undefined4 *)(iVar1 + 0x5c) = DAT_10121dd8;
    *(undefined4 *)(iVar1 + 0x60) = DAT_10121ddc;
    *(undefined4 *)(iVar1 + 100) = DAT_10121de0;
    iVar1 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)((int)this + 0x168);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)((int)this + 0x16c);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)((int)this + 0x170);
    FUN_10019680((int)this);
    *(undefined4 *)((int)this + 0x74) = 0;
    return;
  }
  fVar2 = -*(float *)((int)this + 0x164);
  *(float *)(iVar1 + 0x5c) = fVar2 * *(float *)(iVar1 + 0x44);
  *(float *)(iVar1 + 0x60) = fVar2 * *(float *)(iVar1 + 0x48);
  *(float *)(iVar1 + 100) = fVar2 * *(float *)(iVar1 + 0x4c);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

