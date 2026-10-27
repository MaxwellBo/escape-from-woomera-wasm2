
void __fastcall FUN_1002b870(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  (*DAT_10121e08)(s_sprites_null_spr_10108000);
  uVar4 = (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4) = uVar4;
  if (*(int *)(param_1 + 0xc0) != 0) {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc0));
    cVar3 = *pcVar2;
    pcVar5 = pcVar2;
    while (cVar3 != '\0') {
      if (cVar3 == '.') {
        (*DAT_10121e08)(pcVar2);
        break;
      }
      pcVar1 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      cVar3 = *pcVar1;
    }
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc4));
    cVar3 = *pcVar2;
    pcVar5 = pcVar2;
    if (cVar3 != '\0') {
      while (cVar3 != '.') {
        cVar3 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
        if (cVar3 == '\0') {
          return;
        }
      }
      (*DAT_10121e08)(pcVar2);
    }
  }
  return;
}

