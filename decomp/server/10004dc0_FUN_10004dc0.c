
void __thiscall FUN_10004dc0(void *param_1,undefined4 param_2,int param_3)

{
  undefined4 auStack_18 [3];
  undefined4 auStack_c [3];
  
  if ((*(uint *)(*(int *)((int)param_1 + 4) + 0x1a0) & 0x400) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x114) = 1;
    FUN_10008450(param_1,0,auStack_c,auStack_18);
    FUN_10061e00(param_1,0x10101b10,auStack_c,auStack_18);
  }
  FUN_1001ec30(param_1,param_2,param_3);
  return;
}

