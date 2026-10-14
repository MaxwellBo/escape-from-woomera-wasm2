
void __fastcall FUN_10055ce0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  longlong lVar3;
  
  fVar2 = (float10)(*DAT_10121f74)(0x40400000,0x40c00000);
  param_1[0xcc] = (int)(float)(fVar2 + (float10)*DAT_10122044);
  if (param_1[0x76] == 2) {
    FUN_10019420(param_1 + 0x58,0);
    FUN_10062000(param_1,1);
    param_1[0xca] = 0;
    return;
  }
  iVar1 = *param_1;
  lVar3 = __ftol();
  (**(code **)(iVar1 + 0x11c))((int)lVar3);
  iVar1 = (**(code **)(*param_1 + 0x144))();
  if (((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 4) + 0x1c0) != 0)) &&
     (*(int *)(*(int *)(iVar1 + 4) + 0x1c4) != -0x13)) {
    FUN_10019420(param_1 + 0x58,iVar1);
    FUN_10062000(param_1,2);
    fVar2 = (float10)(*DAT_10121f74)(0x41900000,0x41c80000);
    param_1[0xcc] = (int)(float)(fVar2 + (float10)*DAT_10122044);
    (**(code **)(*param_1 + 0x21c))();
  }
  return;
}

