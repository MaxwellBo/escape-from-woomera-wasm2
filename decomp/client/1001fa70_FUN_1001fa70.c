
void FUN_1001fa70(void)

{
  int iVar1;
  byte *pbVar2;
  void *this;
  int iVar3;
  
  iVar1 = (*DAT_100a5150)();
  if (iVar1 == 0) {
    (*DAT_100a5090)(s_specmode_only_in_HLTV_mode_avail_10078ac8);
    return;
  }
  iVar1 = (*DAT_100a5088)();
  if (iVar1 < 2) {
    (*DAT_100a5090)(s_usage__specmode_<_modenumber_>_10078aa4);
    return;
  }
  iVar3 = 0;
  pbVar2 = (byte *)(*DAT_100a508c)(1);
  iVar1 = FUN_100499e5(this,pbVar2);
  FUN_10020530(&DAT_100a4118,iVar1,iVar3);
  return;
}

