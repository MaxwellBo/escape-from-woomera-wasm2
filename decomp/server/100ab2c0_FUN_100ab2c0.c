
undefined4 __thiscall FUN_100ab2c0(int *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  undefined4 uVar1;
  
  if ((*DAT_10122044 < (float)param_1[0xc3]) && (param_4 < *(float *)(param_1[1] + 0x160))) {
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*param_1 + 8))(0x3dcccccd);
    FUN_100aafd0((int)param_1);
    return 0;
  }
  uVar1 = FUN_1001f350(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

