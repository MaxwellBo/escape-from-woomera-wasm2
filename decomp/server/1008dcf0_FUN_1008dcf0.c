
int __fastcall FUN_1008dcf0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1009a900(param_1);
  PTR_s_monster_barney_101179f8 = s_monster_scientist_10115c3c;
  PTR_s_monster_scientist_101179fc = s_monster_sitting_scientist_10115c20;
  PTR_s_monster_sitting_scientist_10117a00 = s_monster_barney_10115c10;
  if (*(int *)(param_1 + 0x370) == 0) {
    iVar2 = *(int *)(param_1 + 4);
    *(char **)(param_1 + 0x314) = s_SC_ANSWER_10115c04;
    *(char **)(param_1 + 0x318) = s_SC_QUESTION_10115bf8;
    *(char **)(param_1 + 0x31c) = s_SC_IDLE_10115bf0;
    *(char **)(param_1 + 800) = s_SC_STARE_10115be4;
    if ((*(uint *)(iVar2 + 0x1a0) & 0x100) == 0) {
      *(char **)(param_1 + 0x324) = s_SC_OK_10115bd0;
    }
    else {
      *(char **)(param_1 + 0x324) = s_SC_PFOLLOW_10115bd8;
    }
    if ((*(uint *)(iVar2 + 0x1a0) & 0x100) == 0) {
      *(char **)(param_1 + 0x328) = s_SC_WAIT_10115bbc;
    }
    else {
      *(char **)(param_1 + 0x328) = s_SC_PWAIT_10115bc4;
    }
    if ((*(uint *)(iVar2 + 0x1a0) & 0x100) == 0) {
      *(char **)(param_1 + 0x32c) = s_SC_NOTOK_10115ba8;
    }
    else {
      *(char **)(param_1 + 0x32c) = s_SC_POK_10115bb4;
    }
    *(char **)(param_1 + 0x330) = s_SC_STOP_10115ba0;
    *(char **)(param_1 + 0x334) = s_SC_SCARED_10115b94;
    *(char **)(param_1 + 0x338) = s_SC_HELLO_10115b88;
    *(char **)(param_1 + 0x348) = s__SC_CUREA_10115b7c;
    *(char **)(param_1 + 0x34c) = s__SC_CUREB_10115b70;
    *(char **)(param_1 + 0x350) = s__SC_CUREC_10115b64;
    *(char **)(param_1 + 0x33c) = s_SC_PHELLO_10115b58;
    *(char **)(param_1 + 0x340) = s_SC_PIDLE_10115b4c;
    *(char **)(param_1 + 0x344) = s_SC_PQUEST_10115b40;
    *(char **)(param_1 + 0x354) = s_SC_SMELL_10115b34;
    *(char **)(param_1 + 0x358) = s_SC_WOUND_10115b28;
    *(char **)(param_1 + 0x35c) = s_SC_MORTAL_10115b1c;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x114);
  iVar1 = iVar2 / 3;
  iVar2 = iVar2 % 3;
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x310) = 0x5f;
      return iVar1;
    }
    if (iVar2 != 3) {
      *(undefined4 *)(param_1 + 0x310) = 0x69;
      return iVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x310) = 100;
  return iVar1;
}

