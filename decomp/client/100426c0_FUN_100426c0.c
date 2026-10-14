
undefined1 * __thiscall FUN_100426c0(void *this,undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_100581b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar4 = *(uint *)(param_1 + 8);
  uVar5 = uVar4;
  if (DAT_10064d2c < uVar4) {
    uVar5 = DAT_10064d2c;
  }
  if (this == param_1) {
    FUN_100427e0(this,uVar5,DAT_10064d2c);
    FUN_100427e0(this,0,0);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == uVar4)) {
      puVar2 = *(undefined4 **)(param_1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_10064d30;
      }
      if (*(byte *)((int)puVar2 + -1) < 0xfe) {
        FUN_100424b0(this,'\x01');
        puVar2 = *(undefined4 **)(param_1 + 4);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = &DAT_10064d30;
        }
        *(undefined4 **)((int)this + 4) = puVar2;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(char *)((int)puVar2 + -1) = *(char *)((int)puVar2 + -1) + '\x01';
        goto LAB_1004279a;
      }
    }
    uVar3 = FUN_100429c0(this,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      puVar2 = *(undefined4 **)(param_1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_10064d30;
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
      FUN_100429a0(this,uVar5);
    }
  }
LAB_1004279a:
  local_4 = 0;
  uVar1 = *param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_100422b0((undefined1 *)((int)this + 0x10),param_2,0,DAT_10064d2c);
  ExceptionList = local_c;
  return this;
}

