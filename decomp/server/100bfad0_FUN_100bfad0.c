
undefined4 * __thiscall
FUN_100bfad0(void *this,undefined1 param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  undefined1 *this_00;
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = param_2;
  this_00 = (undefined1 *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_100f74bc;
  *this_00 = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar5 = param_3;
  if (DAT_100f7054 < param_3) {
    uVar5 = DAT_100f7054;
  }
  if (this_00 == &param_1) {
    FUN_100bb060(this_00,uVar5,DAT_100f7054);
    FUN_100bb060(this_00,0,0);
    puVar6 = param_2;
  }
  else {
    if ((uVar5 != 0) && (uVar5 == param_3)) {
      puVar2 = &DAT_100f7058;
      if (param_2 != (undefined4 *)0x0) {
        puVar2 = param_2;
      }
      if (*(byte *)((int)puVar2 + -1) < 0xfe) {
        FUN_100bacf0(this_00,'\x01');
        puVar2 = &DAT_100f7058;
        if (puVar6 != (undefined4 *)0x0) {
          puVar2 = puVar6;
        }
        *(undefined4 **)((int)this + 8) = puVar2;
        *(uint *)((int)this + 0xc) = param_3;
        *(undefined4 *)((int)this + 0x10) = param_4;
        *(char *)((int)puVar2 + -1) = *(char *)((int)puVar2 + -1) + '\x01';
        goto LAB_100bfbb0;
      }
    }
    uVar3 = FUN_100bbb30(this_00,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_100f7058;
      }
      puVar2 = *(undefined4 **)((int)this + 8);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      FUN_100bbb10(this_00,uVar5);
      puVar6 = param_2;
    }
  }
LAB_100bfbb0:
  *(undefined ***)this = &PTR_FUN_100f74e4;
  if (puVar6 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puVar6 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)puVar6 + -1) = cVar1 + -1;
      return this;
    }
    FUN_100c8ce6((undefined *)((int)puVar6 + -1));
  }
  return this;
}

