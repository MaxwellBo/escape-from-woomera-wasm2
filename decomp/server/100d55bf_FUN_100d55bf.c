
void FUN_100d55bf(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_10134be0);
  DAT_10134bdc = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_10134be4);
  DAT_10134bd4 = (uint)(sVar1 == 3);
  DAT_10134bd0 = 0;
  if (DAT_10134bdc == 0) {
    DAT_10134bd8 = FUN_100d5c70(DAT_10134be0);
  }
  else {
    DAT_10134bd8 = 2;
  }
  EnumSystemLocalesA(FUN_100d5646,1);
  if ((((DAT_10134be8 & 0x100) == 0) || ((DAT_10134be8 & 0x200) == 0)) || ((DAT_10134be8 & 7) == 0))
  {
    DAT_10134be8 = 0;
  }
  return;
}

