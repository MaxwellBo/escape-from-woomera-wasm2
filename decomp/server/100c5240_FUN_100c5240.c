
void __thiscall FUN_100c5240(int *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = FUN_100c8160((uint *)(*(int *)(*(int *)(param_2 + 4) + 0x1cc) +
                               *(int *)(DAT_10122044 + 0x98)),s_Gholan_1011cd94);
  if (bVar1) {
    cVar2 = FUN_100c3430(s_GotHintAboutHiding_1011cd80);
    if (cVar2 != '\0') {
      FUN_100c4580(param_1);
      FUN_100ba040((byte *)s_Gholan_1011cd94,s_Well_done__my_friend__When_you_n_1011cd04,0);
      FUN_100c3500(s_GholanAgreedToPloy_101054cc,1);
      FUN_100c3500(s_IDTAG_1011ccfc,0);
      FUN_100c3500(s_HIDING_1011ccf4,0);
      FUN_100c4d70(10.0);
      FUN_100c6890(0xd,1);
      return;
    }
  }
  FUN_100c4550(param_1,param_2);
  return;
}

