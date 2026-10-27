
void __fastcall FUN_1008acc0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float unaff_ESI;
  longlong lVar3;
  float unaff_retaddr;
  
  pfVar1 = (float *)(param_1 + param_1[0x9c] * 4 + 0x7b);
  FUN_10060260(param_1,*pfVar1,pfVar1[1],pfVar1[2]);
  iVar2 = *param_1;
  lVar3 = __ftol();
  (**(code **)(iVar2 + 0x128))((int)lVar3);
  FUN_100af200(param_1[1] + 0x50);
  iVar2 = (*DAT_10121f70)(0,7);
  if (iVar2 == 1) {
    iVar2 = (*DAT_10121e74)(*(undefined4 *)(param_1[1] + 0x208),*(undefined4 *)(param_1[1] + 0xac),
                            0x40800000,0);
    if (iVar2 == 0) {
      FUN_1008ab00(param_1,param_1[0xc5]);
    }
  }
  (*DAT_10121e74)(*(undefined4 *)(param_1[1] + 0x208),*(undefined4 *)(param_1[1] + 0xac),
                  unaff_retaddr * (float)param_1[0x33],0);
  if (unaff_ESI <= unaff_retaddr * (float)param_1[0x33]) {
    (**(code **)(*param_1 + 0x1a8))(1);
    iVar2 = (*DAT_10121e44)(*(undefined4 *)(param_1[1] + 0x208));
    param_1[0xc2] = (int)(float)iVar2;
    param_1[0xc5] = (param_1[0xc5] != 4) - 1 & 5;
  }
  iVar2 = (*DAT_10121f70)(0,0x95);
  if (((iVar2 == 1) && (param_1[0xc5] != 3)) && (param_1[0xc5] != 4)) {
    FUN_1008ab00(param_1,0);
  }
  return;
}

