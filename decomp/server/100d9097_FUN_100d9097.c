
bool __cdecl FUN_100d9097(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_101219a0 != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_10121a30) || (uVar5 != DAT_10121a40)) {
      if (DAT_10134c30 == 0) {
        FUN_100d9243(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_100d9243(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_10134cd0 != 0) {
          uVar6 = (uint)DAT_10134cd6;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_10134cd4;
          uVar6 = 0;
          uVar4 = (uint)DAT_10134cd6;
        }
        FUN_100d9243(1,(uint)(DAT_10134cd0 == 0),uVar5,(uint)DAT_10134cd2,uVar4,uVar3,uVar6,
                     (uint)DAT_10134cd8,(uint)DAT_10134cda,(uint)DAT_10134cdc,(uint)DAT_10134cde);
        if (DAT_10134c7c != 0) {
          uVar6 = (uint)DAT_10134c82;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_10134c80;
          uVar6 = 0;
          uVar4 = (uint)DAT_10134c82;
          uVar5 = param_1[5];
        }
        FUN_100d9243(0,(uint)(DAT_10134c7c == 0),uVar5,(uint)DAT_10134c7e,uVar4,uVar3,uVar6,
                     (uint)DAT_10134c84,(uint)DAT_10134c86,(uint)DAT_10134c88,(uint)DAT_10134c8a);
      }
    }
    iVar1 = param_1[7];
    if (DAT_10121a34 < DAT_10121a44) {
      if ((DAT_10121a34 <= iVar1) && (iVar1 <= DAT_10121a44)) {
        if ((DAT_10121a34 < iVar1) && (iVar1 < DAT_10121a44)) {
          return true;
        }
LAB_100d920f:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_10121a34) {
          return DAT_10121a38 <= iVar2;
        }
        return iVar2 < DAT_10121a48;
      }
    }
    else {
      if (iVar1 < DAT_10121a44) {
        return true;
      }
      if (DAT_10121a34 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_10121a44) || (DAT_10121a34 <= iVar1)) goto LAB_100d920f;
    }
  }
  return false;
}

