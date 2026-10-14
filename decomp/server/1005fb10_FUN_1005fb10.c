
void __fastcall FUN_1005fb10(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x1e0)) {
  case 0:
  case 1:
    *(undefined4 *)(param_1 + 0x1e0) = 3;
    *(undefined4 *)(param_1 + 0x26c) = 0;
    return;
  case 2:
    if ((*(uint *)(param_1 + 0x15c) & 0x40000000) == 0) {
      *(undefined4 *)(param_1 + 0x1e0) = 4;
      *(undefined4 *)(param_1 + 0x26c) = 0;
      return;
    }
    break;
  case 3:
    (*DAT_10121efc)(4,s_Movement_completed_twice__10111308);
  }
  *(undefined4 *)(param_1 + 0x26c) = 0;
  return;
}

