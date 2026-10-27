
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1009b4c0(int *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_8;
  int local_4;
  
  iVar3 = FUN_1009b210(param_1);
  if (iVar3 != 0) {
    if ((*(uint *)(param_1[1] + 0x1a0) & 0x100) == 0) {
      local_4 = param_1[199];
      local_8 = param_1[0xc6];
      uVar8 = 0x404ccccd;
      uVar7 = 0x40333333;
    }
    else {
      local_4 = param_1[0xd0];
      local_8 = param_1[0xd1];
      uVar8 = 0x40a66666;
      uVar7 = 0x4099999a;
    }
    fVar6 = (float10)(*DAT_10121f74)(uVar7,uVar8);
    fVar2 = (float)fVar6;
    FUN_1009b130((int)param_1);
    puVar1 = (uint *)(param_1 + 0x5a);
    piVar4 = (int *)FUN_10019410(puVar1);
    if (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 0xcc))();
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*piVar4 + 0xb8))();
        if (iVar3 != 0) {
          param_1[0xdf] = *puVar1;
          param_1[0xe0] = param_1[0x5b];
          if ((*(byte *)(param_1 + 0xc2) & 4) == 0) {
            iVar3 = FUN_10019460(puVar1);
            iVar3 = *(int *)(iVar3 + 4);
            iVar5 = FUN_10019460(puVar1);
            if (*(float *)(iVar3 + 0x160) <= *(float *)(*(int *)(iVar5 + 4) + 0x1b0) * _DAT_100f2378
               ) {
              (**(code **)(*param_1 + 0x198))(param_1[0xd4],fVar2,0x3f800000,0x40000000);
              param_1[0xc2] = param_1[0xc2] | 4;
              return 1;
            }
          }
          if ((*(byte *)(param_1 + 0xc2) & 2) == 0) {
            iVar3 = FUN_10019460(puVar1);
            iVar3 = *(int *)(iVar3 + 4);
            iVar5 = FUN_10019460(puVar1);
            if (*(float *)(iVar3 + 0x160) <= *(float *)(*(int *)(iVar5 + 4) + 0x1b0) * _DAT_100dd5e8
               ) {
              (**(code **)(*param_1 + 0x198))(param_1[0xd3],fVar2,0x3f800000,0x40000000);
              param_1[0xc2] = param_1[0xc2] | 2;
              return 1;
            }
          }
          if ((*(byte *)(param_1 + 0xc2) & 1) == 0) {
            iVar3 = FUN_10019460(puVar1);
            iVar3 = *(int *)(iVar3 + 4);
            iVar5 = FUN_10019460(puVar1);
            if (*(float *)(iVar3 + 0x160) <= *(float *)(*(int *)(iVar5 + 4) + 0x1b0) * _DAT_100dd614
               ) {
              (**(code **)(*param_1 + 0x198))(param_1[0xd2],fVar2,0x3f800000,0x40000000);
              param_1[0xc2] = param_1[0xc2] | 1;
              return 1;
            }
          }
        }
      }
    }
    piVar4 = FUN_1009af10(param_1,0);
    if (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 0x98))();
      if (iVar3 == 0) {
        iVar3 = (*DAT_10121f70)(0,99);
        if (iVar3 < 0x4b) {
          (**(code **)(*param_1 + 0x198))(local_8,fVar2,0x3f800000,0x40000000);
          FUN_10019420(param_1 + 0xdf,(int)piVar4);
          (**(code **)(*piVar4 + 0x230))(param_1);
          piVar4[0xde] = param_1[0xde];
          goto LAB_1009b79c;
        }
      }
    }
    iVar3 = (*DAT_10121f70)(0,1);
    if (iVar3 != 0) {
      piVar4 = FUN_1009af10(param_1,1);
      if (piVar4 != (int *)0x0) {
        FUN_10019420(param_1 + 0xdf,(int)piVar4);
        (**(code **)(*param_1 + 0x198))(local_4,fVar2,0x3f800000,0x40000000);
LAB_1009b79c:
        param_1[0xc3] = param_1[0xc3] + 1;
        return 1;
      }
    }
    FUN_1009b910(param_1,0.0);
    _DAT_10131064 = 0;
  }
  return 0;
}

