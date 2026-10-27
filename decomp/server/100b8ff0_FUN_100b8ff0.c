
void FUN_100b8ff0(void)

{
  char cVar1;
  HANDLE hFindFile;
  undefined4 *puVar2;
  undefined1 *puVar3;
  LPCSTR lpFileName;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  _WIN32_FIND_DATAA *p_Var9;
  CHAR *pCVar10;
  char *pcVar11;
  int *piVar12;
  undefined1 uStack_2dd;
  undefined1 auStack_2dc [4];
  int iStack_2d8;
  undefined1 uStack_2c9;
  HANDLE pvStack_2c8;
  char acStack_2c4 [4];
  int iStack_2c0;
  undefined1 auStack_2bc [16];
  char acStack_2ac [4];
  undefined4 uStack_2a8;
  undefined1 auStack_2a4 [16];
  undefined1 auStack_294 [16];
  undefined1 auStack_284 [4];
  char *pcStack_280;
  undefined1 auStack_274 [4];
  LPCSTR pCStack_270;
  undefined1 auStack_264 [16];
  undefined1 auStack_254 [16];
  char local_244 [260];
  _WIN32_FIND_DATAA _Stack_140;
  
  (*DAT_10121f94)(local_244);
  FUN_100bb360(&DAT_101323f8,DAT_101323fc,DAT_10132400);
  piVar12 = DAT_1013242c;
  puVar2 = (undefined4 *)FUN_100bb5a0(&DAT_10132428,&pvStack_2c8);
  FUN_100bb5b0(&DAT_10132428,(undefined4 *)acStack_2c4,(int *)*puVar2,piVar12);
  piVar12 = DAT_1013240c;
  puVar2 = (undefined4 *)FUN_100bb760(&DAT_10132408,(undefined4 *)acStack_2c4);
  FUN_100bb770(&DAT_10132408,&pvStack_2c8,(int *)*puVar2,piVar12);
  auStack_2dc[0] = uStack_2dd;
  FUN_100bacf0(auStack_2dc,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = local_244;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_100bba70(auStack_2dc,(undefined4 *)local_244,~uVar6 - 1);
  puVar3 = FUN_100ba1f0(auStack_294,auStack_2dc);
  uVar6 = 0xffffffff;
  pcVar8 = s__Conversations___txt_1011c3e4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  puVar3 = FUN_100be420(puVar3,(undefined4 *)s__Conversations___txt_1011c3e4,~uVar6 - 1);
  FUN_100ba1f0(auStack_274,puVar3);
  FUN_100bacf0(auStack_294,'\x01');
  FUN_100bacf0(auStack_2dc,'\x01');
  p_Var9 = &_Stack_140;
  for (iVar7 = 0x50; iVar7 != 0; iVar7 = iVar7 + -1) {
    p_Var9->dwFileAttributes = 0;
    p_Var9 = (_WIN32_FIND_DATAA *)&p_Var9->ftCreationTime;
  }
  lpFileName = pCStack_270;
  if (pCStack_270 == (LPCSTR)0x0) {
    lpFileName = "";
  }
  pvStack_2c8 = FindFirstFileA(lpFileName,&_Stack_140);
  if (pvStack_2c8 != (HANDLE)0x0) {
    do {
      auStack_2a4[0] = uStack_2dd;
      FUN_100bacf0(auStack_2a4,'\0');
      uVar6 = 0xffffffff;
      pcVar8 = local_244;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_100bba70(auStack_2a4,(undefined4 *)local_244,~uVar6 - 1);
      puVar3 = FUN_100ba1f0(auStack_264,auStack_2a4);
      uVar6 = 0xffffffff;
      pcVar8 = s__Conversations__1011c3d4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      puVar3 = FUN_100be420(puVar3,(undefined4 *)s__Conversations__1011c3d4,~uVar6 - 1);
      FUN_100ba1f0(auStack_294,puVar3);
      FUN_100bacf0(auStack_264,'\x01');
      puVar3 = FUN_100ba1f0(auStack_254,auStack_294);
      uVar6 = 0xffffffff;
      pCVar10 = _Stack_140.cFileName;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pCVar10;
        pCVar10 = pCVar10 + 1;
      } while (cVar1 != '\0');
      puVar3 = FUN_100be420(puVar3,(undefined4 *)_Stack_140.cFileName,~uVar6 - 1);
      FUN_100ba1f0(auStack_284,puVar3);
      FUN_100bacf0(auStack_254,'\x01');
      FUN_100bacf0(auStack_294,'\x01');
      FUN_100bacf0(auStack_2a4,'\x01');
      pcVar8 = pcStack_280;
      if (pcStack_280 == (char *)0x0) {
        pcVar8 = "";
      }
      FUN_100ba1d0(auStack_2bc,&uStack_2dd);
      acStack_2ac[0] = '\0';
      uStack_2a8 = 0;
      FUN_100ba310(auStack_2dc,pcVar8,&uStack_2c9);
      uVar6 = 0xffffffff;
      pcVar11 = &DAT_1011c3d0;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar6 = FUN_100bac00(auStack_2dc,&DAT_1011c3d0,DAT_100f7054,~uVar6 - 1);
      if (uVar6 != DAT_100f7054) {
        FUN_100bac70(auStack_2dc);
        iVar7 = iStack_2d8;
        FUN_100bac70(auStack_2dc);
        FUN_100ba3d0(auStack_2dc,iStack_2d8,iVar7 + 1 + uVar6);
      }
      uVar6 = 0xffffffff;
      pcVar11 = &DAT_1011c3cc;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar6 = FUN_100baba0(auStack_2dc,&DAT_1011c3cc,0,~uVar6 - 1);
      if (uVar6 != DAT_100f7054) {
        FUN_100bac70(auStack_2dc);
        iVar7 = iStack_2d8;
        uVar4 = FUN_100ba4c0(auStack_2dc);
        FUN_100ba3d0(auStack_2dc,iVar7 + uVar6,uVar4);
      }
      FUN_100ba9a0(auStack_2bc,auStack_2dc,0,DAT_100f7054);
      iStack_2c0 = FUN_100c2660(pcVar8);
      acStack_2c4[0] = iStack_2c0 != 0;
      FUN_100ba550(acStack_2ac,acStack_2c4);
      FUN_100ba6b0(acStack_2c4);
      FUN_100bacf0(auStack_2dc,'\x01');
      FUN_100bb180(&DAT_101323f8,(undefined1 *)DAT_10132400,auStack_2bc);
      FUN_100ba6b0(acStack_2ac);
      FUN_100bacf0(auStack_2bc,'\x01');
      hFindFile = pvStack_2c8;
      BVar5 = FindNextFileA(pvStack_2c8,&_Stack_140);
      if (BVar5 == 0) goto LAB_100b9381;
      FUN_100bacf0(auStack_284,'\x01');
    } while( true );
  }
LAB_100b938f:
  FUN_100c3500(s_ESCAPE_1011c3c4,1);
  FUN_100c3500(s_GREET_1011c3bc,1);
  FUN_100c3500(s_GOODBYE_1011c3b4,1);
  FUN_100b86b0();
  if (pCStack_270 != (LPCSTR)0x0) {
    cVar1 = pCStack_270[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      pCStack_270[-1] = cVar1 + -1;
      return;
    }
    FUN_100c8ce6(pCStack_270 + -1);
  }
  return;
LAB_100b9381:
  FUN_100bacf0(auStack_284,'\x01');
  FindClose(hFindFile);
  goto LAB_100b938f;
}

