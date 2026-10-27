
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054880(void)

{
  char cVar1;
  char cVar2;
  uint *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  uint *_Source;
  int local_8;
  
  FUN_1004ca8b(0xc);
  DAT_1007e760 = 0xffffffff;
  DAT_1007e750 = 0xffffffff;
  DAT_100bcc38 = 0;
  _Str1 = (uint *)FUN_10056809("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_1004caec(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_100bcc40);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_1007e6b8 = (void *)(DAT_100bcc40 * 0x3c);
    DAT_100bcc38 = 1;
    if (DAT_100bcc86 != 0) {
      DAT_1007e6b8 = (void *)((int)DAT_1007e6b8 + DAT_100bcc94 * 0x3c);
    }
    if ((DAT_100bccda == 0) || (DAT_100bcce8 == 0)) {
      DAT_1007e6bc = 0;
      _DAT_1007e6c0 = 0;
    }
    else {
      DAT_1007e6bc = 1;
      _DAT_1007e6c0 = (DAT_100bcce8 - DAT_100bcc94) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_100bcb14,0x220,(LPCWSTR)&DAT_100bcc44,-1,PTR_DAT_1007e744,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_1007e744 = 0;
    }
    else {
      PTR_DAT_1007e744[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_100bcb14,0x220,(LPCWSTR)&DAT_100bcc98,-1,PTR_DAT_1007e748,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_1007e748[0x3f] = 0;
      return;
    }
LAB_10054af1:
    *PTR_DAT_1007e748 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_100bccec == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_100bccec), iVar4 != 0)))) {
      FUN_1004ad7e((undefined *)DAT_100bccec);
      sVar5 = _strlen((char *)_Str1);
      DAT_100bccec = _malloc(sVar5 + 1);
      if (DAT_100bccec != (uint *)0x0) {
        FUN_10053680(DAT_100bccec,_Str1);
        FUN_1004caec(0xc);
        _strncpy(PTR_DAT_1007e744,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_1007e744[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_1004995a(this,(byte *)_Source);
        DAT_1007e6b8 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_1004995a(DAT_1007e6b8,(byte *)_Source);
          DAT_1007e6b8 = (void *)((int)DAT_1007e6b8 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_1004995a(DAT_1007e6b8,(byte *)_Source);
            DAT_1007e6b8 = (void *)((int)DAT_1007e6b8 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_1007e6b8 = (void *)-(int)DAT_1007e6b8;
        }
        DAT_1007e6bc = (int)(char)*_Source;
        if (DAT_1007e6bc != 0) {
          _strncpy(PTR_DAT_1007e748,(char *)_Source,3);
          PTR_DAT_1007e748[3] = 0;
          return;
        }
        goto LAB_10054af1;
      }
    }
    FUN_1004caec(0xc);
  }
  return;
}

