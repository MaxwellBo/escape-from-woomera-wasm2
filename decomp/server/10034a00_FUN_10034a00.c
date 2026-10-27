
void __fastcall FUN_10034a00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  
  FUN_10034d30(param_1);
  puVar2 = FUN_100295c0(0x10108604,0x28);
  *(undefined4 **)(param_1 + 0x124) = puVar2;
  uVar3 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208));
  FUN_10029800(*(void **)(param_1 + 0x124),(undefined4 *)(*(int *)(param_1 + 4) + 8),uVar3);
  iVar1 = *(int *)(*(int *)(param_1 + 0x124) + 4);
  *(uint *)(iVar1 + 0x148) = *(uint *)(iVar1 + 0x148) & 0xf | 0x10;
  iVar1 = *(int *)(*(int *)(param_1 + 0x124) + 4);
  *(uint *)(iVar1 + 0x110) = (uint)((ushort)*(undefined4 *)(iVar1 + 0x110) & 0xfff | 0x1000);
  iVar1 = *(int *)(*(int *)(param_1 + 0x124) + 4);
  *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x124) + 4);
  *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x100;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x124) + 4) + 0x198) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208);
  puVar2 = FUN_100295c0(0x10108604,0x37);
  *(undefined4 **)(param_1 + 0x128) = puVar2;
  uVar3 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208));
  FUN_10029800(*(void **)(param_1 + 0x128),(undefined4 *)(*(int *)(param_1 + 4) + 8),uVar3);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x128) + 4) + 0x134) = 0x41c80000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x128) + 4) + 0x14c) = 0x42c80000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x128) + 4);
  *(uint *)(iVar1 + 0x110) = (uint)((ushort)*(undefined4 *)(iVar1 + 0x110) & 0xfff | 0x1000);
  iVar1 = *(int *)(*(int *)(param_1 + 0x128) + 4);
  *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
  iVar1 = *(int *)(*(int *)(param_1 + 0x128) + 4);
  *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x100;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x128) + 4) + 0x198) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208);
  piVar4 = FUN_1002ca80(0x101085f0,(undefined4 *)(*(int *)(param_1 + 4) + 8),0);
  *(int **)(param_1 + 300) = piVar4;
  *(undefined4 *)(piVar4[1] + 0x144) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 300);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x148) = 3;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x150) = 0x437f0000;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x154) = 0x437f0000;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x158) = 0x437f0000;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x14c) = 0x437f0000;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x15c) = 0xe;
  iVar1 = *(int *)(*(int *)(param_1 + 300) + 4);
  *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
  iVar1 = *(int *)(*(int *)(param_1 + 300) + 4);
  *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x100;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 300) + 4) + 0x198) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208);
  iVar1 = *(int *)(*(int *)(param_1 + 0x124) + 4);
  if (*(int *)(param_1 + 0x138) == 1) {
    *(undefined4 *)(iVar1 + 0x134) = 0x42480000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x124) + 4) + 0x114) = 0x14;
    iVar1 = *(int *)(param_1 + 0x128);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x150) = 0x42480000;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x154) = 0x42480000;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x158) = 0x437f0000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x128) + 4) + 0x114) = 8;
    return;
  }
  *(undefined4 *)(iVar1 + 0x134) = 0x42dc0000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x124) + 4) + 0x114) = 5;
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x150) = 0x42a00000;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x154) = 0x42f00000;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x158) = 0x437f0000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x128) + 4) + 0x114) = 2;
  return;
}

