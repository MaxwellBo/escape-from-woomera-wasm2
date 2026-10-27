
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_10096650(void *this,int param_1,int param_2)

{
  uint *this_00;
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar5;
  int *piVar6;
  undefined3 extraout_var_00;
  int iVar7;
  undefined3 extraout_var_01;
  byte *pbVar8;
  byte *pbVar9;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  iVar4 = (**(code **)(*(int *)this + 0x4c))();
  this_00 = (uint *)((int)this + 0x308);
  bVar3 = FUN_10019450(this_00);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    return 0;
  }
  if (param_2 < 2) {
    return 0;
  }
  FUN_10019420(this_00,(int)this);
  param_2 = 1;
  iVar7 = *(int *)(*(int *)((int)this + 4) + 0x1d0);
  if (iVar7 == 0) {
    piVar5 = (int *)FUN_100aeba0(0,*(int *)((int)this + 4) + 8,(float)param_1);
    if (piVar5 == (int *)0x0) goto LAB_100968ee;
    do {
      piVar6 = (int *)(**(code **)(*piVar5 + 0x78))();
      if (((((piVar6 != (int *)0x0) && (piVar6 != this)) &&
           (iVar7 = (**(code **)(*piVar6 + 0xb8))(), iVar7 != 0)) &&
          ((piVar6[0xbf] == 0 &&
           (bVar3 = FUN_10019450((uint *)(piVar6 + 0xc2)), CONCAT31(extraout_var_01,bVar3) == 0))))
         && (iVar7 = (**(code **)(*piVar6 + 0x4c))(), iVar7 == iVar4)) {
        if (iVar4 == 7) {
          pbVar9 = (byte *)(*(int *)piVar6[1] + *(int *)(DAT_10122044 + 0x98));
          pbVar8 = (byte *)(**(int **)((int)this + 4) + *(int *)(DAT_10122044 + 0x98));
          do {
            bVar1 = *pbVar8;
            bVar3 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_10096814:
              iVar7 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
              goto LAB_10096819;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar3 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_10096814;
            pbVar8 = pbVar8 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_10096819:
          if (iVar7 != 0) goto LAB_100968c4;
        }
        iVar7 = piVar6[1];
        if (*(int *)(iVar7 + 0x1d0) == 0) {
          iVar2 = *(int *)((int)this + 4);
          fStack_48 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar7 + 0x10);
          fStack_4c = *(float *)(iVar2 + 0x178) + *(float *)(iVar7 + 0xc);
          fStack_50 = *(float *)(iVar2 + 0x174) + *(float *)(iVar7 + 8);
          fStack_3c = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0x10);
          fStack_40 = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 0xc);
          fStack_44 = *(float *)(iVar2 + 0x174) + *(float *)(iVar2 + 8);
          FUN_100afc60(&fStack_44,&fStack_50,1,*(undefined4 *)(iVar7 + 0x208),auStack_38);
          if (fStack_28 == (float)_DAT_100dd628) {
            iVar7 = FUN_10096400(this,(int)piVar6);
            if (iVar7 == 0) break;
            param_2 = param_2 + 1;
          }
        }
      }
LAB_100968c4:
      piVar5 = (int *)FUN_100aeba0((int)piVar5,*(int *)((int)this + 4) + 8,(float)param_1);
    } while (piVar5 != (int *)0x0);
  }
  else {
    piVar5 = (int *)FUN_100aebf0(0,s_netname_1010f984,*(int *)(DAT_10122044 + 0x98) + iVar7);
    if (piVar5 == (int *)0x0) goto LAB_100968ee;
    do {
      piVar6 = (int *)(**(code **)(*piVar5 + 0x78))();
      if (((piVar6 != (int *)0x0) &&
          (bVar3 = FUN_10019450((uint *)(piVar6 + 0xc2)), CONCAT31(extraout_var_00,bVar3) == 0)) &&
         ((iVar7 = (**(code **)(*piVar6 + 0x4c))(), iVar7 == iVar4 && (piVar6 != this)))) {
        iVar7 = FUN_10096400(this,(int)piVar6);
        if (iVar7 == 0) break;
        param_2 = param_2 + 1;
      }
      piVar5 = (int *)FUN_100aebf0((int)piVar5,s_netname_1010f984,
                                   *(int *)(DAT_10122044 + 0x98) +
                                   *(int *)(*(int *)((int)this + 4) + 0x1d0));
    } while (piVar5 != (int *)0x0);
  }
  if (param_2 != 1) {
    return param_2;
  }
LAB_100968ee:
  FUN_10019420(this_00,0);
  return param_2;
}

