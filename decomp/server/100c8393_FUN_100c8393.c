
undefined8 __thiscall FUN_100c8393(undefined1 *param_1,byte *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  while( true ) {
    if (DAT_1011e234 < 2) {
      uVar2 = (byte)PTR_DAT_1011e028[(uint)*param_2 * 2] & 8;
      param_1 = PTR_DAT_1011e028;
    }
    else {
      puVar10 = &DAT_00000008;
      uVar2 = FUN_100c939e(param_1,(uint)*param_2,8);
      param_1 = puVar10;
    }
    if (uVar2 == 0) break;
    param_2 = param_2 + 1;
  }
  uVar2 = (uint)*param_2;
  pbVar7 = param_2 + 1;
  if ((uVar2 == 0x2d) || (uVar6 = uVar2, uVar2 == 0x2b)) {
    uVar6 = (uint)*pbVar7;
    pbVar7 = param_2 + 2;
  }
  uVar5 = 0;
  uVar1 = ZEXT48(param_1);
  while( true ) {
    iVar4 = (int)(uVar1 >> 0x20);
    if (DAT_1011e234 < 2) {
      uVar3 = (byte)PTR_DAT_1011e028[uVar6 * 2] & 4;
    }
    else {
      uVar3 = FUN_100c939e((void *)uVar1,uVar6,4);
    }
    if (uVar3 == 0) break;
    lVar9 = __allmul(uVar5,iVar4,10,0);
    uVar1 = lVar9 + (int)(uVar6 - 0x30);
    uVar5 = (uint)uVar1;
    uVar6 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
  }
  if (uVar2 == 0x2d) {
    bVar8 = uVar5 != 0;
    uVar5 = -uVar5;
    iVar4 = -(iVar4 + (uint)bVar8);
  }
  return CONCAT44(iVar4,uVar5);
}

