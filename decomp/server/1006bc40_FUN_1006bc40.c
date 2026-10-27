
int __thiscall FUN_1006bc40(void *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = param_2 + 1;
  pcVar4 = (char *)(*(int *)(*(int *)((int)this + 0xc) +
                            (param_4 + 10 + (param_3 + param_1 * 0xb) * 2) * 4) +
                   *(int *)((int)this + 0x14));
  iVar2 = param_1;
  while( true ) {
    while( true ) {
      if (iVar3 < 1) {
        return iVar2;
      }
      cVar1 = *pcVar4;
      if (cVar1 < '\0') break;
      if (cVar1 + 1 < iVar3) {
        iVar3 = iVar3 + (-1 - cVar1);
      }
      else {
        iVar3 = *(int *)((int)this + 0x18);
        iVar2 = pcVar4[1] + param_1;
        if (iVar2 < iVar3) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + iVar3;
          }
          iVar3 = 0;
        }
        else {
          iVar2 = iVar2 - iVar3;
          iVar3 = 0;
        }
      }
      pcVar4 = pcVar4 + 2;
    }
    if (iVar3 <= -cVar1) break;
    iVar3 = iVar3 - -cVar1;
    pcVar4 = pcVar4 + 1;
  }
  return param_2;
}

