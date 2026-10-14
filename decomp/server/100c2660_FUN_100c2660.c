
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100c2660(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *this;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_5c [2];
  int iStack_54;
  undefined1 local_50 [80];
  
  FUN_100dae51();
  if (*(int *)((int)&iStack_54 + *(int *)(local_5c[0] + 4)) != 0) {
    FUN_100db020((int)local_50);
    FUN_100dac95((undefined4 *)local_50);
    return 0;
  }
  uVar3 = 0xffffffff;
  DAT_10132464 = 0;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar3 - 1;
  uVar3 = FUN_100bcd20();
  if (uVar3 < uVar4) {
    FUN_100d9d61();
  }
  if (((DAT_10132454 == (char *)0x0) || (cVar1 = DAT_10132454[-1], cVar1 == '\0')) || (cVar1 == -1))
  {
    if (uVar4 == 0) {
      FUN_100bacf0(&DAT_10132450,'\x01');
      goto LAB_100c2759;
    }
    if ((0x1f < DAT_1013245c) || (DAT_1013245c < uVar4)) {
      FUN_100bacf0(&DAT_10132450,'\x01');
      goto LAB_100c2728;
    }
  }
  else {
    if (uVar4 == 0) {
      DAT_10132454[-1] = cVar1 + -1;
      FUN_100bacf0(&DAT_10132450,'\0');
      goto LAB_100c2759;
    }
LAB_100c2728:
    FUN_100bcd30(uVar4);
  }
  pcVar5 = DAT_10132454;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *param_1;
    param_1 = param_1 + 1;
    pcVar5 = pcVar5 + 1;
  }
  _DAT_10132458 = uVar4;
  DAT_10132454[uVar4] = '\0';
LAB_100c2759:
  this = operator_new(0x74);
  if (this == (void *)0x0) {
    DAT_10132468 = 0;
  }
  else {
    DAT_10132468 = FUN_100c1dc0(this,local_5c,0);
  }
  FUN_100be970();
  uVar2 = DAT_10132460;
  FUN_100db020((int)local_50);
  FUN_100dac95((undefined4 *)local_50);
  return uVar2;
}

