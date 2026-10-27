
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10046040(int *param_1)

{
  char cVar1;
  float fVar2;
  char *pcVar3;
  float10 fVar4;
  longlong lVar5;
  longlong lVar6;
  char unaff_retaddr;
  float fStack_2c;
  float afStack_28 [2];
  undefined1 auStack_20 [4];
  char *pcStack_1c;
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_100583d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x14))(afStack_28);
  if ((((_DAT_10059a18 < fStack_2c - _DAT_10059cf8) &&
       (fStack_2c + _DAT_10059cf8 < (float)DAT_100a4dcc)) &&
      (_DAT_10059a18 < afStack_28[0] - _DAT_10059cf8)) &&
     (afStack_28[0] + _DAT_10059cf8 < (float)DAT_100a4dd0)) {
    fVar4 = FUN_10044870();
    fVar4 = (float10)fsin(fVar4 * (float10)_DAT_10064f40 * (float10)_DAT_10064f90);
    if (unaff_retaddr == '\0') {
      (**(code **)(DAT_100a5138 + 0x10))(0x3f333333,0x3f333333,0x3f333333,0x3f800000);
      fVar2 = (float)fVar4 * _DAT_10064f84 + _DAT_10064f80;
    }
    else {
      (**(code **)(DAT_100a5138 + 0x10))(0x3f800000,0x3f800000,0x3f800000);
      fVar2 = (float)fVar4 * _DAT_10064f8c + _DAT_10064f88;
    }
    FUN_10044bf0(param_1[3],&fStack_2c,fVar2 * _DAT_1005acb0,fVar2 * _DAT_1005acb0);
    if (unaff_retaddr != '\0') {
      (**(code **)(*param_1 + 4))(auStack_20);
      pcStack_8 = (code *)0x0;
      lVar5 = __ftol();
      lVar6 = __ftol();
      pcVar3 = pcStack_1c;
      if (pcStack_1c == (char *)0x0) {
        pcVar3 = "";
      }
      FUN_1001e7d0((int)lVar5,(int)lVar6,DAT_1007aec4 + (int)lVar5,pcVar3,0xff,0xff,0xff);
      if (pcStack_1c != (char *)0x0) {
        cVar1 = pcStack_1c[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          pcStack_1c[-1] = cVar1 + -1;
          ExceptionList = pvStack_10;
          return;
        }
        FUN_10049a73(pcStack_1c + -1);
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}

