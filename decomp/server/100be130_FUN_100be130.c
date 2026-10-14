
void __cdecl FUN_100be130(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar5 = param_1 + 2;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined1 *)puVar5 = *(undefined1 *)(param_2 + 2);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar7 = DAT_100f7054;
    uVar2 = param_2[4];
    uVar6 = uVar2;
    if (DAT_100f7054 < uVar2) {
      uVar6 = DAT_100f7054;
    }
    if (puVar5 == param_2 + 2) {
      if (uVar6 != 0) {
        FUN_100d9f8d();
      }
      FUN_100bbc60(puVar5);
      uVar2 = param_1[4] - uVar6;
      if (uVar2 < uVar7) {
        uVar7 = uVar2;
      }
      if (uVar7 != 0) {
        FUN_100c97a0((undefined4 *)(param_1[3] + uVar6),
                     (undefined4 *)((int)(param_1[3] + uVar6) + uVar7),uVar2 - uVar7);
        iVar1 = param_1[4];
        uVar3 = FUN_100bbb30(puVar5,iVar1 - uVar7,'\0');
        if ((char)uVar3 != '\0') {
          FUN_100bbb10(puVar5,iVar1 - uVar7);
        }
      }
      FUN_100bb060(puVar5,0,0);
      return;
    }
    if ((uVar6 != 0) && (uVar6 == uVar2)) {
      puVar4 = (undefined4 *)param_2[3];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = &DAT_100f7058;
      }
      if (*(byte *)((int)puVar4 + -1) < 0xfe) {
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        puVar5 = (undefined4 *)param_2[3];
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &DAT_100f7058;
        }
        param_1[3] = puVar5;
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        return;
      }
    }
    uVar3 = FUN_100bbb30(puVar5,uVar6,'\x01');
    if ((char)uVar3 != '\0') {
      puVar4 = (undefined4 *)param_2[3];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = &DAT_100f7058;
      }
      puVar8 = (undefined4 *)param_1[3];
      for (uVar2 = uVar6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar2 = uVar6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_100bbb10(puVar5,uVar6);
    }
  }
  return;
}

