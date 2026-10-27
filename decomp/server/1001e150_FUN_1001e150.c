
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001e150(int param_1,int param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  undefined4 *this;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  float fVar8;
  float10 fVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_2 != 0) {
    iVar2 = (*DAT_10121e5c)();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + 0x80;
    }
    iVar5 = *(int *)(iVar2 + 0x208);
    if ((iVar5 == 0) || (this = *(undefined4 **)(iVar5 + 0x7c), this == (undefined4 *)0x0)) {
      this = (undefined4 *)(*DAT_10121f04)(iVar5,200);
      if (this == (undefined4 *)0x0) {
        this = (undefined4 *)0x0;
      }
      else {
        *this = &PTR_FUN_100e0d98;
      }
      this[1] = iVar2;
    }
    FUN_1001f200(this,param_4);
    iVar2 = (*DAT_10121f30)(*(undefined4 *)(this[1] + 0x208));
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0xd0) + iVar2, 0 < param_2)) {
      do {
        if (this == (undefined4 *)0x0) {
          iVar3 = (*DAT_10121e5c)();
          iVar5 = 0;
          if (iVar3 != 0) {
            iVar5 = iVar3 + 0x80;
          }
          iVar3 = *(int *)(iVar5 + 0x208);
          if ((iVar3 == 0) || (this = *(undefined4 **)(iVar3 + 0x7c), this == (undefined4 *)0x0)) {
            this = (undefined4 *)(*DAT_10121f04)(iVar3,200);
            if (this == (undefined4 *)0x0) {
              this = (undefined4 *)0x0;
            }
            else {
              *this = &PTR_FUN_100e0d98;
            }
            this[1] = iVar5;
          }
          FUN_1001f200(this,param_4);
        }
        if (param_3 == 0) {
          iVar5 = *(int *)(iVar2 + 0x40);
        }
        else {
          iVar5 = *(int *)(iVar2 + 0x40);
        }
        uVar4 = (*DAT_10121f70)(param_3 != 0,iVar5 + -1);
        *(undefined4 *)(this[1] + 0x114) = uVar4;
        if (param_1 != 0) {
          fVar9 = (float10)(*DAT_10121f74)(0,0x3f800000);
          *(float *)(this[1] + 8) =
               (float)(fVar9 * (float10)*(float *)(param_1 + 0xf4) +
                      (float10)*(float *)(param_1 + 0xc4));
          fVar9 = (float10)(*DAT_10121f74)(0,0x3f800000);
          *(float *)(this[1] + 0xc) =
               (float)(fVar9 * (float10)*(float *)(param_1 + 0xf8) +
                      (float10)*(float *)(param_1 + 200));
          fVar9 = (float10)(*DAT_10121f74)(0,0x3f800000);
          *(float *)(this[1] + 0x10) =
               (float)(fVar9 * (float10)*(float *)(param_1 + 0xfc) +
                       (float10)*(float *)(param_1 + 0xcc) + (float10)_DAT_100dd618);
          iVar5 = this[1];
          fVar8 = _DAT_10121dfc * _DAT_100df2b0;
          fVar1 = _DAT_10121e00 * _DAT_100df2b0;
          *(float *)(iVar5 + 0x20) = _DAT_10121df8 * _DAT_100df2b0;
          *(float *)(iVar5 + 0x24) = fVar8;
          *(float *)(iVar5 + 0x28) = fVar1;
          iVar5 = this[1];
          fVar9 = (float10)(*DAT_10121f74)(0xbe800000,0x3e800000);
          *(float *)(iVar5 + 0x20) = (float)(fVar9 + (float10)*(float *)(iVar5 + 0x20));
          iVar5 = this[1];
          fVar9 = (float10)(*DAT_10121f74)(0xbe800000,0x3e800000);
          *(float *)(iVar5 + 0x24) = (float)(fVar9 + (float10)*(float *)(iVar5 + 0x24));
          iVar5 = this[1];
          fVar9 = (float10)(*DAT_10121f74)(0xbe800000,0x3e800000);
          *(float *)(iVar5 + 0x28) = (float)(fVar9 + (float10)*(float *)(iVar5 + 0x28));
          fVar9 = (float10)(*DAT_10121f74)(0x43960000,0x43c80000);
          iVar5 = this[1];
          *(float *)(iVar5 + 0x20) = (float)(fVar9 * (float10)*(float *)(iVar5 + 0x20));
          *(float *)(iVar5 + 0x24) = (float)(fVar9 * (float10)*(float *)(iVar5 + 0x24));
          *(float *)(iVar5 + 0x28) = (float)(fVar9 * (float10)*(float *)(iVar5 + 0x28));
          fVar9 = (float10)(*DAT_10121f74)(0x42c80000,0x43480000);
          *(float *)(this[1] + 0x5c) = (float)fVar9;
          fVar9 = (float10)(*DAT_10121f74)(0x42c80000,0x43960000);
          *(float *)(this[1] + 0x60) = (float)fVar9;
          iVar5 = *(int *)(param_1 + 0x208);
          if ((iVar5 == 0) && (iVar5 = (*DAT_10121f1c)(0), iVar5 == 0)) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = *(int **)(iVar5 + 0x7c);
          }
          uVar4 = (**(code **)(*piVar6 + 0x6c))();
          this[0x2e] = uVar4;
          if (*(float *)(param_1 + 0x160) <= _DAT_100de4d0) {
            iVar5 = this[1];
            if (*(float *)(param_1 + 0x160) <= _DAT_100e0d90) {
              pfVar7 = (float *)(iVar5 + 0x20);
              fVar1 = *(float *)(iVar5 + 0x24) * _DAT_100de4fc;
              fVar8 = *(float *)(iVar5 + 0x28) * _DAT_100de4fc;
              *pfVar7 = *(float *)(iVar5 + 0x20) * _DAT_100de4fc;
              *(float *)(iVar5 + 0x24) = fVar1;
              goto LAB_1001e4e0;
            }
            *(float *)(iVar5 + 0x20) = *(float *)(iVar5 + 0x20) + *(float *)(iVar5 + 0x20);
            *(float *)(iVar5 + 0x24) = *(float *)(iVar5 + 0x24) + *(float *)(iVar5 + 0x24);
            *(float *)(iVar5 + 0x28) = *(float *)(iVar5 + 0x28) + *(float *)(iVar5 + 0x28);
          }
          else {
            iVar5 = this[1];
            pfVar7 = (float *)(iVar5 + 0x20);
            fVar1 = *(float *)(iVar5 + 0x24) * _DAT_100e0d94;
            fVar8 = *(float *)(iVar5 + 0x28) * _DAT_100e0d94;
            *pfVar7 = *pfVar7 * _DAT_100e0d94;
            *(float *)(iVar5 + 0x24) = fVar1;
LAB_1001e4e0:
            pfVar7[2] = fVar8;
          }
          *(undefined4 *)(this[1] + 0x10c) = 2;
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_c = 0;
          uStack_8 = 0;
          uStack_4 = 0;
          FUN_100afdc0(this[1],&uStack_c,&uStack_18);
        }
        FUN_1001d830((int)this);
        this = (undefined4 *)0x0;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}

