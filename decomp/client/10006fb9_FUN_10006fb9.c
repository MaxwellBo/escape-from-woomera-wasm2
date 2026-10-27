
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10006fb9(int param_1,undefined2 param_2)

{
  uint uVar1;
  undefined4 in_EAX;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  char unaff_BL;
  uint *unaff_ESI;
  undefined1 *unaff_EDI;
  undefined4 *puVar8;
  
  uVar1 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI >> 1;
  pcVar2 = (char *)CONCAT22((short)((uint)in_EAX >> 0x10),
                            CONCAT11((char)((uint)in_EAX >> 8) + unaff_BL + ((uVar1 & 1) != 0),
                                     (char)in_EAX));
  out((char)*unaff_ESI,param_2);
  cVar7 = (char)param_2;
  *pcVar2 = *pcVar2 + cVar7;
  out(0x6e,pcVar2);
  *pcVar2 = *pcVar2 + cVar7;
  while (unaff_ESI = (uint *)((int)unaff_ESI + 1), param_1 != 0) {
    param_1 = param_1 + -1;
    out(*(undefined1 *)unaff_ESI,param_2);
  }
  *pcVar2 = *pcVar2 + cVar7;
  out(*(undefined1 *)unaff_ESI,param_2);
  *pcVar2 = *pcVar2 + cVar7;
  *unaff_EDI = *unaff_EDI;
  pcVar2[-0x6f6f6f70] = pcVar2[-0x6f6f6f70] + cVar7;
  _DAT_00000000 = 0;
  _DAT_00000004 = 0;
  _DAT_00000008 = (undefined4 *)0x0;
  uVar1 = 1;
  do {
    uVar6 = uVar1;
    uVar1 = uVar6 * 2;
  } while ((int)uVar1 < 4);
  puVar3 = operator_new(uVar1);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_10049aab(0);
  }
  puVar8 = puVar3;
  for (uVar6 = (uVar6 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + -1;
  }
  for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + -1);
  }
  iVar4 = 0;
  _DAT_00000004 = uVar1;
  if (0 < _DAT_00000000) {
    do {
      iVar5 = iVar4 + 1;
      *(undefined1 *)(iVar4 + (int)puVar3) = *(undefined1 *)((int)_DAT_00000008 + iVar4);
      iVar4 = iVar5;
    } while (iVar5 < _DAT_00000000);
  }
  FUN_10049a73((undefined *)_DAT_00000008);
  _DAT_00000008 = puVar3;
  return 0;
}

