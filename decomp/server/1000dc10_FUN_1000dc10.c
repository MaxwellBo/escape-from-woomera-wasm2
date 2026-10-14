
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000dc10(void *param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 auStack_18 [3];
  undefined4 auStack_c [3];
  
  iVar1 = *(int *)((int)param_1 + 4);
  if ((*(int *)(iVar1 + 0x114) < 2) && ((*(uint *)(iVar1 + 0x1a0) & 0x400) == 0)) {
    *(undefined4 *)(iVar1 + 0x114) = 2;
    FUN_10008450(param_1,0,auStack_c,auStack_18);
    if (*(float *)(*(int *)((int)param_1 + 4) + 0x164) == _DAT_100dd5f8) {
      pcVar2 = s_weapon_9mmhandgun_1010337c;
    }
    else {
      pcVar2 = s_weapon_357_10103390;
    }
    FUN_10061e00(param_1,(int)pcVar2,auStack_c,auStack_18);
  }
  *(undefined4 *)((int)param_1 + 0x7c) = 0;
  FUN_1009a570(param_1,param_2,param_3);
  return;
}

