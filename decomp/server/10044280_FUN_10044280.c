
void __thiscall FUN_10044280(void *this,int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if (*param_1 == 1) {
    bVar1 = FUN_10019450((uint *)((int)this + 0x308));
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar2 = FUN_100aec40(0,s_player_10101c54);
      FUN_10019420((uint *)((int)this + 0x308),iVar2);
    }
  }
  FUN_100057f0(this,param_1);
  return;
}

