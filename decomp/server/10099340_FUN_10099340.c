
void __thiscall FUN_10099340(void *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)((int)this + 0x140) = param_4;
  *(int *)((int)this + 0x134) = param_1;
  *(code **)((int)this + 0x74) = CBaseToggle::LinearMoveNow;
  *(int *)((int)this + 0x138) = param_2;
  *(int *)((int)this + 0x13c) = param_3;
  FUN_10063370(this);
  return;
}

