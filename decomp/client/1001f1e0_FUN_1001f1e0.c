
void __thiscall FUN_1001f1e0(void *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (*(int *)((int)this + 0x418) != 0) {
    uVar5 = 0xffffffff;
    puVar8 = (undefined4 *)0x0;
    do {
      pcVar9 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar9 + -uVar5;
    pcVar10 = (char *)&DAT_100a95cc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    for (puVar2 = *(undefined4 **)((int)this + 0x418); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    piVar3 = operator_new((int)puVar8 * 4);
    piVar4 = piVar3;
    for (uVar5 = (uint)puVar8 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)piVar4 = 0;
      piVar4 = (int *)((int)piVar4 + 1);
    }
    piVar4 = piVar3;
    for (puVar2 = *(undefined4 **)((int)this + 0x418); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      *piVar4 = (int)puVar2;
      piVar4 = piVar4 + 1;
    }
    FUN_1004b070(piVar3,puVar8,4,FUN_1001f1c0);
    iVar7 = (int)puVar8 + -1;
    *(int *)((int)this + 0x418) = *piVar3;
    piVar4 = piVar3;
    if (0 < iVar7) {
      do {
        iVar7 = iVar7 + -1;
        *(int *)*piVar4 = piVar4[1];
        piVar4 = piVar4 + 1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)piVar3[(int)puVar8 + -1] = 0;
    FUN_10049a73((undefined *)piVar3);
  }
  return;
}

