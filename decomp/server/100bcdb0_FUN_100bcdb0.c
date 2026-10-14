
void FUN_100bcdb0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar3 = *(int *)(unaff_EBP + -0x4c);
  uVar5 = *(uint *)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar6 = *(uint *)(iVar3 + 8);
  if (uVar6 != 0) {
    if (uVar5 < uVar6) {
      uVar6 = uVar5;
    }
    puVar7 = *(undefined4 **)(iVar3 + 4);
    puVar8 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 1);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar5 = *(uint *)(unaff_EBP + -0x1c);
  }
  uVar6 = *(uint *)(iVar3 + 8);
  if (*(int *)(iVar3 + 4) != 0) {
    pcVar1 = (char *)(*(int *)(iVar3 + 4) + -1);
    cVar2 = *pcVar1;
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_100c8ce6(pcVar1);
    }
    else {
      *pcVar1 = cVar2 + -1;
    }
  }
  *(undefined4 *)(iVar3 + 8) = 0;
  puVar4 = *(undefined1 **)(unaff_EBP + -0x18);
  *(undefined1 **)(iVar3 + 4) = puVar4 + 1;
  *puVar4 = 0;
  *(uint *)(iVar3 + 0xc) = uVar5;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  *(uint *)(iVar3 + 8) = uVar5;
  *(undefined1 *)(*(int *)(iVar3 + 4) + uVar5) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

