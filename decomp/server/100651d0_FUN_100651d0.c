
void __thiscall FUN_100651d0(int param_1,int param_2)

{
  if (DAT_10121dd0 != 0) {
    if ((*(uint *)(param_2 + 0x330) & 0x827) != 0) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
    *(undefined4 *)(param_2 + 0x330) = 0;
    *(undefined4 *)(*(int *)(param_2 + 4) + 0x180) = 0;
    *(undefined4 *)(param_2 + 0x334) = 0;
  }
  return;
}

