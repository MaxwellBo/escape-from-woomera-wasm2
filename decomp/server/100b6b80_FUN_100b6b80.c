
void __fastcall FUN_100b6b80(void *param_1)

{
  int iVar1;
  
  FUN_10098e40(param_1,param_1,1,0);
  if (*(int *)((int)param_1 + 0xe0) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xe0) + 4);
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) & 0xffffff7f;
  }
  return;
}

