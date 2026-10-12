
undefined1 * __thiscall FUN_100baf70(void *this,undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar4 = *(uint *)(param_1 + 8);
  uVar5 = uVar4;
  if (DAT_100f7054 < uVar4) {
    uVar5 = DAT_100f7054;
  }
  if (this == param_1) {
    FUN_100bb060(this,uVar5,DAT_100f7054);
    FUN_100bb060(this,0,0);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == uVar4)) {
      puVar2 = *(undefined4 **)(param_1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_100f7058;
      }
      if (*(byte *)((int)puVar2 + -1) < 0xfe) {
        FUN_100bacf0(this,'\x01');
        puVar2 = *(undefined4 **)(param_1 + 4);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = &DAT_100f7058;
        }
        *(undefined4 **)((int)this + 4) = puVar2;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(char *)((int)puVar2 + -1) = *(char *)((int)puVar2 + -1) + '\x01';
        goto LAB_100bb030;
      }
    }
    uVar3 = FUN_100bbb30(this,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      puVar2 = *(undefined4 **)(param_1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_100f7058;
      }
      puVar6 = *(undefined4 **)((int)this + 4);
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
LAB_100bb030:
  uVar1 = *param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_100ba9a0((undefined1 *)((int)this + 0x10),param_2,0,DAT_100f7054);
  return this;
}

