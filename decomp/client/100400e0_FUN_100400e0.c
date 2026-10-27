
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100400e0(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(param_1 + 0xb0);
  uStack_10 = 0x100400f3;
  iVar1 = (*DAT_100a50c4)();
  if (iVar1 != 0) {
    uStack_c = *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0x68);
    uStack_10 = *(undefined4 *)(*(int *)(param_1 + 0xcc) + 100);
    uStack_24 = 0x10040118;
    FUN_100083d0(auStack_1c,(undefined4 *)(param_1 + 0x58));
    FUN_100083d0(auStack_28,(undefined4 *)(iVar1 + 0xb54));
    fVar2 = FUN_1003fcd0();
    *(float *)(param_1 + 0x14) = (float)(fVar2 + (float10)*(float *)(param_1 + 0x14));
    if ((*(int *)(param_1 + 0x8c) < 1) && (*(float *)(param_1 + 0x78) != _DAT_10059a18)) {
      *(undefined4 *)(param_1 + 0x14) = 0x42a00000;
    }
  }
  return;
}

