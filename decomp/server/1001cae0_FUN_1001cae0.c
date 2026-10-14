
void __cdecl
FUN_1001cae0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_4 + 0x88);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_4 + 0x8c);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_4 + 0x90);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_4 + 0xd0);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_4 + 0xd4);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_4 + 0xd8);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 0x1b0);
  *(undefined2 *)(param_3 + 0x38) = *(undefined2 *)(param_4 + 400);
  *(uint *)(param_3 + 0x48) = (uint)*(byte *)(param_4 + 0x1c8);
  lVar2 = __ftol();
  *(uint *)(param_3 + 0x4c) = (uint)lVar2 & 0xff;
  lVar2 = __ftol();
  *(char *)(param_3 + 0x50) = (char)lVar2;
  lVar2 = __ftol();
  *(char *)(param_3 + 0x51) = (char)lVar2;
  lVar2 = __ftol();
  *(char *)(param_3 + 0x52) = (char)lVar2;
  *(uint *)(param_3 + 0x54) = (uint)*(byte *)(param_4 + 0x1dc);
  if (param_1 != 0) {
    *(undefined4 *)(param_3 + 0x7c) = param_6;
    *(undefined4 *)(param_3 + 0x80) = param_7;
    *(undefined4 *)(param_3 + 0x84) = param_8;
    *(undefined4 *)(param_3 + 0x88) = param_9;
    *(undefined4 *)(param_3 + 0x8c) = param_10;
    *(undefined4 *)(param_3 + 0x34) = param_2;
    *(undefined4 *)(param_3 + 0x90) = param_11;
    *(undefined4 *)(param_3 + 0x28) = param_5;
    *(undefined4 *)(param_3 + 0x9c) = 0x3f800000;
    *(undefined4 *)(param_3 + 0x58) = 3;
    uVar1 = *(undefined4 *)(param_4 + 0x1c4);
    *(undefined2 *)(param_3 + 0x3a) = 3;
    *(undefined4 *)(param_3 + 0x40) = uVar1;
    *(undefined4 *)(param_3 + 0x60) = 0x3f800000;
    *(undefined4 *)(param_3 + 0xa0) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_3 + 0x7c) = *(undefined4 *)(param_4 + 0x15c);
  *(undefined4 *)(param_3 + 0x80) = *(undefined4 *)(param_4 + 0x160);
  *(undefined4 *)(param_3 + 0x84) = *(undefined4 *)(param_4 + 0x164);
  *(undefined4 *)(param_3 + 0x88) = *(undefined4 *)(param_4 + 0x168);
  *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(param_4 + 0x16c);
  uVar1 = *(undefined4 *)(param_4 + 0x170);
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x90) = uVar1;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_4 + 0x134);
  *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)(param_4 + 0x188);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_4 + 0x1c4);
  *(undefined2 *)(param_3 + 0x3a) = *(undefined2 *)(param_4 + 0x18c);
  *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_4 + 0x1b8);
  *(undefined4 *)(param_3 + 0xa0) = *(undefined4 *)(param_4 + 0x19c);
  return;
}

