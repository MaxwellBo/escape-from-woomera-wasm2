
void __cdecl FUN_100b5770(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x118) & 0x80) == 0) {
    if (DAT_101323a0 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_101323a0 + 0x80;
    }
    *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar3 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(iVar3 + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(iVar3 + 0x130) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(iVar3 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(iVar3 + 0x108) = 6;
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar3 + 0x1a4) = 0;
    *(undefined4 *)(iVar3 + 0x28) = uVar1;
    *(undefined4 *)(iVar3 + 0x170) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)(iVar3 + 0x15c) = 0x11;
    iVar2 = (*DAT_10121f24)(*(undefined4 *)(param_1 + 0x208));
    *(float *)(iVar3 + 0x14c) = (float)iVar2;
    *(uint *)(iVar3 + 0x118) = *(uint *)(param_1 + 0x118) | 0x20;
    *(undefined4 *)(iVar3 + 0x128) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(iVar3 + 0x134) = *(undefined4 *)(param_1 + 0x134);
    FUN_100afdf0(DAT_101323a0,param_1 + 8);
    FUN_100afdc0(iVar3,param_1 + 0xdc,param_1 + 0xe8);
    DAT_101323a0 = *(int *)(iVar3 + 0x198);
  }
  return;
}

