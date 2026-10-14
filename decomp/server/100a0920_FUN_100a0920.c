
void __fastcall FUN_100a0920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = (*DAT_10121e5c)();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 0x80;
  }
  iVar1 = *(int *)(iVar3 + 0x208);
  if ((iVar1 == 0) || (puVar4 = *(undefined4 **)(iVar1 + 0x7c), puVar4 == (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)(*DAT_10121f04)(iVar1,0x16c);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = &PTR_FUN_100f2d40;
    }
    puVar4[1] = iVar3;
  }
  uVar2 = ((undefined4 *)puVar4[1])[0x82];
  puVar5 = *(undefined4 **)(param_1 + 4);
  puVar6 = (undefined4 *)puVar4[1];
  for (iVar3 = 0xa9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(puVar4[1] + 0x208) = uVar2;
  *(uint *)(puVar4[1] + 0x1a0) = *(uint *)(puVar4[1] + 0x1a0) | 0x80000000;
  puVar4[0x2f] = *(undefined4 *)(param_1 + 0xbc);
  if (*(int *)(param_1 + 0x158) != 0) {
    *(int *)(puVar4[1] + 0x1cc) = *(int *)(param_1 + 0x158);
  }
  puVar4[0x5a] = *(undefined4 *)(param_1 + 0x168);
  puVar4[0x55] = *(undefined4 *)(param_1 + 0x154);
  puVar4[0x52] = *(undefined4 *)(param_1 + 0x148);
  puVar4[0x53] = *(undefined4 *)(param_1 + 0x14c);
  puVar5 = (undefined4 *)(param_1 + 200);
  puVar6 = puVar4 + 0x32;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(param_1 + 0x108);
  puVar4 = puVar4 + 0x42;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

