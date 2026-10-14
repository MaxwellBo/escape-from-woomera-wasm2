
undefined1 * __thiscall FUN_100ba1f0(void *this,undefined1 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar5 = DAT_100f7054;
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = uVar1;
  if (DAT_100f7054 < uVar1) {
    uVar4 = DAT_100f7054;
  }
  if (this == param_1) {
    if (uVar4 != 0) {
      FUN_100d9f8d();
    }
    FUN_100bbc60(this);
    uVar1 = *(int *)((int)this + 8) - uVar4;
    if (uVar1 < uVar5) {
      uVar5 = uVar1;
    }
    if (uVar5 != 0) {
      puVar3 = (undefined4 *)(*(int *)((int)this + 4) + uVar4);
      FUN_100c97a0(puVar3,(undefined4 *)((int)puVar3 + uVar5),uVar1 - uVar5);
      uVar5 = *(int *)((int)this + 8) - uVar5;
      uVar2 = FUN_100bbb30(this,uVar5,'\0');
      if ((char)uVar2 != '\0') {
        FUN_100bbb10(this,uVar5);
      }
    }
    FUN_100bbc60(this);
    return this;
  }
  if ((uVar4 != 0) && (uVar4 == uVar1)) {
    puVar3 = *(undefined4 **)(param_1 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = &DAT_100f7058;
    }
    if (*(byte *)((int)puVar3 + -1) < 0xfe) {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      puVar3 = *(undefined4 **)(param_1 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_100f7058;
      }
      *(undefined4 **)((int)this + 4) = puVar3;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
      *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
      return this;
    }
  }
  uVar2 = FUN_100bbb30(this,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    puVar3 = *(undefined4 **)(param_1 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = &DAT_100f7058;
    }
    puVar6 = *(undefined4 **)((int)this + 4);
    for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_100bbb10(this,uVar4);
  }
  return this;
}

