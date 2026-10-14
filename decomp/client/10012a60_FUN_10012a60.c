
void __fastcall FUN_10012a60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x177dc) != 0) {
    iVar1 = (*DAT_100a50bc)();
    iStack_8 = 0;
    puVar5 = (undefined4 *)(param_1 + 0x34);
    do {
      puVar7 = puVar5;
      if (((((*(uint *)(param_1 + 0x24 + (iStack_8 >> 5) * 4) & 1 << ((byte)iStack_8 & 0x1f)) != 0)
           && (iVar2 = (*DAT_100a50c4)(iStack_8 + 1), iVar2 != 0)) &&
          (*(int *)(iVar1 + 700) <= *(int *)(iVar2 + 700))) &&
         (((*(byte *)(iVar2 + 0x2ec) & 0x80) == 0 && ((iVar2 != iVar1 || (DAT_100a97b0 != 0)))))) {
        puVar7 = puVar5 + 0x2ee;
        puVar6 = puVar5;
        for (iVar4 = 0x2ee; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        puVar5[0xbe] = 5;
        puVar5[0xbf] = 0xff;
        puVar5[0x15] = 0xff;
        puVar5[0xc1] = 0xe;
        puVar5[0xc4] = 0x3f800000;
        puVar5[0xb8] = 0;
        uVar3 = (*DAT_100a50e8)(*(undefined4 *)(param_1 + 0x177dc));
        puVar5[0x2e5] = uVar3;
        puVar5[0x2d7] = 0;
        puVar5[0x2d6] = 0;
        puVar5[0x2d5] = 0;
        puVar5[0xbc] = 0x3f000000;
        puVar5[0x2d3] = 0;
        puVar5[0x2d2] = 0;
        puVar5[0x2d4] = 0x42340000;
        puVar5[0x2d2] = *(float *)(iVar2 + 0xb48) + (float)puVar5[0x2d2];
        puVar5[0x2d3] = *(float *)(iVar2 + 0xb4c) + (float)puVar5[0x2d3];
        puVar5[0x2d4] = *(float *)(iVar2 + 0xb50) + (float)puVar5[0x2d4];
        (*DAT_100a50e4)(0,puVar5);
      }
      iStack_8 = iStack_8 + 1;
      puVar5 = puVar7;
    } while (iStack_8 < 0x20);
  }
  return;
}

