
void __thiscall FUN_10037d50(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  int iStack_20c;
  int iStack_208;
  char cStack_204;
  char acStack_203 [3];
  undefined4 auStack_200 [128];
  
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = (char *)auStack_200;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = (char *)auStack_200;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  while (uVar3 - 1 != 0) {
    uVar4 = FUN_1004b23e((void *)(int)acStack_203[uVar3 + 1],(int)acStack_203[uVar3 + 1]);
    if (uVar4 == 0) break;
    acStack_203[uVar3 + 1] = '\0';
    uVar3 = uVar3 - 1;
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0xd0) + 0x24) + 0x70))(auStack_200);
  piVar2 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0xd0) + 0x24) + 0x6c))();
  *(undefined4 *)(param_1 + 0xd8) = 0;
  pcVar5 = &cStack_204;
  while (cStack_204 != '\0') {
    (**(code **)(*piVar2 + 8))((int)cStack_204,&stack0xfffffdf0,&iStack_208,&iStack_20c);
    pcVar5 = pcVar5 + 1;
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + unaff_EBX + iStack_208 + iStack_20c;
    cStack_204 = *pcVar5;
  }
  lVar7 = __ftol();
  *(int *)(param_1 + 0xd8) = (int)lVar7;
  return;
}

