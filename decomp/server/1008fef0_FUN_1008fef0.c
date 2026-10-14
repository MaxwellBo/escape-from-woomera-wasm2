
void __thiscall FUN_1008fef0(void *this,CBaseEntity *param_1)

{
  *(undefined4 *)((int)this + 0x33c) = *(undefined4 *)((int)this + 0x338);
  *(undefined4 *)((int)this + 0x308) = 0;
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) == 0) {
    *(code **)((int)this + 0x74) = CBaseEntity::SUB_Remove;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  FUN_10090540(param_1);
  (**(code **)(*(int *)this + 0x234))(param_1);
  FUN_10098e40(this,(int *)0x0,3,0);
  return;
}

