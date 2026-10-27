
void __fastcall FUN_100bb820(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (puVar5 != *(undefined4 **)(param_1 + 8)) {
    do {
      puVar1 = (undefined4 *)*puVar5;
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined *)*puVar1;
        if (puVar2 != (undefined *)0x0) {
          puVar6 = *(undefined4 **)(puVar2 + 4);
          if (puVar6 != *(undefined4 **)(puVar2 + 8)) {
            do {
              puVar3 = (undefined *)*puVar6;
              if (puVar3 != (undefined *)0x0) {
                FUN_100bacf0(puVar3 + 8,'\x01');
                FUN_100c8ce6(puVar3);
              }
              puVar6 = puVar6 + 1;
            } while (puVar6 != *(undefined4 **)(puVar2 + 8));
          }
          FUN_100ba7a0((int)puVar2);
          FUN_100c8ce6(puVar2);
        }
        puVar2 = (undefined *)puVar1[1];
        if (puVar2 != (undefined *)0x0) {
          puVar6 = *(undefined4 **)(puVar2 + 4);
          if (puVar6 != *(undefined4 **)(puVar2 + 8)) {
            do {
              puVar4 = (undefined4 *)*puVar6;
              if (puVar4 != (undefined4 *)0x0) {
                FUN_100bd0c0(puVar4);
                FUN_100c8ce6((undefined *)puVar4);
              }
              puVar6 = puVar6 + 1;
            } while (puVar6 != *(undefined4 **)(puVar2 + 8));
          }
          FUN_100bad60((int)puVar2);
          FUN_100c8ce6(puVar2);
        }
        FUN_100c8ce6((undefined *)puVar1);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_1 + 8));
  }
  FUN_100c8ce6(*(undefined **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

