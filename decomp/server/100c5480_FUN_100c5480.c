
void FUN_100c5480(void)

{
  void *this;
  int iVar1;
  
  for (this = (void *)FUN_100aec40(0,s_monster_patrol_guard_1011ce50); this != (void *)0x0;
      this = (void *)FUN_100aec40((int)this,s_monster_patrol_guard_1011ce50)) {
    iVar1 = FUN_100c6980();
    FUN_10019420((void *)((int)this + 0x168),iVar1);
    FUN_1005d500(this,4,0);
    *(undefined4 *)((int)this + 0x398) = 4;
  }
  return;
}

