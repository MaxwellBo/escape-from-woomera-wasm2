
void __thiscall FUN_100393e0(void *this,int param_1)

{
  if ((*(int *)((int)this + 0xb8) != 0) && (*(int *)((int)this + 0xb8) == param_1)) {
    if (*(void **)((int)this + 0xc4) != (void *)0x0) {
      FUN_1008b140(*(void **)((int)this + 0xc4),-1.0);
    }
    FUN_1003afb0((int)this);
    FUN_10019680((int)this);
    FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
    *(undefined4 *)((int)this + 0xb8) = 0;
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
      (**(code **)(*(int *)this + 8))(0x3f800000);
    }
  }
  return;
}

