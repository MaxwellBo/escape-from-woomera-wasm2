
void __fastcall FUN_100ba630(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (puVar4 != *(undefined4 **)(param_1 + 8)) {
    do {
      puVar2 = (undefined *)*puVar4;
      if (puVar2 != (undefined *)0x0) {
        iVar3 = *(int *)(puVar2 + 0xc);
        if (iVar3 != 0) {
          cVar1 = *(char *)(iVar3 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_100c8ce6((char *)(iVar3 + -1));
          }
          else {
            *(char *)(iVar3 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        FUN_100c8ce6(puVar2);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 8));
  }
  FUN_100c8ce6(*(undefined **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

