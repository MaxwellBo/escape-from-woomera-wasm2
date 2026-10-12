
void __cdecl FUN_100c41c0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar7 = DAT_100f7054;
    uVar3 = *(uint *)(param_2 + 8);
    uVar6 = uVar3;
    if (DAT_100f7054 < uVar3) {
      uVar6 = DAT_100f7054;
    }
    if (param_1 == param_2) {
      if (uVar6 != 0) {
        FUN_100d9f8d();
      }
      FUN_100bbc60(param_1);
      uVar3 = *(int *)(param_1 + 8) - uVar6;
      if (uVar3 < uVar7) {
        uVar7 = uVar3;
      }
      if (uVar7 != 0) {
        FUN_100c97a0((undefined4 *)(uVar6 + *(int *)(param_1 + 4)),
                     (undefined4 *)((int)(uVar6 + *(int *)(param_1 + 4)) + uVar7),uVar3 - uVar7);
        iVar2 = *(int *)(param_1 + 8);
        uVar4 = FUN_100bbb30(param_1,iVar2 - uVar7,'\0');
        if ((char)uVar4 != '\0') {
          FUN_100bbb10(param_1,iVar2 - uVar7);
        }
      }
      FUN_100bbc60(param_1);
      param_1[0x10] = param_2[0x10];
      return;
    }
    if ((uVar6 != 0) && (uVar6 == uVar3)) {
      puVar5 = *(undefined4 **)(param_2 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_100f7058;
      }
      if (*(byte *)((int)puVar5 + -1) < 0xfe) {
        FUN_100bacf0(param_1,'\x01');
        puVar5 = *(undefined4 **)(param_2 + 4);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &DAT_100f7058;
        }
        *(undefined4 **)(param_1 + 4) = puVar5;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        param_1[0x10] = param_2[0x10];
        return;
      }
    }
    uVar4 = FUN_100bbb30(param_1,uVar6,'\x01');
    if ((char)uVar4 != '\0') {
      puVar5 = *(undefined4 **)(param_2 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_100f7058;
      }
      puVar8 = *(undefined4 **)(param_1 + 4);
      for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = uVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)(param_1 + 8) = uVar6;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar6) = 0;
    }
    param_1[0x10] = param_2[0x10];
  }
  return;
}

