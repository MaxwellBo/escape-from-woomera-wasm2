
void __fastcall FUN_1000d540(int param_1)

{
  int iVar1;
  
  FUN_1009a900(param_1);
  if (*(int *)(param_1 + 0x370) == 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(char **)(param_1 + 0x314) = s_BA_ANSWER_10103350;
    *(char **)(param_1 + 0x318) = s_BA_QUESTION_10103344;
    *(char **)(param_1 + 0x31c) = s_BA_IDLE_1010333c;
    *(char **)(param_1 + 800) = s_BA_STARE_10103330;
    if ((*(uint *)(iVar1 + 0x1a0) & 0x100) == 0) {
      *(char **)(param_1 + 0x324) = s_BA_OK_1010331c;
    }
    else {
      *(char **)(param_1 + 0x324) = s_BA_PFOLLOW_10103324;
    }
    if ((*(uint *)(iVar1 + 0x1a0) & 0x100) == 0) {
      *(char **)(param_1 + 0x328) = s_BA_WAIT_10103308;
    }
    else {
      *(char **)(param_1 + 0x328) = s_BA_PWAIT_10103310;
    }
    if ((*(uint *)(iVar1 + 0x1a0) & 0x100) == 0) {
      *(char **)(param_1 + 0x32c) = s_BA_NOTOK_101032f4;
    }
    else {
      *(char **)(param_1 + 0x32c) = s_BA_POK_10103300;
    }
    *(char **)(param_1 + 0x330) = s_BA_STOP_101032ec;
    *(char **)(param_1 + 0x334) = s_BA_SCARED_101032e0;
    *(char **)(param_1 + 0x338) = s_BA_HELLO_101032d4;
    *(char **)(param_1 + 0x348) = s__BA_CUREA_101032c8;
    *(char **)(param_1 + 0x34c) = s__BA_CUREB_101032bc;
    *(char **)(param_1 + 0x350) = s__BA_CUREC_101032b0;
    *(undefined4 *)(param_1 + 0x33c) = 0;
    *(undefined4 *)(param_1 + 0x340) = 0;
    *(char **)(param_1 + 0x344) = s_BA_PQUEST_101032a4;
    *(char **)(param_1 + 0x354) = s_BA_SMELL_10103298;
    *(char **)(param_1 + 0x358) = s_BA_WOUND_1010328c;
    *(char **)(param_1 + 0x35c) = s_BA_MORTAL_10103280;
  }
  *(undefined4 *)(param_1 + 0x310) = 100;
  return;
}

