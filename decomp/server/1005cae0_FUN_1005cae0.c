
undefined4 __thiscall FUN_1005cae0(void *this,void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  
  iVar2 = FUN_100991a0(this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_100b20a0(param_1,(byte *)s_CBaseMonster_101111c4,(int)this,&DAT_10110818,0x27);
  FUN_1005d290((int)this);
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  bVar1 = FUN_10019450((uint *)((int)this + 0x160));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    *(undefined4 *)((int)this + 0x15c) = 0;
  }
  return uVar3;
}

