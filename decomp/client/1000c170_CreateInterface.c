
undefined4 __cdecl CreateInterface(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  puVar2 = DAT_100873cc;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      return 0;
    }
    pbVar3 = (byte *)puVar2[1];
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_1000c1af:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_1000c1b4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_1000c1af;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_1000c1b4:
    if (iVar4 == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      uVar5 = (*(code *)*puVar2)();
      return uVar5;
    }
    puVar2 = (undefined4 *)puVar2[2];
  } while( true );
}

