
void __thiscall FUN_100c29f0(void *this,int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  if (*(uint *)((int)this + 300) < DVar1) {
    FUN_100c46a0(this,param_1);
    FUN_100c3500(s_Player_sIDTagOnFence_1011c678,0);
  }
  return;
}

