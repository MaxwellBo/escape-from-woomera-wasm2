
void __fastcall FUN_100ba6b0(char *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((*param_1 != '\0') && (puVar1 = *(undefined **)(param_1 + 4), puVar1 != (undefined *)0x0)) {
    puVar4 = *(undefined4 **)(puVar1 + 4);
    if (puVar4 != *(undefined4 **)(puVar1 + 8)) {
      do {
        puVar2 = (undefined4 *)*puVar4;
        if (puVar2 != (undefined4 *)0x0) {
          puVar3 = (undefined *)*puVar2;
          if (puVar3 != (undefined *)0x0) {
            puVar5 = *(undefined4 **)(puVar3 + 4);
            if (puVar5 != *(undefined4 **)(puVar3 + 8)) {
              do {
                if ((void *)*puVar5 != (void *)0x0) {
                  FUN_100ba7f0((void *)*puVar5,1);
                }
                puVar5 = puVar5 + 1;
              } while (puVar5 != *(undefined4 **)(puVar3 + 8));
            }
            FUN_100ba7a0((int)puVar3);
            FUN_100c8ce6(puVar3);
          }
          puVar3 = (undefined *)puVar2[1];
          if (puVar3 != (undefined *)0x0) {
            puVar5 = *(undefined4 **)(puVar3 + 4);
            if (puVar5 != *(undefined4 **)(puVar3 + 8)) {
              do {
                if ((void *)*puVar5 != (void *)0x0) {
                  FUN_100ba850((void *)*puVar5,1);
                }
                puVar5 = puVar5 + 1;
              } while (puVar5 != *(undefined4 **)(puVar3 + 8));
            }
            FUN_100bad60((int)puVar3);
            FUN_100c8ce6(puVar3);
          }
          FUN_100c8ce6((undefined *)puVar2);
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != *(undefined4 **)(puVar1 + 8));
    }
    FUN_100c8ce6(*(undefined **)(puVar1 + 4));
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    FUN_100c8ce6(puVar1);
  }
  return;
}

