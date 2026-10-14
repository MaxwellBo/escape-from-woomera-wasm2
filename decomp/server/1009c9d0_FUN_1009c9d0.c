
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009c9d0(int *param_1,int *param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  void *this;
  undefined1 auStack_404 [4];
  undefined4 auStack_400 [256];
  
  pbVar2 = (byte *)(*DAT_10121fb4)(param_3,s_model_10105414);
  pbVar1 = (byte *)(param_2 + 0x197);
  uVar3 = FUN_100d8b20(this,pbVar2,pbVar1);
  if (uVar3 != 0) {
    if (_DAT_1010974c != _DAT_100dd5f8) {
      uVar4 = (*DAT_10121f24)(*(undefined4 *)(param_2[1] + 0x208));
      uVar5 = (*DAT_10121fb0)(*(undefined4 *)(param_2[1] + 0x208),s_model_10105414,pbVar1);
      (*DAT_10121fbc)(uVar4,uVar5);
      uVar5 = (*DAT_10121fb0)(*(undefined4 *)(param_2[1] + 0x208),&DAT_10117fc8,pbVar1);
      (*DAT_10121fbc)(uVar4,uVar5);
      FUN_100c8506((undefined1 *)auStack_400,(byte *)s___Not_allowed_to_change_teams_in_10118054);
      FUN_100afa50(auStack_400,param_2);
      return;
    }
    iVar6 = (**(code **)(*param_1 + 0xd4))(pbVar2);
    if (iVar6 != 0) {
      FUN_100c8506(auStack_404,(byte *)s____s_has_changed_to_team___s__10118034);
      FUN_100afab0(auStack_404,(int)param_2);
      auStack_400[0] = *(undefined4 *)(param_2[1] + 0x208);
      uVar4 = (*DAT_10121fdc)(auStack_400[0],pbVar1,pbVar2);
      (*DAT_10121fcc)(auStack_400[0],uVar4);
      FUN_100b0fe0((byte *)s___s<_i><_u><_s>__joined_team___s_10118010);
      (**(code **)(*param_1 + 0xd8))(param_2,pbVar2,1,1);
      FUN_1009d020(param_1,'\x01');
      return;
    }
    uVar4 = (*DAT_10121f24)(*(undefined4 *)(param_2[1] + 0x208));
    uVar5 = (*DAT_10121fb0)(*(undefined4 *)(param_2[1] + 0x208),s_model_10105414,pbVar1);
    (*DAT_10121fbc)(uVar4,uVar5);
    FUN_100c8506(auStack_404,(byte *)s___Can_t_change_team_to___s__10117ff0);
    FUN_100afa50(auStack_404,param_2);
    FUN_100c8506(auStack_404,(byte *)s___Server_limits_teams_to___s__10117fd0);
    FUN_100afa50(auStack_404,param_2);
  }
  return;
}

