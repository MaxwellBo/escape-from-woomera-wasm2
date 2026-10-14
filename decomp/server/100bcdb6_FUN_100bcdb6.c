
void FUN_100bcdb6(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar5 = *(uint *)(unaff_EBX + 8);
  if (uVar5 != 0) {
    if (unaff_ESI < uVar5) {
      uVar5 = unaff_ESI;
    }
    puVar6 = *(undefined4 **)(unaff_EBX + 4);
    puVar7 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 1);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    unaff_ESI = *(uint *)(unaff_EBP + -0x1c);
  }
  uVar5 = *(uint *)(unaff_EBX + 8);
  if (*(int *)(unaff_EBX + 4) != 0) {
    pcVar1 = (char *)(*(int *)(unaff_EBX + 4) + -1);
    cVar2 = *pcVar1;
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_100c8ce6(pcVar1);
    }
    else {
      *pcVar1 = cVar2 + -1;
    }
  }
  *(undefined4 *)(unaff_EBX + 8) = 0;
  puVar3 = *(undefined1 **)(unaff_EBP + -0x18);
  *(undefined1 **)(unaff_EBX + 4) = puVar3 + 1;
  *puVar3 = 0;
  *(uint *)(unaff_EBX + 0xc) = unaff_ESI;
  if (uVar5 <= unaff_ESI) {
    unaff_ESI = uVar5;
  }
  *(uint *)(unaff_EBX + 8) = unaff_ESI;
  *(undefined1 *)(*(int *)(unaff_EBX + 4) + unaff_ESI) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

