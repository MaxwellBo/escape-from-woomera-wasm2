
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10043dd0(float param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  fVar4 = (float)DAT_100a4dcc;
  iVar5 = 0;
  DAT_100baf18 = DAT_100baf18 + 1;
  FUN_1001d750(-fVar4 * param_1 + fVar4,(float)(DAT_100a4dd0 + -0xbe),fVar4,(float)DAT_100a4dd0,
               0x3e4ccccd,0x3e4ccccd,0x3e4ccccd,0x3f4ccccd,0);
  if (param_1 == _DAT_10059eb0) {
    iVar2 = 0;
    do {
      iVar5 = iVar5 + 1;
      if (9 < iVar5) {
        iVar5 = 0;
        iVar2 = iVar2 + 0xb;
      }
    } while (iVar2 < 0x37);
    lVar6 = __ftol();
    iVar2 = 0x3c;
    iVar5 = 0;
    FUN_10047670(4);
    fVar4 = 0.0;
    param_1 = 0.0;
    do {
      iVar1 = (&DAT_100a37a8)[(int)fVar4 + iVar5];
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x9c) != 0)) {
        FUN_10043a70(iVar1,iVar2,(int)lVar6);
        uVar9 = 0xff;
        uVar8 = 0xff;
        uVar7 = 0xff;
        pcVar3 = (char *)FUN_100440b0(*(int *)(iVar1 + 0x9c));
        FUN_1001e7d0(iVar2,(int)lVar6 + -0x2d,iVar2 + 0x40,pcVar3,uVar7,uVar8,uVar9);
        iVar2 = iVar2 + 0x80;
        fVar4 = param_1;
      }
      iVar5 = iVar5 + 1;
      if (9 < iVar5) {
        iVar5 = 0;
        fVar4 = (float)((int)fVar4 + 0xb);
        param_1 = fVar4;
      }
    } while ((int)fVar4 < 0x37);
  }
  return;
}

