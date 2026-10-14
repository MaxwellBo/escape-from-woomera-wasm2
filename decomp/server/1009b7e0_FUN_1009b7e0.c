
void __thiscall
FUN_1009b7e0(int *param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  if (param_6 == 0) {
    FUN_1009a740(param_1);
  }
  param_1[0x57] = param_1[0x57] & 0xefffffff;
  param_1[0xd8] = (int)(param_3 + *DAT_10122044);
  (**(code **)(*param_1 + 0x198))(param_2,param_3,param_4,param_5);
  FUN_10019420(param_1 + 0xdf,(int)param_3);
  return;
}

