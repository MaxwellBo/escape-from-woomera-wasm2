
void __fastcall FUN_100bd180(undefined4 *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined *)*param_1;
  if (puVar2 != (undefined *)0x0) {
    puVar6 = *(undefined4 **)(puVar2 + 4);
    if (puVar6 != *(undefined4 **)(puVar2 + 8)) {
      do {
        puVar3 = (undefined *)*puVar6;
        if (puVar3 != (undefined *)0x0) {
          iVar4 = *(int *)(puVar3 + 0xc);
          if (iVar4 != 0) {
            cVar1 = *(char *)(iVar4 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_100c8ce6((char *)(iVar4 + -1));
            }
            else {
              *(char *)(iVar4 + -1) = cVar1 + -1;
            }
          }
          *(undefined4 *)(puVar3 + 0xc) = 0;
          *(undefined4 *)(puVar3 + 0x10) = 0;
          *(undefined4 *)(puVar3 + 0x14) = 0;
          FUN_100c8ce6(puVar3);
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != *(undefined4 **)(puVar2 + 8));
    }
    FUN_100c8ce6(*(undefined **)(puVar2 + 4));
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    FUN_100c8ce6(puVar2);
  }
  puVar2 = (undefined *)param_1[1];
  if (puVar2 != (undefined *)0x0) {
    puVar6 = *(undefined4 **)(puVar2 + 4);
    if (puVar6 != *(undefined4 **)(puVar2 + 8)) {
      do {
        puVar5 = (undefined4 *)*puVar6;
        if (puVar5 != (undefined4 *)0x0) {
          puVar3 = (undefined *)*puVar5;
          if (puVar3 != (undefined *)0x0) {
            FUN_100bba20((int)puVar3);
            FUN_100c8ce6(puVar3);
          }
          FUN_100bacf0(puVar5 + 1,'\x01');
          FUN_100c8ce6((undefined *)puVar5);
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != *(undefined4 **)(puVar2 + 8));
    }
    FUN_100c8ce6(*(undefined **)(puVar2 + 4));
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    FUN_100c8ce6(puVar2);
  }
  return;
}

