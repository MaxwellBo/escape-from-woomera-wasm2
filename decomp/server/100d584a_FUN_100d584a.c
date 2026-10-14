
void FUN_100d584a(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_10134be0);
  DAT_10134bdc = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_10134bd8 = 2;
  }
  else {
    DAT_10134bd8 = FUN_100d5c70(DAT_10134be0);
  }
  EnumSystemLocalesA(FUN_100d58a0,1);
  if ((DAT_10134be8 & 4) == 0) {
    DAT_10134be8 = 0;
  }
  return;
}

