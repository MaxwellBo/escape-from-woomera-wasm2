
undefined4 FUN_100229c0(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *in_stack_00001044;
  undefined4 *in_stack_00001048;
  
  FUN_1004a6a0();
  if (in_stack_00001048 == (undefined4 *)0x0) {
    return 0;
  }
  *in_stack_00001048 = 0;
  pcVar7 = &stack0x00000040;
  cVar2 = *in_stack_00001044;
  pcVar9 = extraout_ECX;
  while (cVar2 != '\0') {
    if (*in_stack_00001044 == '+') {
      cVar2 = '+';
      pcVar8 = (char *)register0x00000010;
      do {
        uVar3 = FUN_1004b266(pcVar9,(int)cVar2);
        puVar4 = extraout_ECX_00;
        if (((uVar3 == 0) && (puVar4 = (undefined1 *)register0x00000010, pcVar8 != &stack0x00000000)
            ) || (0x3e < (int)pcVar8 - (int)&stack0x00000000)) break;
        pcVar9 = (char *)CONCAT31((int3)((uint)puVar4 >> 8),*in_stack_00001044);
        cVar2 = in_stack_00001044[1];
        *pcVar8 = *in_stack_00001044;
        pcVar8 = pcVar8 + 1;
        in_stack_00001044 = in_stack_00001044 + 1;
      } while (cVar2 != '\0');
      iVar5 = -1;
      *pcVar8 = '\0';
      pcVar8 = (char *)0x0;
      pcVar9 = (char *)register0x00000010;
      do {
        pcVar9 = pcVar9 + 1;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
      } while (*pcVar9 != '\0');
      pcVar9 = (char *)register0x00000010;
      if ((iVar5 != -2) &&
         (pcVar8 = (char *)(*DAT_100a5114)(&stack0x00000001), pcVar8 != (char *)0x0)) {
        *pcVar7 = '[';
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar8;
      }
      cVar2 = *pcVar9;
      while (cVar2 != '\0') {
        *pcVar7 = cVar2;
        pcVar1 = pcVar9 + 1;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
        cVar2 = *pcVar1;
      }
      if (pcVar8 != (char *)0x0) {
        *pcVar7 = ']';
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      *pcVar7 = *in_stack_00001044;
      pcVar7 = pcVar7 + 1;
      in_stack_00001044 = in_stack_00001044 + 1;
    }
    cVar2 = *in_stack_00001044;
  }
  uVar3 = 0xffffffff;
  *pcVar7 = '\0';
  pcVar7 = &stack0x00000040;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  pcVar9 = _malloc(~uVar3);
  uVar3 = 0xffffffff;
  pcVar7 = &stack0x00000040;
  do {
    pcVar8 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar7 + 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar8 + -uVar3;
  pcVar8 = pcVar9;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *in_stack_00001048 = pcVar9;
  return 1;
}

