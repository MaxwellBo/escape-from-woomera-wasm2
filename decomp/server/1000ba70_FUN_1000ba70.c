
undefined4 __thiscall FUN_1000ba70(void *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x198) == *(int *)(*(int *)((int)param_1 + 4) + 0x208)) {
    return 0;
  }
  if ((param_5 & 0x40) != 0) {
    param_4 = param_4 + param_4;
  }
  uVar1 = FUN_10019880(param_1,param_2,param_3,param_4);
  return uVar1;
}

