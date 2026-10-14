
undefined4 __cdecl FUN_100348c0(undefined4 param_1)

{
  BitmapTGA *this;
  undefined4 uVar1;
  undefined **local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10057b1b;
  pvStack_c = ExceptionList;
  uVar1 = 0;
  local_1c = &PTR_FUN_1006204c;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  ExceptionList = &pvStack_c;
  local_18 = (*DAT_100a512c)(param_1,5,&local_14);
  if (local_18 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  local_10 = 0;
  this = operator_new(0x30);
  uStack_4 = 0;
  if (this != (BitmapTGA *)0x0) {
    uVar1 = vgui::BitmapTGA::BitmapTGA(this,(InputStream *)&local_1c,true);
  }
  uStack_4 = 0xffffffff;
  (*DAT_100a5134)(local_18);
  ExceptionList = pvStack_c;
  return uVar1;
}

