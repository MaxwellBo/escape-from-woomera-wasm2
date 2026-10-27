
void __thiscall FUN_10035ce0(void *param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x108) = 4;
  *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) & 0xfffffdff;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x58) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x50) = 0;
  FUN_1001ec30(param_1,param_2,param_3);
  return;
}

