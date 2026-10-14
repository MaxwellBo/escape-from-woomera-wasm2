
void __thiscall FUN_1000fd80(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 7) {
    iVar1 = FUN_10008160(param_1,&DAT_10103974);
  }
  else {
    iVar1 = FUN_10008100(param_1,param_2);
  }
  if (-1 < iVar1) {
    if (((*(int *)(param_1[1] + 0x128) != iVar1) || (param_1[0x36] == 0)) &&
       (((param_1[0x73] != 3 && (param_1[0x73] != 4)) || ((param_2 != 3 && (param_2 != 4)))))) {
      *(undefined4 *)(param_1[1] + 0x130) = 0;
    }
    *(int *)(param_1[1] + 0x128) = iVar1;
    FUN_10008190((int)param_1);
    (**(code **)(*param_1 + 0x1b8))();
    param_1[0x73] = param_2;
    param_1[0x74] = param_2;
    return;
  }
  (*DAT_10121efc)(2,s__s_has_no_sequence_for_act__d_10103954,
                  *(int *)(DAT_10122044 + 0x98) + *(int *)param_1[1],param_2);
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  param_1[0x73] = param_2;
  param_1[0x74] = param_2;
  return;
}

