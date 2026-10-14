
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CLeech::SwimThink(void) */

void __thiscall CLeech::SwimThink(CLeech *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float unaff_ESI;
  float10 fVar8;
  float10 fVar9;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [16];
  float fStack_2c;
  
                    /* 0x56920  234  ?SwimThink@CLeech@@QAEXXZ */
  iVar5 = (*DAT_10121e4c)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  if ((iVar5 != 0) && (iVar5 = (*DAT_10121f20)(iVar5), iVar5 != 0)) {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    local_7c = 50.0;
    if (*(float *)(this + 0x324) < *DAT_10122044) {
      FUN_10055bc0((int)this);
    }
    if (*(float *)(this + 0x330) < *DAT_10122044) {
      FUN_10055ce0((int *)this);
    }
    *(uint *)(this + 0x15c) = *(uint *)(this + 0x15c) & 0xfffff7ff;
    if (*(int *)(this + 0x1d8) == 2) {
      iVar5 = FUN_10019410((uint *)(this + 0x160));
      if (iVar5 == 0) {
        FUN_10055ce0((int *)this);
      }
      else {
        fVar7 = (*(float *)(*(int *)(iVar5 + 4) + 0x17c) + *(float *)(*(int *)(iVar5 + 4) + 0x10)) -
                _DAT_100dd5d8;
        *(float *)(this + 800) = fVar7;
        if (*(float *)(this + 0x31c) <= fVar7) {
          if (*(float *)(this + 0x318) < fVar7) {
            *(undefined4 *)(this + 800) = *(undefined4 *)(this + 0x318);
          }
        }
        else {
          *(undefined4 *)(this + 800) = *(undefined4 *)(this + 0x31c);
        }
        iVar1 = *(int *)(this + 4);
        iVar2 = *(int *)(iVar5 + 4);
        fStack_74 = *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc);
        fStack_78 = *(float *)(iVar2 + 8) - *(float *)(iVar1 + 8);
        fStack_70 = (*(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10)) +
                    *(float *)(iVar2 + 0x17c);
        if (SQRT(fStack_70 * fStack_70 + fStack_74 * fStack_74 + fStack_78 * fStack_78) <
            _DAT_100e113c) {
          *(uint *)(this + 0x15c) = *(uint *)(this + 0x15c) | 0x800;
        }
        fVar8 = (float10)FUN_100afde0(&fStack_78);
        fVar9 = FUN_100ae770(*(float *)(*(int *)(this + 4) + 0x54));
        fVar8 = FUN_100ae7f0((float)fVar8,(float)fVar9);
        unaff_ESI = (float)fVar8;
        if ((float10)_DAT_100ea5e8 <= fVar8) {
          if (unaff_ESI <= (float)_DAT_100ea5e0) {
            local_7c = 100.0;
          }
          else {
            unaff_ESI = 67.5;
          }
        }
        else {
          unaff_ESI = -67.5;
        }
      }
    }
    else {
      if (*(float *)(this + 0x32c) < *DAT_10122044) {
        fVar8 = (float10)(*DAT_10121f74)(*(undefined4 *)(this + 0x31c),*(undefined4 *)(this + 0x318)
                                        );
        *(float *)(this + 800) =
             (float)((fVar8 + (float10)*(float *)(this + 800)) * (float10)_DAT_100dd648);
        fVar8 = (float10)(*DAT_10121f74)(0x3f800000,0x40800000);
        *(float *)(this + 0x32c) = (float)(fVar8 + (float10)*DAT_10122044);
      }
      iVar5 = (*DAT_10121f70)(0,100);
      if (iVar5 < 10) {
        iVar5 = (*DAT_10121f70)(0xffffffe2,0x1e);
        unaff_ESI = (float)iVar5;
      }
      iVar1 = *(int *)(this + 4);
      iVar5 = 0;
      fVar7 = *(float *)(iVar1 + 8) - *(float *)(iVar1 + 0x14);
      fVar4 = *(float *)(iVar1 + 0xc) - *(float *)(iVar1 + 0x18);
      fVar3 = *(float *)(iVar1 + 0x10) - *(float *)(iVar1 + 0x1c);
      if (SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar3 * fVar3) < _DAT_100dd618) {
        *(undefined4 *)(this + 0x328) = 0;
      }
    }
    fVar8 = FUN_100561f0((int)this,iVar5);
    iVar5 = *(int *)(this + 4);
    *(float *)(this + 0x314) = (float)fVar8;
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar5 + 0x10);
    if (*(float *)(this + 0x314) < (float)_DAT_100dfb80) {
      *(undefined4 *)(this + 0x314) = 0x3dcccccd;
    }
    if (*(float *)(this + 0x314) == (float)_DAT_100dd628) {
      if (*(float *)(this + 0x308) != _DAT_100dd5f8) {
        *(undefined4 *)(this + 0x308) = 0;
      }
      *(undefined4 *)(this + 0x30c) = 0;
      fVar8 = FUN_100afe80(local_7c,*(float *)(*(int *)(this + 4) + 0x1f8),8.0);
      *(float *)(*(int *)(this + 4) + 0x1f8) = (float)fVar8;
      iVar5 = *(int *)(this + 4);
      fVar7 = *(float *)(iVar5 + 0x1f8);
      fStack_78 = fVar7 * DAT_10122044[10];
      pfVar6 = (float *)(iVar5 + 0x20);
      fStack_74 = fVar7 * DAT_10122044[0xb];
      fVar7 = fVar7 * DAT_10122044[0xc];
      *pfVar6 = fStack_78;
      *(float *)(iVar5 + 0x24) = fStack_74;
      fStack_70 = fVar7;
    }
    else {
      fVar7 = (float)_DAT_100dd628;
      *(undefined4 *)(this + 0x30c) = 1;
      *(float *)(this + 0x314) = fVar7 / *(float *)(this + 0x314);
      if (*(float *)(this + 0x308) == _DAT_100dd5f8) {
        iVar5 = *(int *)(this + 4);
        fStack_5c = DAT_10122044[0xb] * _DAT_100ddb08;
        fStack_58 = DAT_10122044[0xc] * _DAT_100ddb08;
        fStack_78 = DAT_10122044[0x10] * _DAT_100dd63c + *(float *)(iVar5 + 8) +
                    DAT_10122044[10] * _DAT_100ddb08;
        fStack_74 = DAT_10122044[0x11] * _DAT_100dd63c + *(float *)(iVar5 + 0xc) + fStack_5c;
        fStack_70 = DAT_10122044[0x12] * _DAT_100dd63c + *(float *)(iVar5 + 0x10) + fStack_58;
        fStack_6c = fStack_78;
        fStack_68 = fStack_74;
        fStack_64 = fStack_70;
        FUN_100afc60((float *)(iVar5 + 8),&fStack_78,2,*(undefined4 *)(iVar5 + 0x208),auStack_3c);
        fVar7 = fStack_2c;
        fStack_44 = DAT_10122044[0xb] * _DAT_100ddb08;
        fStack_40 = DAT_10122044[0xc] * _DAT_100ddb08;
        fStack_5c = DAT_10122044[0x11] * _DAT_100ea5d0;
        iVar5 = *(int *)(this + 4);
        fStack_58 = DAT_10122044[0x12] * _DAT_100ea5d0;
        fStack_50 = fStack_5c + *(float *)(iVar5 + 0xc);
        fStack_4c = fStack_58 + *(float *)(iVar5 + 0x10);
        fStack_78 = DAT_10122044[0x10] * _DAT_100ea5d0 + *(float *)(iVar5 + 8) +
                    DAT_10122044[10] * _DAT_100ddb08;
        fStack_74 = fStack_50 + fStack_44;
        fStack_70 = fStack_4c + fStack_40;
        fStack_6c = fStack_78;
        fStack_68 = fStack_74;
        fStack_64 = fStack_70;
        FUN_100afc60((float *)(iVar5 + 8),&fStack_78,2,*(undefined4 *)(iVar5 + 0x208),auStack_3c);
        if (((float)_DAT_100dfb80 < fVar7 - fStack_2c) ||
           (((float)_DAT_100ea5d8 < fVar7 - fStack_2c &&
            (iVar5 = (*DAT_10121f70)(0,100), iVar5 < 0x32)))) {
          *(undefined4 *)(this + 0x308) = 0xc2b40000;
        }
        else {
          *(undefined4 *)(this + 0x308) = 0x42b40000;
        }
      }
      fVar8 = FUN_100afe80(-25.0,*(float *)(*(int *)(this + 4) + 0x1f8),*(float *)(this + 0x314));
      *(float *)(*(int *)(this + 4) + 0x1f8) = (float)fVar8;
      iVar5 = *(int *)(this + 4);
      fVar7 = *(float *)(iVar5 + 0x1f8);
      fStack_6c = fVar7 * DAT_10122044[10];
      pfVar6 = (float *)(iVar5 + 0x20);
      fStack_68 = fVar7 * DAT_10122044[0xb];
      fVar7 = fVar7 * DAT_10122044[0xc];
      *pfVar6 = fStack_6c;
      *(float *)(iVar5 + 0x24) = fStack_68;
      fStack_64 = fVar7;
    }
    pfVar6[2] = fVar7;
    *(float *)(*(int *)(this + 4) + 0xac) = unaff_ESI + *(float *)(this + 0x308);
    FUN_100566a0((int *)this);
    return;
  }
  iVar5 = *(int *)this;
  fVar8 = (float10)(*DAT_10121f74)(0x3f800000,0x3fc00000);
  (**(code **)(iVar5 + 8))((float)fVar8);
  iVar5 = *(int *)(this + 4);
  *(undefined4 *)(iVar5 + 0x20) = DAT_10121dd8;
  *(undefined4 *)(iVar5 + 0x24) = DAT_10121ddc;
  *(undefined4 *)(iVar5 + 0x28) = DAT_10121de0;
  return;
}

