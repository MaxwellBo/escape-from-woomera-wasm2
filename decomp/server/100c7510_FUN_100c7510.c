
void __cdecl FUN_100c7510(byte param_1)

{
  int iVar1;
  
  FUN_100c81a0(6,(uint)param_1);
  DAT_101348ac = param_1;
  iVar1 = FUN_100c6980();
  *(uint *)(*(int *)(iVar1 + 4) + 0x108) = (-(uint)(param_1 != 0) & 0xfffffffd) + 3;
  if (param_1 != 0) {
    FUN_100c74a0(s_monster_patrol_guard_1011ce50);
  }
  return;
}

