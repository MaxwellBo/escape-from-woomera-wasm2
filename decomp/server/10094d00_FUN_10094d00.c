
undefined4 * __cdecl
FUN_10094d00(int param_1,int param_2,int *param_3,undefined4 *param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (((param_1 != 0) && (param_4 != (undefined4 *)0x0)) && (iVar2 = *param_3, iVar2 < param_2)) {
    if (param_5 + -1 < param_2 - iVar2) {
      param_2 = iVar2 + -1 + param_5;
    }
    bVar8 = false;
    iVar5 = iVar2;
    while ((iVar5 < param_2 && (!bVar8))) {
      pcVar1 = (char *)(iVar5 + param_1);
      iVar5 = iVar5 + 1;
      bVar8 = *pcVar1 == '\n';
    }
    if (iVar5 != iVar2) {
      uVar4 = iVar5 - iVar2;
      puVar6 = (undefined4 *)(iVar2 + param_1);
      puVar7 = param_4;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      if ((int)uVar4 < param_5) {
        *(undefined1 *)(uVar4 + (int)param_4) = 0;
      }
      *param_3 = iVar5;
      return param_4;
    }
  }
  return (undefined4 *)0x0;
}

