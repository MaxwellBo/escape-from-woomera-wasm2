
void __thiscall FUN_1002cba0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)((int)this + 4) + 0x1f8) = param_1;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x160) = param_2;
  *(code **)((int)this + 0x74) = CSprite::ExpandThink;
  (**(code **)(*(int *)this + 8))(0);
  *(undefined4 *)((int)this + 0xb8) = *DAT_10122044;
  return;
}

