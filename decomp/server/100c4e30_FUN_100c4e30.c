
void __thiscall FUN_100c4e30(void *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = (uint *)(*(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
  bVar1 = FUN_100c8160(puVar3,&DAT_1011cba4);
  if (bVar1) {
    FUN_100c4580(this);
    FUN_100ba040(&DAT_1011cba4,s_Well_done__Your_bravery_and_clev_1011cb48,10);
    FUN_100c6910(2);
    iVar4 = 0x4c;
    iVar2 = FUN_100c6980();
    FUN_100c81d0(iVar2,iVar4);
    return;
  }
  bVar1 = FUN_100c8160(puVar3,s_Fashid_1011cb40);
  if (bVar1) {
    FUN_100ba040((byte *)s_Fashid_1011cb40,s_Thanks__but_I_don_t_want_them__A_1011ca9c,8);
    return;
  }
  bVar1 = FUN_100c8160(puVar3,s_Nasir_1011ca94);
  if (bVar1) {
    FUN_100ba040((byte *)s_Nasir_1011ca94,s_Well_done__but_you_ll_have_to_hi_1011ca20,8);
    return;
  }
  bVar1 = FUN_100c8160(puVar3,s_Mouhtaz_1011ca18);
  if (bVar1) {
    FUN_100ba040((byte *)s_Mouhtaz_1011ca18,s_Are_you_crazy__Whatever_you_do__d_1011c9b8,8);
    return;
  }
  FUN_100c4550(this,param_1);
  return;
}

