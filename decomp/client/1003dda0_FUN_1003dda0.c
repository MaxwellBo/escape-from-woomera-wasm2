
void __fastcall FUN_1003dda0(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 1;
  pcVar1 = &DAT_100b5a0a;
  do {
    (*DAT_100a5044)(iVar2,pcVar1 + -6);
    if (*pcVar1 != '\0') {
      *(int *)(*(int *)(param_1 + 0xaac) + 0x2684c) = iVar2;
    }
    pcVar1 = pcVar1 + 0x14;
    iVar2 = iVar2 + 1;
  } while ((int)pcVar1 < 0x100b5ef6);
  return;
}

