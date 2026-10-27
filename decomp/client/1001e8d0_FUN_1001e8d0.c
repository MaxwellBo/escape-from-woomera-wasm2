
int FUN_1001e8d0(int param_1,undefined4 param_2,int param_3,char *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  cVar2 = *param_4;
  pcVar4 = param_4;
  while (cVar2 != '\0') {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  pcVar4 = pcVar4 + -1;
  if (pcVar4 != param_4 + -1) {
    while( true ) {
      iVar3 = param_1 - *(short *)(&DAT_100a4ddc + *pcVar4 * 2);
      if (iVar3 < param_3) break;
      (*DAT_100a5058)(iVar3,param_2,(int)*pcVar4,param_5,param_6,param_7);
      pcVar4 = pcVar4 + -1;
      param_1 = iVar3;
      if (pcVar4 == param_4 + -1) {
        return iVar3;
      }
    }
  }
  return param_1;
}

