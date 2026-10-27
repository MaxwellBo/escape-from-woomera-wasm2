
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1008b140(void *this,float param_1)

{
  bool bVar1;
  
  bVar1 = param_1 == _DAT_100df2b0;
  *(uint *)(*(int *)((int)this + 4) + 0x118) = *(uint *)(*(int *)((int)this + 4) + 0x118) | 0x80;
  if (bVar1) {
    *(undefined4 *)((int)this + 0x74) = 0;
    return;
  }
  *(code **)((int)this + 0x74) = CLaserSpot::Revive;
  (**(code **)(*(int *)this + 8))(param_1);
  return;
}

