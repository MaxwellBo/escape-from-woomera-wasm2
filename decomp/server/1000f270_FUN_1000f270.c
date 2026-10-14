
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000f270(void *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  if ((param_5 & 0x100000) != 0) {
    param_4 = 0.0;
  }
  if (((*(byte *)((int)param_1 + 0x2a0) & 8) == 0) &&
     (*(float *)(*(int *)((int)param_1 + 4) + 0x160) <= param_4)) {
    *(float *)(*(int *)((int)param_1 + 4) + 0x160) = param_4 + _DAT_100dd618;
    *(uint *)((int)param_1 + 0x2a0) = *(uint *)((int)param_1 + 0x2a0) | 0x60000000;
    (*DAT_10121efc)(2,s_BM__Finished_node_health____10103854);
  }
  FUN_1001f350(param_1,param_2,param_3,param_4,param_5);
  return;
}

