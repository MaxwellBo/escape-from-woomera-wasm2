
void __thiscall FUN_1008ff60(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1[0x77] != 8) {
    param_1[0x77] = 1;
  }
  if (*(int *)((int)this + 0x330) != 0) {
    if (*(int *)((int)this + 0x330) == 1) {
      iVar1 = (**(code **)(*param_1 + 0x184))(0x20);
      FUN_10004e70(param_1,iVar1);
      return;
    }
    (*DAT_10121efc)(2,s_FixScriptMonsterSchedule___no_ca_101160e8);
  }
  FUN_10004e30((int)param_1);
  return;
}

