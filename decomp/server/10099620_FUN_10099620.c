
void __thiscall FUN_10099620(void *this,int param_1,int param_2,int param_3,int param_4)

{
  *(code **)((int)this + 0x74) = CBaseToggle::AngularMoveNow;
  *(int *)((int)this + 0x148) = param_1;
  *(int *)((int)this + 0x14c) = param_2;
  *(int *)((int)this + 0x150) = param_3;
  *(int *)((int)this + 0x144) = param_4;
  FUN_10063370(this);
  return;
}

