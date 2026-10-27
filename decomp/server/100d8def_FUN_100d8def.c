
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d8def(void)

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
  
  FUN_100cf6a6(0xc);
  DAT_10121a40 = 0xffffffff;
  DAT_10121a30 = 0xffffffff;
  DAT_10134c30 = 0;
  _Str1 = (uint *)FUN_100d95d5("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_100cf707(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10134c38);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_1012199c = (void *)(DAT_10134c38 * 0x3c);
    DAT_10134c30 = 1;
    if (DAT_10134c7e != 0) {
      DAT_1012199c = (void *)((int)DAT_1012199c + DAT_10134c8c * 0x3c);
    }
    if ((DAT_10134cd2 == 0) || (DAT_10134ce0 == 0)) {
      DAT_101219a0 = 0;
      _DAT_101219a4 = 0;
    }
    else {
      DAT_101219a0 = 1;
      _DAT_101219a4 = (DAT_10134ce0 - DAT_10134c8c) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_10134a70,0x220,(LPCWSTR)&DAT_10134c3c,-1,PTR_DAT_10121a28,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_10121a28 = 0;
    }
    else {
      PTR_DAT_10121a28[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_10134a70,0x220,(LPCWSTR)&DAT_10134c90,-1,PTR_DAT_10121a2c,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_10121a2c[0x3f] = 0;
      return;
    }
LAB_100d9060:
    *PTR_DAT_10121a2c = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_10134ce4 == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_10134ce4), iVar4 != 0)))) {
      FUN_100c8cf1((undefined *)DAT_10134ce4);
      sVar5 = _strlen((char *)_Str1);
      DAT_10134ce4 = _malloc(sVar5 + 1);
      if (DAT_10134ce4 != (uint *)0x0) {
        FUN_100d2d10(DAT_10134ce4,_Str1);
        FUN_100cf707(0xc);
        _strncpy(PTR_DAT_10121a28,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_10121a28[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_100c82fd(this,(byte *)_Source);
        DAT_1012199c = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_100c82fd(DAT_1012199c,(byte *)_Source);
          DAT_1012199c = (void *)((int)DAT_1012199c + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_100c82fd(DAT_1012199c,(byte *)_Source);
            DAT_1012199c = (void *)((int)DAT_1012199c + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_1012199c = (void *)-(int)DAT_1012199c;
        }
        DAT_101219a0 = (int)(char)*_Source;
        if (DAT_101219a0 != 0) {
          _strncpy(PTR_DAT_10121a2c,(char *)_Source,3);
          PTR_DAT_10121a2c[3] = 0;
          return;
        }
        goto LAB_100d9060;
      }
    }
    FUN_100cf707(0xc);
  }
  return;
}

