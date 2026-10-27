
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100652e0(void *this,int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  (**(code **)(*(int *)this + 0x70))(param_1,param_2,param_3);
  piVar3 = (int *)0x0;
  param_1[0x191] = param_1[0x191] + 1;
  FUN_10098c10((uint *)s_game_playerdie_10111c98,param_1,param_1,3,0);
  iVar1 = *(int *)(param_2 + 0x208);
  piVar5 = (int *)0x0;
  if (iVar1 == 0) {
    iVar1 = (*DAT_10121f1c)(0);
    if (iVar1 != 0) goto LAB_10065339;
  }
  else {
LAB_10065339:
    piVar3 = *(int **)(iVar1 + 0x7c);
    if (piVar3 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar3 + 0x4c))();
      if (iVar1 == 2) {
        piVar5 = piVar3;
      }
    }
  }
  if ((param_1[1] == param_2) || (piVar3 == (int *)0x0)) {
LAB_1006539f:
    *(float *)(param_2 + 0x164) = *(float *)(param_2 + 0x164) - _DAT_100dd618;
  }
  else {
    iVar1 = (**(code **)(*piVar3 + 0xcc))();
    if (iVar1 == 0) goto LAB_1006539f;
    iVar1 = (**(code **)(*(int *)this + 0x68))(piVar5,param_1);
    *(float *)(param_2 + 0x164) = (float)iVar1 + *(float *)(param_2 + 0x164);
    FUN_10098c10((uint *)s_game_playerkill_10111c88,piVar3,piVar3,3,0);
  }
  (*DAT_10121ec0)(2,DAT_101248b0,0,0);
  uVar2 = (*DAT_10121f24)(*(undefined4 *)(param_1[1] + 0x208));
  (*DAT_10121ec8)(uVar2);
  lVar4 = __ftol();
  (*DAT_10121ed0)((int)lVar4);
  (*DAT_10121ed0)(param_1[0x191]);
  (*DAT_10121ed0)(0);
  iVar1 = (**(code **)(*(int *)this + 0xcc))(param_1 + 0x197);
  (*DAT_10121ed0)(iVar1 + 1);
  (*DAT_10121ec4)();
  iVar1 = *(int *)(param_2 + 0x208);
  if (iVar1 == 0) {
    iVar1 = (*DAT_10121f1c)(0);
    if (iVar1 == 0) goto LAB_100654e7;
  }
  piVar3 = *(int **)(iVar1 + 0x7c);
  if (piVar3 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar3 + 0x4c))();
    if (iVar1 == 2) {
      (*DAT_10121ec0)(2,DAT_101248b0,0,0);
      uVar2 = (*DAT_10121f24)(*(undefined4 *)(piVar3[1] + 0x208));
      (*DAT_10121ec8)(uVar2);
      lVar4 = __ftol();
      (*DAT_10121ed0)((int)lVar4);
      (*DAT_10121ed0)(piVar3[0x191]);
      (*DAT_10121ed0)(0);
      iVar1 = (**(code **)(*(int *)this + 0xcc))(piVar3 + 0x197);
      (*DAT_10121ed0)(iVar1 + 1);
      (*DAT_10121ec4)();
      piVar3[0x196] = *DAT_10122044;
    }
  }
LAB_100654e7:
  iVar1 = FUN_100822c0(param_1,(byte *)s_weapon_satchel_10108ae8);
  if (iVar1 != 0) {
    FUN_1008d210((int)param_1);
  }
  return;
}

