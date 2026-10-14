
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001d920(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *this;
  undefined4 uVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  float10 fVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((DAT_10121de8 != 1) && (0 < param_5)) {
    do {
      iVar3 = (*DAT_10121e5c)();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + 0x80;
      }
      iVar1 = *(int *)(iVar3 + 0x208);
      if ((iVar1 == 0) || (this = *(undefined4 **)(iVar1 + 0x7c), this == (undefined4 *)0x0)) {
        this = (undefined4 *)(*DAT_10121f04)(iVar1,200);
        if (this == (undefined4 *)0x0) {
          this = (undefined4 *)0x0;
        }
        else {
          *this = &PTR_FUN_100e0d98;
        }
        this[1] = iVar3;
      }
      FUN_1001f200(this,s_models_stickygib_mdl_10105f9c);
      uVar4 = (*DAT_10121f70)(0,2);
      *(undefined4 *)(this[1] + 0x114) = uVar4;
      if (param_1 != 0) {
        fVar8 = (float10)(*DAT_10121f74)(0xc0400000,0x40400000);
        *(float *)(this[1] + 8) = (float)(fVar8 + (float10)param_2);
        fVar8 = (float10)(*DAT_10121f74)(0xc0400000,0x40400000);
        *(float *)(this[1] + 0xc) = (float)(fVar8 + (float10)param_3);
        fVar8 = (float10)(*DAT_10121f74)(0xc0400000,0x40400000);
        *(float *)(this[1] + 0x10) = (float)(fVar8 + (float10)param_4);
        iVar3 = this[1];
        fVar7 = _DAT_10121dfc * _DAT_100df2b0;
        fVar2 = _DAT_10121e00 * _DAT_100df2b0;
        *(float *)(iVar3 + 0x20) = _DAT_10121df8 * _DAT_100df2b0;
        *(float *)(iVar3 + 0x24) = fVar7;
        *(float *)(iVar3 + 0x28) = fVar2;
        iVar3 = this[1];
        fVar8 = (float10)(*DAT_10121f74)(0xbe19999a,0x3e19999a);
        *(float *)(iVar3 + 0x20) = (float)(fVar8 + (float10)*(float *)(iVar3 + 0x20));
        iVar3 = this[1];
        fVar8 = (float10)(*DAT_10121f74)(0xbe19999a,0x3e19999a);
        *(float *)(iVar3 + 0x24) = (float)(fVar8 + (float10)*(float *)(iVar3 + 0x24));
        iVar3 = this[1];
        fVar8 = (float10)(*DAT_10121f74)(0xbe19999a,0x3e19999a);
        *(float *)(iVar3 + 0x28) = (float)(fVar8 + (float10)*(float *)(iVar3 + 0x28));
        iVar3 = this[1];
        fVar7 = *(float *)(iVar3 + 0x24) * _DAT_100e0000;
        fVar2 = *(float *)(iVar3 + 0x28) * _DAT_100e0000;
        *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) * _DAT_100e0000;
        *(float *)(iVar3 + 0x24) = fVar7;
        *(float *)(iVar3 + 0x28) = fVar2;
        fVar8 = (float10)(*DAT_10121f74)(0x437a0000,0x43c80000);
        *(float *)(this[1] + 0x5c) = (float)fVar8;
        fVar8 = (float10)(*DAT_10121f74)(0x437a0000,0x43c80000);
        *(float *)(this[1] + 0x60) = (float)fVar8;
        iVar3 = *(int *)(param_1 + 0x208);
        if ((iVar3 == 0) && (iVar3 = (*DAT_10121f1c)(0), iVar3 == 0)) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = *(int **)(iVar3 + 0x7c);
        }
        uVar4 = (**(code **)(*piVar5 + 0x6c))();
        this[0x2e] = uVar4;
        if (*(float *)(param_1 + 0x160) <= _DAT_100de4d0) {
          iVar3 = this[1];
          if (*(float *)(param_1 + 0x160) <= _DAT_100e0d90) {
            pfVar6 = (float *)(iVar3 + 0x20);
            fVar2 = *(float *)(iVar3 + 0x24) * _DAT_100de4fc;
            fVar7 = *(float *)(iVar3 + 0x28) * _DAT_100de4fc;
            *pfVar6 = *(float *)(iVar3 + 0x20) * _DAT_100de4fc;
            *(float *)(iVar3 + 0x24) = fVar2;
            goto LAB_1001dc14;
          }
          *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + *(float *)(iVar3 + 0x20);
          *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + *(float *)(iVar3 + 0x24);
          *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + *(float *)(iVar3 + 0x28);
        }
        else {
          iVar3 = this[1];
          pfVar6 = (float *)(iVar3 + 0x20);
          fVar2 = *(float *)(iVar3 + 0x24) * _DAT_100e0d94;
          fVar7 = *(float *)(iVar3 + 0x28) * _DAT_100e0d94;
          *pfVar6 = *pfVar6 * _DAT_100e0d94;
          *(float *)(iVar3 + 0x24) = fVar2;
LAB_1001dc14:
          pfVar6[2] = fVar7;
        }
        uStack_18 = 0;
        *(undefined4 *)(this[1] + 0x108) = 6;
        uStack_14 = 0;
        *(undefined4 *)(this[1] + 0x10c) = 2;
        uStack_10 = 0;
        uStack_c = 0;
        uStack_8 = 0;
        uStack_4 = 0;
        FUN_100afdc0(this[1],&uStack_c,&uStack_18);
        this[0x1e] = CGib::StickyGibTouch;
        this[0x1d] = 0;
      }
      FUN_1001d830((int)this);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

