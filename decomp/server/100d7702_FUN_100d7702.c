
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100d7702(double param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_8;
  
  iVar1 = FUN_100d744b();
  uVar5 = (undefined2)iVar1;
  uVar6 = (undefined2)((uint)iVar1 >> 0x10);
  uVar4 = (uint)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_100d368f(SUB84(param_1,0),uVar4);
    if (0 < iVar1) {
      if (iVar1 < 3) goto LAB_100d77a7;
      if (iVar1 == 3) {
        fVar2 = FUN_100d6cc2(0x19,param_1,(double)param_2);
        return fVar2;
      }
    }
    dVar3 = param_1 + _DAT_100dd628;
    uVar4 = 8;
  }
  else {
    if (param_1 == _DAT_100de1e8) {
LAB_100d77a7:
      FUN_100d744b();
      return (float10)param_1;
    }
    fVar2 = FUN_100d36e9(SUB84(param_1,0),uVar4,&local_8);
    dVar3 = (double)fVar2;
    local_8 = param_2 + local_8;
    if (local_8 < 0xa01) {
      if (local_8 < 0x401) {
        if (local_8 < -0x9fd) {
          dVar3 = 0.0;
        }
        else {
          if (-0x3fe < local_8) {
            fVar2 = FUN_100d3602(dVar3,(short)local_8);
            FUN_100d744b();
            return (float10)(double)fVar2;
          }
          fVar2 = FUN_100d3602(dVar3,(short)(local_8 + 0x600));
          dVar3 = (double)fVar2;
        }
        uVar4 = 0x12;
        goto LAB_100d78bc;
      }
      fVar2 = FUN_100d3602(dVar3,(short)(local_8 + -0x600));
      dVar3 = (double)fVar2;
    }
    else {
      dVar3 = __copysign(_DAT_10120af0,dVar3);
    }
    uVar4 = 0x11;
  }
LAB_100d78bc:
  fVar2 = FUN_100d6dba(uVar4,0x19,param_1,(double)param_2,dVar3,CONCAT22(uVar6,uVar5));
  return fVar2;
}

