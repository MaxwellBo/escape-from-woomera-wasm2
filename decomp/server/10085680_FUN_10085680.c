
undefined4 FUN_10085680(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_stack_00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 *in_stack_00000048;
  
  iVar1 = 0;
  iVar2 = *(int *)(DAT_10126a38 + 0x4548c);
  if (0 < iVar2) {
    piVar3 = (int *)(DAT_10126a38 + 0x454c0);
    do {
      if (*piVar3 == in_stack_00000034) break;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x11;
    } while (iVar1 < iVar2);
  }
  if (iVar1 != iVar2) {
    return 0;
  }
  uStack00000038 = *in_stack_00000048;
  uStack0000003c = in_stack_00000048[1];
  uStack00000040 = in_stack_00000048[2];
  if (599 < iVar2) {
    (**(code **)(DAT_10126a38 + 0x4f564))(s_Too_many_entities_were_touched__10115298);
  }
  puVar4 = (undefined4 *)(DAT_10126a38 + 0x45490 + *(int *)(DAT_10126a38 + 0x4548c) * 0x44);
  for (iVar2 = 0x11; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)register0x00000010;
    puVar4 = puVar4 + 1;
  }
  *(int *)(DAT_10126a38 + 0x4548c) = *(int *)(DAT_10126a38 + 0x4548c) + 1;
  return 1;
}

