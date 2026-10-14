
void __thiscall FUN_1008de70(int *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x1a4) & 8) != 0)) {
    param_1[0xa8] = param_1[0xa8] | 1;
    (**(code **)(*param_1 + 0x228))(1);
  }
  FUN_1009b980(param_1,param_2,param_3,param_4,param_5);
  return;
}

