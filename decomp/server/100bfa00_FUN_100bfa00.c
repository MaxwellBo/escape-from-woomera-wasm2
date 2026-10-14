
void FUN_100bfa00(undefined4 param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  uVar3 = 0xffffffff;
  pcVar6 = (char *)0x1011c424;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_100d9d61();
  }
  iVar2 = *(int *)((int)param_3 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_100bacf0(param_3,'\x01');
      return;
    }
    if ((*(uint *)((int)param_3 + 0xc) < 0x20) && (uVar3 <= *(uint *)((int)param_3 + 0xc)))
    goto LAB_100bfa7e;
    FUN_100bacf0(param_3,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)((int)param_3 + 4) = 0;
    *(undefined4 *)((int)param_3 + 8) = 0;
    *(undefined4 *)((int)param_3 + 0xc) = 0;
    return;
  }
  FUN_100bcd30(uVar3);
LAB_100bfa7e:
  puVar5 = (undefined4 *)0x1011c424;
  puVar7 = *(undefined4 **)((int)param_3 + 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(uint *)((int)param_3 + 8) = uVar3;
  *(undefined1 *)(uVar3 + *(int *)((int)param_3 + 4)) = 0;
  return;
}

