
void __cdecl FUN_100bdfe0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *this;
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_100ba9a0(param_1,param_2,0,DAT_100f7054);
    this = param_1 + 0x10;
    *this = param_2[0x10];
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar4 = *(uint *)(param_2 + 0x18);
    uVar5 = uVar4;
    if (DAT_100f7054 < uVar4) {
      uVar5 = DAT_100f7054;
    }
    if (this == param_2 + 0x10) {
      FUN_100bb060(this,uVar5,DAT_100f7054);
      FUN_100bb060(this,0,0);
      return;
    }
    if ((uVar5 != 0) && (uVar5 == uVar4)) {
      puVar2 = *(undefined4 **)(param_2 + 0x14);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_100f7058;
      }
      if (*(byte *)((int)puVar2 + -1) < 0xfe) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        puVar2 = *(undefined4 **)(param_2 + 0x14);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = &DAT_100f7058;
        }
        *(undefined4 **)(param_1 + 0x14) = puVar2;
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        *(char *)((int)puVar2 + -1) = *(char *)((int)puVar2 + -1) + '\x01';
        return;
      }
    }
    uVar3 = FUN_100bbb30(this,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      puVar2 = &DAT_100f7058;
      if (*(undefined4 **)(param_2 + 0x14) != (undefined4 *)0x0) {
        puVar2 = *(undefined4 **)(param_2 + 0x14);
      }
      puVar6 = *(undefined4 **)(param_1 + 0x14);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_100bbb10(this,uVar5);
    }
  }
  return;
}

