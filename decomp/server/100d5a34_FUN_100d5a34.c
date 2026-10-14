
void __cdecl FUN_100d5a34(byte *param_1)

{
  int iVar1;
  undefined *extraout_ECX;
  undefined4 uVar2;
  undefined *this;
  byte local_c [8];
  
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    this = &DAT_100fa224;
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 != 0) goto LAB_100d5a90;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_10134bf0)(DAT_10134bec,uVar2,local_c,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_c;
  this = extraout_ECX;
LAB_100d5a90:
  FUN_100c82fd(this,param_1);
  return;
}

