
void FUN_1001a2c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 auStack_100 [256];
  
  FUN_100c6970(0);
  puVar4 = auStack_100;
  if (DAT_10121dd0 == 0) {
    iVar3 = *(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x250);
    pcVar5 = s____s_has_left_the_game_101053bc;
    FUN_100c8506(auStack_100,(byte *)s____s_has_left_the_game_101053bc);
    (*DAT_10121ec0)(2,DAT_101248dc,0,0,puVar4,pcVar5,iVar3);
    uVar1 = (*DAT_10121f24)(param_1);
    (*DAT_10121ec8)(uVar1);
    (*DAT_10121ee0)(auStack_100);
    (*DAT_10121ec4)();
    iVar3 = FUN_10095f90(param_1);
    puVar2 = (undefined4 *)FUN_10095f40(iVar3);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_10095b40(puVar2);
    }
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    FUN_100afdf0(param_1,param_1 + 0x88);
    (**(code **)(*DAT_10121db8 + 0x34))(param_1);
  }
  return;
}

