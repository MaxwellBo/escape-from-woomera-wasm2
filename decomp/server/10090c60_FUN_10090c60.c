
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10090c60(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  param_1[0x5e] = 1;
  param_1[0x5f] = 0;
  if (*(int *)(param_1[1] + 0x1cc) == 0) {
    param_1[0x1d] = (int)CScriptedSentence::FindThink;
    (**(code **)(*param_1 + 8))(0x3f800000);
  }
  iVar1 = *(int *)(param_1[1] + 0x184);
  if (iVar1 == 1) {
    param_1[0x5c] = 0x3fa00000;
  }
  else if (iVar1 == 2) {
    param_1[0x5c] = 0x3f4ccccd;
  }
  else if (iVar1 == 3) {
    param_1[0x5c] = 0;
  }
  else {
    param_1[0x5c] = 0x40000000;
  }
  *(undefined4 *)(param_1[1] + 0x184) = 0;
  if ((float)param_1[0x5d] <= _DAT_100dd5f8) {
    param_1[0x5d] = 0x3f800000;
  }
  return;
}

