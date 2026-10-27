
void __cdecl FUN_100afcf0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar10 = DAT_10122044;
  lVar11 = __ftol();
  lVar12 = __ftol();
  lVar13 = __ftol();
  lVar14 = __ftol();
  uVar1 = *(undefined4 *)(iVar10 + 0x74);
  uVar2 = *(undefined4 *)(iVar10 + 0x70);
  uVar3 = *(undefined4 *)(iVar10 + 0x58);
  uVar4 = *(undefined4 *)(iVar10 + 0x5c);
  uVar5 = *(undefined4 *)(iVar10 + 0x60);
  uVar6 = *(undefined4 *)(iVar10 + 0x80);
  uVar7 = *(undefined4 *)(iVar10 + 100);
  uVar8 = *(undefined4 *)(iVar10 + 0x68);
  uVar9 = *(undefined4 *)(iVar10 + 0x6c);
  param_1[4] = *(undefined4 *)(iVar10 + 0x54);
  param_1[3] = (int)lVar14;
  *param_1 = (int)lVar11;
  param_1[1] = (int)lVar12;
  param_1[2] = (int)lVar13;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar2;
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  param_1[0xb] = uVar9;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar1;
  return;
}

