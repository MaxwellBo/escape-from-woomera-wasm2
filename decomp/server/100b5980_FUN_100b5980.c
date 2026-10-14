
void __thiscall FUN_100b5980(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  
  piVar2 = FUN_100c8dda(0x68,1);
  piVar2[0x19] = *(int *)this;
  *(int **)this = piVar2;
  uVar3 = 0xffffffff;
  pcVar6 = (char *)(*(int *)(DAT_10122044 + 0x98) + param_1);
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  piVar5 = (int *)(pcVar7 + -uVar3);
  piVar8 = piVar2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar8 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar8 = piVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)piVar8 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar8 = (int *)((int)piVar8 + 1);
  }
  uVar3 = 0xffffffff;
  pcVar6 = (char *)(*(int *)(DAT_10122044 + 0x98) + param_2);
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  piVar5 = (int *)(pcVar7 + -uVar3);
  piVar8 = piVar2 + 0x10;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar8 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar8 = piVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)piVar8 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar8 = (int *)((int)piVar8 + 1);
  }
  piVar2[0x18] = param_3;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}

