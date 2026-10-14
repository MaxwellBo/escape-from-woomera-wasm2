
void FUN_10066710(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *_Source;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_44 [4];
  char acStack_40 [60];
  undefined1 uStack_4;
  
  iVar6 = 0;
  uVar2 = (*DAT_10121ef0)(s_motdfile_10111ef0,local_44);
  pcVar3 = (char *)(*DAT_10121f84)(uVar2);
  (*DAT_10121ec0)(1,DAT_101248c4,0,param_1);
  uVar2 = (*DAT_10121ef0)(s_hostname_10111ee4);
  (*DAT_10121ee0)(uVar2);
  (*DAT_10121ec4)();
  _Source = pcVar3;
  do {
    if (((_Source == (char *)0x0) || (*_Source == '\0')) || (0x5ff < iVar6)) {
      (*DAT_10121f88)(pcVar3);
      return;
    }
    uVar4 = 0xffffffff;
    pcVar7 = _Source;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < 0x3c) {
      uVar4 = 0xffffffff;
      pcVar7 = _Source;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = acStack_40;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    else {
      _strncpy(acStack_40,_Source,0x3c);
      uStack_4 = 0;
    }
    uVar4 = 0xffffffff;
    pcVar7 = acStack_40;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = iVar6 + (~uVar4 - 1);
    if (iVar6 < 0x600) {
      _Source = pcVar3 + iVar6;
    }
    else {
      *_Source = '\0';
    }
    (*DAT_10121ec0)(1,DAT_101248c0,0,param_1);
    (*DAT_10121ec8)(*_Source == '\0');
    (*DAT_10121ee0)(acStack_40);
    (*DAT_10121ec4)();
  } while( true );
}

