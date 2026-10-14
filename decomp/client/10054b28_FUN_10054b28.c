
bool __cdecl FUN_10054b28(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_1007e6bc != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_1007e750) || (uVar5 != DAT_1007e760)) {
      if (DAT_100bcc38 == 0) {
        FUN_10054cd4(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_10054cd4(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_100bccd8 != 0) {
          uVar6 = (uint)DAT_100bccde;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_100bccdc;
          uVar6 = 0;
          uVar4 = (uint)DAT_100bccde;
        }
        FUN_10054cd4(1,(uint)(DAT_100bccd8 == 0),uVar5,(uint)DAT_100bccda,uVar4,uVar3,uVar6,
                     (uint)DAT_100bcce0,(uint)DAT_100bcce2,(uint)DAT_100bcce4,(uint)DAT_100bcce6);
        if (DAT_100bcc84 != 0) {
          uVar6 = (uint)DAT_100bcc8a;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_100bcc88;
          uVar6 = 0;
          uVar4 = (uint)DAT_100bcc8a;
          uVar5 = param_1[5];
        }
        FUN_10054cd4(0,(uint)(DAT_100bcc84 == 0),uVar5,(uint)DAT_100bcc86,uVar4,uVar3,uVar6,
                     (uint)DAT_100bcc8c,(uint)DAT_100bcc8e,(uint)DAT_100bcc90,(uint)DAT_100bcc92);
      }
    }
    iVar1 = param_1[7];
    if (DAT_1007e754 < DAT_1007e764) {
      if ((DAT_1007e754 <= iVar1) && (iVar1 <= DAT_1007e764)) {
        if ((DAT_1007e754 < iVar1) && (iVar1 < DAT_1007e764)) {
          return true;
        }
LAB_10054ca0:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_1007e754) {
          return DAT_1007e758 <= iVar2;
        }
        return iVar2 < DAT_1007e768;
      }
    }
    else {
      if (iVar1 < DAT_1007e764) {
        return true;
      }
      if (DAT_1007e754 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_1007e764) || (DAT_1007e754 <= iVar1)) goto LAB_10054ca0;
    }
  }
  return false;
}

