
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1008eed0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar1 = FUN_1009b210(param_1);
  if (iVar1 != 0) {
    fVar6 = (float10)(*DAT_10121f74)(0x4099999a,0x40a66666);
    _DAT_10131064 = (float)(fVar6 + (float10)*DAT_10122044);
    iVar1 = FUN_1009b130((int)param_1);
    piVar2 = FUN_1009af10(param_1,0);
    if (piVar2 != (int *)0x0) {
      iVar3 = (*DAT_10121f70)(0,1);
      if (iVar3 != 0) {
        iVar3 = piVar2[1];
        if (iVar3 == 0) {
          iVar4 = (*DAT_10121e5c)();
          if (iVar4 != 0) {
            iVar3 = iVar4 + 0x80;
          }
        }
        iVar4 = *(int *)(iVar3 + 0x208);
        if ((iVar4 == 0) || (piVar5 = *(int **)(iVar4 + 0x7c), piVar5 == (int *)0x0)) {
          piVar5 = (int *)(*DAT_10121f04)(iVar4,900);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            FUN_10002f30(piVar5);
            *piVar5 = (int)&PTR_FUN_100dd65c;
            FUN_10002ec0(piVar5 + 0x7b,0x10,8,FUN_10002f10);
            *piVar5 = (int)&PTR_FUN_100f0b40;
          }
          piVar5[1] = iVar3;
        }
        (**(code **)(*piVar5 + 0x230))(param_1);
        FUN_1009b420(param_1,(float *)(piVar2[1] + 8));
        pbVar8 = (byte *)param_1[0xd1];
        uVar11 = 0;
        uVar7 = *(undefined4 *)(param_1[1] + 0x208);
        uVar10 = 0x40000000;
        uVar9 = 0x3f800000;
        FUN_100945d0(uVar7,pbVar8);
        fVar6 = (float10)(*DAT_10121f74)(0x4099999a,0x40a66666,uVar7,pbVar8,uVar9,uVar10,uVar11,
                                         iVar1);
        _DAT_10131064 = (float)(fVar6 + (float10)*DAT_10122044);
        return 1;
      }
    }
    iVar3 = (*DAT_10121f70)(0,1);
    if (iVar3 != 0) {
      pbVar8 = (byte *)param_1[0xd0];
      uVar11 = 0;
      uVar7 = *(undefined4 *)(param_1[1] + 0x208);
      uVar10 = 0x40000000;
      uVar9 = 0x3f800000;
      FUN_100945d0(uVar7,pbVar8);
      fVar6 = (float10)(*DAT_10121f74)(0x4099999a,0x40a66666,uVar7,pbVar8,uVar9,uVar10,uVar11,iVar1)
      ;
      _DAT_10131064 = (float)(fVar6 + (float10)*DAT_10122044);
      return 1;
    }
    _DAT_10131064 = 0.0;
  }
  return 0;
}

