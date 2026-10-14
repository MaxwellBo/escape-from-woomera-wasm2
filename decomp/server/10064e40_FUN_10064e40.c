
void __thiscall FUN_10064e40(void *this,int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar5 = 0;
  puVar1 = FUN_100affd0((byte *)s__s_has_joined_the_game_10111bec);
  iVar3 = 1;
  FUN_100af940(1,puVar1,iVar5,iVar6,iVar7,iVar8);
  if (DAT_10121dbc == 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    (*DAT_10121fcc)();
    (*DAT_10121fdc)();
    (*DAT_10121fcc)(uVar2);
    pcVar9 = s___s<_i><_u><_i>__entered_the_gam_10111ba4;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    (*DAT_10121fb0)();
    (*DAT_10121fb4)();
    (*DAT_10121fdc)();
    (*DAT_10121fcc)(uVar2);
    pcVar9 = s___s<_i><_u><_s>__entered_the_gam_10111bc8;
  }
  FUN_100b0fe0((byte *)pcVar9);
  (**(code **)(*(int *)this + 0x38))();
  (*DAT_10121ec0)(1,DAT_101248b0,0);
  uVar2 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  (*DAT_10121ec8)(uVar2);
  (*DAT_10121ed0)(0);
  (*DAT_10121ed0)(0);
  (*DAT_10121ed0)(0);
  (*DAT_10121ed0)(0);
  (*DAT_10121ec4)();
  FUN_10066710(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      iVar5 = FUN_100af1c0(iVar3);
      if (iVar5 != 0) {
        (*DAT_10121ec0)(1,DAT_101248b0,0);
        (*DAT_10121ec8)(iVar3);
        lVar4 = __ftol();
        (*DAT_10121ed0)((int)lVar4);
        (*DAT_10121ed0)(*(undefined4 *)(iVar5 + 0x644));
        (*DAT_10121ed0)(0);
        iVar5 = (**(code **)(*(int *)this + 0xcc))();
        (*DAT_10121ed0)(iVar5 + 1);
        (*DAT_10121ec4)();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)(DAT_10122044 + 0x90));
  }
  if (DAT_10121dd0 != 0) {
    (*DAT_10121ec0)(1,0x1e,0);
    (*DAT_10121ec4)();
  }
  return;
}

