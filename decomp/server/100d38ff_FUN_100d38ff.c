
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100d38ff(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 local_20;
  short local_c [2];
  uint local_8;
  
  local_8 = FUN_100d744b();
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) ||
       (((param_4._2_2_ & 0x7ff8) == 0x7ff0 && (((param_4 & 0x7ffff) != 0 || (param_3 != 0)))))) {
      dVar7 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) +
              (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      uVar4 = 8;
      goto LAB_100d3b58;
    }
    if (((param_2._2_2_ & 0x7ff8) == 0x7ff8) || ((param_4._2_2_ & 0x7ff8) == 0x7ff8)) {
      fVar3 = FUN_100d6cc2(0x26,(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ),
                           (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)));
      return fVar3;
    }
  }
  if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) ==
      (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
    FUN_100d744b();
    return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == _DAT_100de1e8) {
    if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <=
        (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
      local_20 = -4.94065645841247e-324;
    }
    else {
      local_20 = 4.94065645841247e-324;
    }
  }
  if (((_DAT_100de1e8 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) &&
      ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
       (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))) ||
     (((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < _DAT_100de1e8 &&
      ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
       (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))))) {
    iVar2 = param_1 + -1;
    local_20 = (double)CONCAT44(param_2,iVar2);
    if (param_1 == 0) {
      iVar1 = param_2 - 1;
LAB_100d3a7d:
      local_20 = (double)CONCAT44(iVar1,(int)local_20);
    }
  }
  else if (((_DAT_100de1e8 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))
           && ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
               (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))) ||
          (((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < _DAT_100de1e8 &&
           ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
            (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))))) {
    iVar2 = param_1 + 1;
    local_20 = (double)CONCAT44(param_2,iVar2);
    if (iVar2 == 0) {
      iVar1 = param_2 + 1;
      goto LAB_100d3a7d;
    }
  }
  else {
    iVar2 = (int)local_20;
  }
  if ((((ulonglong)local_20 & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)local_20 & 0xfffff00000000) != 0 || (iVar2 != 0)))) {
    fVar3 = FUN_100d36e9(SUB84(local_20,0),local_20._4_4_,(int *)local_c);
    fVar3 = FUN_100d3602((double)fVar3,local_c[0] + 0x600);
    dVar7 = (double)fVar3;
    uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar4 = 0x12;
  }
  else {
    if (((local_20._4_4_ != 0x7ff00000) || (iVar2 != 0)) &&
       ((local_20._4_4_ != 0xfff00000 || (iVar2 != 0)))) {
      FUN_100d744b();
      return (float10)local_20;
    }
    fVar3 = FUN_100d36e9(SUB84(local_20,0),local_20._4_4_,(int *)local_c);
    fVar3 = FUN_100d3602((double)fVar3,local_c[0] + -0x600);
    dVar7 = (double)fVar3;
    uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar4 = 0x11;
  }
LAB_100d3b58:
  fVar3 = FUN_100d6dba(uVar4,0x26,uVar5,uVar6,dVar7,local_8);
  return fVar3;
}

