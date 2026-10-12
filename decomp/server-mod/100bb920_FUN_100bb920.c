
undefined4 * __thiscall FUN_100bb920(undefined4 *param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *puVar4;
  undefined4 *extraout_ECX_01;
  
  puVar1 = (undefined *)*param_1;
  puVar4 = param_1;
  if (puVar1 != (undefined *)0x0) {
    puVar4 = *(undefined4 **)(puVar1 + 4);
    if (puVar4 != *(undefined4 **)(puVar1 + 8)) {
      do {
        puVar2 = (undefined *)*puVar4;
        if (puVar2 != (undefined *)0x0) {
          FUN_100bacf0(puVar2 + 8,'\x01');
          FUN_100c8ce6(puVar2);
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != *(undefined4 **)(puVar1 + 8));
    }
    FUN_100c8ce6(*(undefined **)(puVar1 + 4));
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    FUN_100c8ce6(puVar1);
    puVar4 = extraout_ECX;
  }
  puVar1 = (undefined *)param_1[1];
  if (puVar1 != (undefined *)0x0) {
    puVar4 = *(undefined4 **)(puVar1 + 4);
    if (puVar4 != *(undefined4 **)(puVar1 + 8)) {
      do {
        puVar3 = (undefined4 *)*puVar4;
        if (puVar3 != (undefined4 *)0x0) {
          puVar2 = (undefined *)*puVar3;
          if (puVar2 != (undefined *)0x0) {
            FUN_100bba20((int)puVar2);
            FUN_100c8ce6(puVar2);
          }
          FUN_100bacf0(puVar3 + 1,'\x01');
          FUN_100c8ce6((undefined *)puVar3);
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != *(undefined4 **)(puVar1 + 8));
    }
    FUN_100c8ce6(*(undefined **)(puVar1 + 4));
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    FUN_100c8ce6(puVar1);
    puVar4 = extraout_ECX_00;
  }
  puVar4 = (undefined4 *)CONCAT31((int3)((uint)puVar4 >> 8),param_2);
  if ((param_2 & 1) != 0) {
    FUN_100c8ce6((undefined *)param_1);
    puVar4 = extraout_ECX_01;
  }
  return puVar4;
}

