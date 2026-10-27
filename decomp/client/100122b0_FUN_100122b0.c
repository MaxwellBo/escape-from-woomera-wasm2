
undefined4 * __fastcall FUN_100122b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_10057888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005e5d4;
  param_1[5] = &PTR_FUN_1005e5a8;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4 = 0;
  param_1[0xc] = 0;
  puVar2 = param_1 + 0x2e5;
  iVar1 = 0x20;
  do {
    FUN_10005fb0(puVar2 + -0x1d6,0x1c,0x40,&LAB_10001e20);
    FUN_10005fb0(puVar2,0xc,4,&LAB_10001e20);
    puVar2 = puVar2 + 0x2ee;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_10011dc0((int)(param_1 + 0x5dfe));
  *param_1 = &PTR_FUN_1005e588;
  param_1[5] = &PTR_FUN_1005e55c;
  *(undefined1 *)(param_1 + 0x63fe) = 0;
  param_1[6] = 0;
  param_1[0x5df9] = 0;
  param_1[0x5dd0] = 0;
  param_1[0x5dd1] = 0;
  param_1[0x5dd2] = 0;
  param_1[0x5dd3] = 0;
  param_1[0x5dd4] = 0;
  param_1[0x5dd5] = 0;
  param_1[0x5dfa] = 0;
  param_1[0x5dfb] = 0;
  *(undefined1 *)((int)param_1 + 0x177f5) = 0;
  *(undefined1 *)(param_1 + 0x5dfd) = 0;
  puVar2 = param_1 + 0x5dd6;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[7] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

