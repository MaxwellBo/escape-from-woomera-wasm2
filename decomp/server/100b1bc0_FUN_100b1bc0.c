
void __thiscall FUN_100b1bc0(void *param_1,undefined4 *param_2,uint param_3)

{
  uint uStack_4;
  
  uStack_4 = (uint)param_1 & 0xffffff;
  FUN_100b1ca0(param_1,param_2,param_3);
  FUN_100b1ca0(param_1,(undefined4 *)((int)&uStack_4 + 3),1);
  return;
}

