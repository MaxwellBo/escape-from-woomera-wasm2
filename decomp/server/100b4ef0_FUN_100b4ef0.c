
void __thiscall FUN_100b4ef0(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100b32f0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*(int **)((int)param_1 + 4))[0x73];
  if (iVar1 != 0) {
    FUN_100b18e0(param_2,*(int *)(DAT_10122044 + 0x98) + iVar1,&DAT_1011bb38,(int)param_1,0x1011b5f0
                 ,2);
    return;
  }
  FUN_100b18e0(param_2,*(int *)(DAT_10122044 + 0x98) + **(int **)((int)param_1 + 4),&DAT_1011bb38,
               (int)param_1,0x1011b5f0,2);
  return;
}

