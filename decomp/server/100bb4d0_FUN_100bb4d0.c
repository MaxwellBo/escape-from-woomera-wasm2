
void FUN_100bb4d0(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    if ((*(char *)(param_1 + 0x10) != '\0') &&
       (puVar2 = *(undefined **)(param_1 + 0x14), puVar2 != (undefined *)0x0)) {
      puVar5 = *(undefined4 **)(puVar2 + 4);
      if (puVar5 != *(undefined4 **)(puVar2 + 8)) {
        do {
          puVar3 = (undefined4 *)*puVar5;
          if (puVar3 != (undefined4 *)0x0) {
            FUN_100bd180(puVar3);
            FUN_100c8ce6((undefined *)puVar3);
          }
          puVar5 = puVar5 + 1;
        } while (puVar5 != *(undefined4 **)(puVar2 + 8));
      }
      FUN_100bda20();
      FUN_100bc8d0(*(undefined **)(puVar2 + 4));
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      FUN_100c8ce6(puVar2);
    }
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_100c8ce6((char *)(iVar4 + -1));
      }
      else {
        *(char *)(iVar4 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

