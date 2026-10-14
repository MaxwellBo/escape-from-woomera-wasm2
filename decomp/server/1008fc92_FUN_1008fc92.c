
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008fc92(int *param_1,byte param_2)

{
  byte *in_EAX;
  int *piVar1;
  int iVar2;
  bool in_PF;
  
  do {
  } while (!in_PF);
  *in_EAX = *in_EAX | param_2;
  *in_EAX = *in_EAX | param_2;
  do {
    *in_EAX = *in_EAX | param_2;
  } while ((POPCOUNT(*in_EAX) & 1U) != 0);
  do {
    *in_EAX = *in_EAX | param_2;
  } while ((POPCOUNT(*in_EAX) & 1U) != 0);
  do {
    *in_EAX = *in_EAX | param_2;
  } while ((POPCOUNT(*in_EAX) & 1U) != 0);
  *in_EAX = *in_EAX | param_2;
  piVar1 = FUN_1008f8a0(param_1,(byte *)((int)DAT_10122044[0x26] + param_1[0xc5]),0);
  iVar2 = FUN_10019420(param_1 + 0x5a,(int)piVar1);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x22c))();
    param_1[0xd3] = (int)(*DAT_10122044 + (float)_DAT_100e08d8);
    (*DAT_10121efc)(2,s_script___s__using_monster___s__101160a4,
                    *(int *)(param_1[1] + 0x1cc) + (int)DAT_10122044[0x26],
                    (int)DAT_10122044[0x26] + param_1[0xc5]);
    return;
  }
  FUN_100901d0((int)param_1);
  (*DAT_10121efc)(2,s_script___s__can_t_find_monster___1011607c,
                  *(int *)(param_1[1] + 0x1cc) + (int)DAT_10122044[0x26],
                  (int)DAT_10122044[0x26] + param_1[0xc5]);
  (**(code **)(*param_1 + 8))(0x3f800000);
  return;
}

