
undefined4 __fastcall FUN_1009b350(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  int iVar4;
  
  iVar1 = FUN_1009b210(param_1);
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xc2) & 8) == 0)) {
    piVar2 = FUN_1009af10(param_1,1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*param_1 + 0x14c))(piVar2);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x110))(piVar2);
        if (iVar1 != 0) {
          FUN_10019420(param_1 + 0xdf,(int)piVar2);
          iVar1 = *param_1;
          if ((*(uint *)(param_1[1] + 0x1a0) & 0x100) == 0) {
            fVar3 = (float10)(*DAT_10121f74)(0x40400000,0x40600000,0x3f800000,0x40000000);
            iVar4 = param_1[0xce];
          }
          else {
            fVar3 = (float10)(*DAT_10121f74)();
            iVar4 = param_1[0xcf];
          }
          (**(code **)(iVar1 + 0x198))(iVar4,(float)fVar3);
          param_1[0xc2] = param_1[0xc2] | 8;
          return 1;
        }
      }
    }
  }
  return 0;
}

