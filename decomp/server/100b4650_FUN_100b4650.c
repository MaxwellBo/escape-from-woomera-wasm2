
void __thiscall
FUN_100b4650(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int param_13)

{
  int iVar1;
  int iVar2;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  void *this_09;
  void *this_10;
  
  iVar1 = (**(code **)(*(int *)this + 0x150))();
  if (iVar1 == -1) {
    return;
  }
  iVar2 = FUN_10080dd0(this_00,&DAT_1010ec5c);
  if ((((((iVar1 != iVar2) &&
         (iVar2 = FUN_10080dd0(this_01,&DAT_10114dfc), param_3 = param_4, iVar1 != iVar2)) &&
        (iVar2 = FUN_10080dd0(this_02,(byte *)s_buckshot_10114df0), param_3 = param_5,
        iVar1 != iVar2)) &&
       ((iVar2 = FUN_10080dd0(this_03,(byte *)s_bolts_10106650), param_3 = param_6, iVar1 != iVar2
        && (iVar2 = FUN_10080dd0(this_04,(byte *)s_ARgrenades_10111afc), param_3 = param_7,
           iVar1 != iVar2)))) &&
      ((iVar2 = FUN_10080dd0(this_05,(byte *)s_uranium_101086ac), param_3 = param_9, iVar1 != iVar2
       && ((iVar2 = FUN_10080dd0(this_06,(byte *)s_rockets_10114de8), param_3 = param_8,
           iVar1 != iVar2 &&
           (iVar2 = FUN_10080dd0(this_07,(byte *)s_Satchel_Charge_10114dd8), param_3 = param_10,
           iVar1 != iVar2)))))) &&
     ((iVar2 = FUN_10080dd0(this_08,(byte *)s_Snarks_10114dd0), param_3 = param_11, iVar1 != iVar2
      && ((iVar2 = FUN_10080dd0(this_09,(byte *)s_Trip_Mine_10114dc4), param_3 = param_12,
          iVar1 != iVar2 &&
          (iVar2 = FUN_10080dd0(this_10,(byte *)s_Hand_Grenade_1010d708), param_3 = param_13,
          iVar1 != iVar2)))))) {
    return;
  }
  if (param_3 < 1) {
    if (param_3 < -1) goto LAB_100b4794;
  }
  else {
    iVar2 = *(int *)((int)this + 0x10c) - param_3;
    *(int *)((int)this + 0x10c) = iVar2;
    if (-1 < iVar2) goto LAB_100b4794;
  }
  *(undefined4 *)((int)this + 0x10c) = 0;
LAB_100b4794:
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x534 + iVar1 * 4) = *(undefined4 *)((int)this + 0x10c);
  }
  return;
}

