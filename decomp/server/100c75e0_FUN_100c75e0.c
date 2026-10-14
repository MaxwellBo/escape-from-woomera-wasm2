
void __fastcall FUN_100c75e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((byte *)*param_1 == (byte *)0x0) {
    FUN_100c80d0();
    return;
  }
  iVar1 = FUN_100af030(0,(byte *)*param_1);
  iVar2 = _rand();
  if (iVar1 != 0) {
    FUN_10094b20((void *)*param_1,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x208),3,(void *)*param_1,
                 0x3f800000,0x3fa00000,0,100 - iVar2 % 0x14);
    FUN_100c80d0();
    return;
  }
  iVar1 = FUN_100c6980();
  FUN_10094bb0(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x208),(void *)*param_1);
  return;
}

