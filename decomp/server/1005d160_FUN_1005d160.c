
void __fastcall FUN_1005d160(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  if ((param_1[0x9b] == 0) && (*(int *)(param_1[1] + 0x1c8) != 0)) {
    iVar1 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1c8)));
    FUN_1005f8e0(param_1,iVar1);
  }
  (**(code **)(*param_1 + 0x120))();
  fVar2 = FUN_10007fc0((int)param_1,0.0);
  if ((((param_1[0x76] != 6) && (param_1[0x76] != 8)) && (param_1[0x73] == 1)) &&
     (param_1[0x35] != 0)) {
    if (param_1[0x36] == 0) {
      iVar1 = FUN_10008130(param_1,1);
    }
    else {
      iVar1 = FUN_10008100(param_1,1);
    }
    if (iVar1 != -1) {
      *(int *)(param_1[1] + 0x128) = iVar1;
      FUN_10008190((int)param_1);
    }
  }
  FUN_10008240(param_1);
  if (param_1[0x9b] != 0) {
    (**(code **)(*param_1 + 0x154))((float)fVar2);
  }
  return;
}

