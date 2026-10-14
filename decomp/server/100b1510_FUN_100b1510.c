
void __thiscall FUN_100b1510(void *this,byte *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  
  uVar3 = 0;
  if (0 < param_3) {
    iVar5 = param_3;
    piVar6 = param_2;
    do {
      uVar2 = 0xffffffff;
      pcVar7 = (char *)(*piVar6 + *(int *)(DAT_10122044 + 0x98));
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -1;
      uVar3 = uVar3 + ~uVar2;
    } while (iVar5 != 0);
  }
  FUN_100b1c50(this,param_1,uVar3);
  if (0 < param_3) {
    do {
      uVar3 = 0xffffffff;
      pcVar4 = (char *)(*(int *)(DAT_10122044 + 0x98) + *param_2);
      pcVar7 = pcVar4;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_100b1ca0(this,(undefined4 *)pcVar4,~uVar3);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

