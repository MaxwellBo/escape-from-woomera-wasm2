
void __cdecl FUN_10043420(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *this;
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_100581f9;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_100422b0(param_1,param_2,0,DAT_10064d2c);
    this = param_1 + 0x10;
    local_4 = CONCAT31(local_4._1_3_,1);
    *this = param_2[0x10];
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar4 = *(uint *)(param_2 + 0x18);
    uVar5 = uVar4;
    if (DAT_10064d2c < uVar4) {
      uVar5 = DAT_10064d2c;
    }
    if (this == param_2 + 0x10) {
      FUN_100427e0(this,uVar5,DAT_10064d2c);
      FUN_100427e0(this,0,0);
      ExceptionList = local_c;
      return;
    }
    if ((uVar5 != 0) && (uVar5 == uVar4)) {
      puVar2 = *(undefined4 **)(param_2 + 0x14);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_10064d30;
      }
      if (*(byte *)((int)puVar2 + -1) < 0xfe) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        puVar2 = *(undefined4 **)(param_2 + 0x14);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = &DAT_10064d30;
        }
        *(undefined4 **)(param_1 + 0x14) = puVar2;
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        *(char *)((int)puVar2 + -1) = *(char *)((int)puVar2 + -1) + '\x01';
        ExceptionList = local_c;
        return;
      }
    }
    uVar3 = FUN_100429c0(this,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      puVar2 = &DAT_10064d30;
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
      FUN_100429a0(this,uVar5);
    }
  }
  ExceptionList = local_c;
  return;
}

