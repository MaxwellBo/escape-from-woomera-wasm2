
void FUN_1001e7d0(int param_1,int param_2,int param_3,char *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_4;
  iVar1 = param_1;
  if (cVar2 == '\0') {
    DAT_100a95a8 = param_2 + 0xf;
    return;
  }
  do {
    if (cVar2 == '\n') {
      param_2 = param_2 + 0xf;
      iVar3 = param_1;
    }
    else {
      iVar3 = *(short *)(&DAT_100a4ddc + cVar2 * 2) + iVar1;
      (*DAT_100a5058)(iVar1,param_2,(int)cVar2,param_5,param_6,param_7);
      if (((*param_4 == ' ') && (param_3 + -100 < iVar3)) || (param_3 < iVar3)) {
        param_2 = param_2 + 0xf;
        iVar3 = (DAT_100a95b4 & 0xff) + param_1;
      }
    }
    cVar2 = param_4[1];
    param_4 = param_4 + 1;
    iVar1 = iVar3;
  } while (cVar2 != '\0');
  DAT_100a95a8 = param_2 + 0xf;
  return;
}

