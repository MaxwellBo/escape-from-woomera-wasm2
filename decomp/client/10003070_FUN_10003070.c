
void __cdecl FUN_10003070(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = (**(code **)(DAT_100a5140 + 0x24))(*(undefined4 *)(param_1 + 0x30));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) == 4)) {
    pcVar2 = FUN_10002e60(iVar1);
    FUN_10002ee0(param_1,pcVar2);
  }
  return;
}

