
void __cdecl FUN_1004aca2(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_100bca58._2_2_) {
    if (local_24.wHour == (WORD)DAT_100bca58) {
      if (local_24.wDay == DAT_100bca54._2_2_) {
        if (local_24.wMonth == DAT_100bca50._2_2_) {
          if (local_24.wYear == (WORD)DAT_100bca50) goto LAB_1004ad4c;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_100bca48 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_100bca48 = 1;
  }
  else {
    DAT_100bca48 = 0;
  }
  DAT_100bca50._0_2_ = local_24.wYear;
  DAT_100bca50._2_2_ = local_24.wMonth;
  DAT_100bca54._0_2_ = local_24.wDayOfWeek;
  DAT_100bca54._2_2_ = local_24.wDay;
  DAT_100bca58._0_2_ = local_24.wHour;
  DAT_100bca58._2_2_ = local_24.wMinute;
  DAT_100bca5c._0_2_ = local_24.wSecond;
  DAT_100bca5c._2_2_ = local_24.wMilliseconds;
LAB_1004ad4c:
  iVar2 = FUN_1004fe0b((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_100bca48);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}

