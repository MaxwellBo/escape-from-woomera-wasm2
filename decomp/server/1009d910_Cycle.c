
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTentacle::Cycle(void) */

void __thiscall CTentacle::Cycle(CTentacle *this)

{
  CTentacle *pCVar1;
  char *pcVar2;
  bool bVar3;
  float fVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  longlong lVar10;
  float fStack_b8;
  char *pcStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  float fStack_68;
  undefined1 auStack_40 [16];
  float fStack_30;
  
                    /* 0x9d910  55  ?Cycle@CTentacle@@QAEXXZ */
  fStack_b8 = 0.1;
  (**(code **)(*(int *)this + 8))();
  if ((*(int *)(this + 0x1d8) == 6) || (*(int *)(this + 0x1dc) == 6)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x54) = *(undefined4 *)(this + 0x308);
    *(undefined4 *)(*(int *)(this + 4) + 0xac) = *(undefined4 *)(this + 0x308);
    uVar8 = (**(code **)(*(int *)this + 0x1d4))();
    *(uint *)(this + 0x15c) = *(uint *)(this + 0x15c) & ~uVar8;
    (**(code **)(*(int *)this + 300))();
    *(undefined4 *)(this + 0x30c) = 0;
    return;
  }
  FUN_10008240((int *)this);
  FUN_10007fc0((int)this,0.0);
  iVar7 = *(int *)this;
  lVar10 = __ftol();
  (**(code **)(iVar7 + 0x128))((int)lVar10);
  FUN_1005cbf0((int *)this);
  if (((*(uint *)(this + 0x15c) & 0x20000) != 0) &&
     (pfVar5 = (float *)(**(code **)(*(int *)this + 0x1e4))(), pfVar5 != (float *)0x0)) {
    fVar4 = *DAT_10122044 - *(float *)(this + 0x350);
    if ((float)_DAT_100dd648 <= fVar4) {
      iVar7 = *(int *)(this + 4);
      fStack_a8 = *pfVar5 - *(float *)(iVar7 + 8);
      fStack_a4 = pfVar5[1] - *(float *)(iVar7 + 0xc);
      fStack_a0 = pfVar5[2] - *(float *)(iVar7 + 0x10);
    }
    else {
      iVar7 = *(int *)(this + 4);
      fStack_9c = (*pfVar5 - *(float *)(this + 0x344)) / fVar4 + *pfVar5;
      fStack_98 = (pfVar5[1] - *(float *)(this + 0x348)) / fVar4 + pfVar5[1];
      fStack_a8 = fStack_9c - *(float *)(iVar7 + 8);
      fStack_a4 = fStack_98 - *(float *)(iVar7 + 0xc);
      fStack_a0 = ((pfVar5[2] - *(float *)(this + 0x34c)) / fVar4 + pfVar5[2]) -
                  *(float *)(iVar7 + 0x10);
    }
    fVar4 = fStack_a0;
    *(float *)(this + 0x350) = *DAT_10122044;
    *(float *)(this + 0x344) = *pfVar5;
    *(float *)(this + 0x348) = pfVar5[1];
    *(float *)(this + 0x34c) = pfVar5[2];
    fStack_b8 = fStack_a8;
    fVar9 = (float10)FUN_100afde0(&fStack_b8);
    *(float *)(this + 0x31c) = (float)(fVar9 - (float10)*(float *)(this + 0x308));
    uVar6 = FUN_1009d7d0(fVar4);
    bVar3 = *(float *)(this + 0x31c) < _DAT_100de530;
    *(undefined4 *)(this + 800) = uVar6;
    if (bVar3) {
      *(float *)(this + 0x31c) = *(float *)(this + 0x31c) + _DAT_100ddae8;
    }
    if (_DAT_100ddaec < *(float *)(this + 0x31c)) {
      *(float *)(this + 0x31c) = *(float *)(this + 0x31c) - _DAT_100ddae8;
    }
    if (*(float *)(this + 0x324) < *DAT_10122044) {
      (*DAT_10121f70)(0,1);
    }
    fVar9 = (float10)(*DAT_10121f74)(0x40a00000,0x41200000);
    *(float *)(this + 0x324) = (float)(fVar9 + (float10)*DAT_10122044);
  }
  pcVar2 = *(char **)(this + 0x31c);
  switch(*(undefined4 *)(*(int *)(this + 4) + 0x128)) {
  case 10:
  case 0xb:
  case 0x14:
  case 0x15:
  case 0x1e:
  case 0x1f:
  case 0x28:
  case 0x29:
    if (((float)pcVar2 < _DAT_100dd5f8) &&
       (pcStack_ac = (char *)-*(float *)(this + 0x33c), (float)pcStack_ac < (float)pcVar2)) {
      pcVar2 = pcStack_ac;
    }
    if ((_DAT_100dd5f8 < (float)pcVar2) && ((float)pcVar2 < *(float *)(this + 0x33c))) {
LAB_1009dbf2:
      pcVar2 = *(char **)(this + 0x33c);
    }
    break;
  default:
    pcStack_ac = (char *)-*(float *)(this + 0x33c);
    if ((float)pcVar2 < (float)pcStack_ac) {
      pcVar2 = pcStack_ac;
    }
    if (*(float *)(this + 0x33c) < (float)pcVar2) goto LAB_1009dbf2;
  }
  *(float *)(*(int *)(this + 4) + 0xac) = (float)pcVar2 + *(float *)(this + 0x308);
  if (*(int *)(this + 0xd4) == 0) goto LAB_1009e126;
  iVar7 = *(int *)(this + 4);
  if (_DAT_100dd618 < *(float *)(iVar7 + 0x160)) {
    if (*(float *)(this + 0x324) <= *DAT_10122044) {
      if (*(int *)(iVar7 + 0x128) == 0) {
        *(undefined4 *)(this + 0x30c) = 0;
      }
      else if (*(int *)(iVar7 + 0x128) == *(int *)(this + 0x30c)) {
        iVar7 = FUN_1009d850((int)this);
        if ((iVar7 < 0) || (*(float *)(this + 0x324) <= *DAT_10122044)) {
          iVar7 = FUN_1009d850((int)this);
          if (iVar7 < 0) {
            iVar7 = 0x3f2;
          }
          else {
            if (*(float *)(this + 0x338) < *DAT_10122044) {
              iVar7 = (*DAT_10121f70)(0,1);
              if (iVar7 == 0) {
                pcStack_ac = s_tentacle_te_sing1_wav_10118368;
              }
              else if (iVar7 == 1) {
                pcStack_ac = s_tentacle_te_sing2_wav_10118350;
              }
              FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),
                           *(void **)(*(int *)(this + 4) + 0x208),2,pcStack_ac,0x3f800000,0x3f4ccccd
                           ,0,100);
              fVar9 = (float10)(*DAT_10121f74)(0x41200000,0x41a00000);
              *(float *)(this + 0x338) = (float)(fVar9 + (float10)*DAT_10122044);
            }
            iVar7 = (*DAT_10121f70)(0,0xf);
            if (iVar7 == 0) {
              iVar7 = (*DAT_10121f70)();
            }
            else {
              iVar7 = (*DAT_10121f70)(0,3);
              if (iVar7 == 0) {
                iVar7 = FUN_1009d850((int)this);
                iVar7 = iVar7 + 0x3fc;
                goto LAB_1009de86;
              }
              iVar7 = FUN_1009d850((int)this);
            }
            iVar7 = iVar7 + 0x3f2;
          }
        }
        else {
          iVar7 = (*DAT_10121f70)(0,9);
          if (*(float *)(this + 0x324) - *DAT_10122044 <= (float)iVar7) {
            iVar7 = *(int *)(this + 800) + 0x3fc;
          }
          else {
            iVar7 = *(int *)(this + 800) + 0x406;
          }
        }
LAB_1009de86:
        uVar6 = FUN_10008100(this,iVar7);
        bVar3 = _DAT_100dd5f8 <= *(float *)(this + 0x31c);
        *(undefined4 *)(this + 0x30c) = uVar6;
        if (bVar3) {
          fVar9 = (float10)(*DAT_10121f74)(0x40000000,0x41000000);
          fVar9 = (float10)*(float *)(this + 0x31c) - fVar9;
        }
        else {
          fVar9 = (float10)(*DAT_10121f74)();
          fVar9 = fVar9 + (float10)*(float *)(this + 0x31c);
        }
        *(float *)(this + 0x31c) = (float)fVar9;
      }
    }
    else if ((*(float *)(this + 0x31c) < -(*(float *)(this + 0x33c) + _DAT_100de4f8)) ||
            (*(float *)(this + 0x33c) + _DAT_100de4f8 < *(float *)(this + 0x31c))) {
      if ((*(float *)(this + 0x31c) < *(float *)(this + 0x33c) * _DAT_100ef394) ||
         (*(float *)(this + 0x33c) + *(float *)(this + 0x33c) < *(float *)(this + 0x31c))) {
        uVar6 = FUN_10008100(this,*(int *)(this + 800) + 0x410);
        *(undefined4 *)(this + 0x30c) = uVar6;
      }
      else {
        uVar6 = FUN_10008100(this,*(int *)(this + 800) + 0x3fc);
        *(undefined4 *)(this + 0x30c) = uVar6;
      }
    }
    else {
      uVar6 = FUN_10008100(this,*(int *)(this + 800) + 0x406);
      *(undefined4 *)(this + 0x30c) = uVar6;
    }
  }
  else {
    *(undefined4 *)(this + 0x30c) = 0;
    if (*(int *)(iVar7 + 0x128) == 0) {
      *(undefined4 *)(iVar7 + 0x160) = 0x42960000;
    }
  }
  pCVar1 = this + 0x314;
  iVar7 = FUN_10008480(this,*(int *)(*(int *)(this + 4) + 0x128),*(int *)(this + 0x30c),
                       (int *)pCVar1);
  *(int *)(*(int *)(this + 4) + 0x128) = iVar7;
  if (*(int *)pCVar1 < 1) {
    *(int *)pCVar1 = -1;
    *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0x437f0000;
  }
  else {
    *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
  }
  FUN_10008190((int)this);
  fVar9 = (float10)(*DAT_10121f74)(0xbe4ccccd,0x3e4ccccd);
  *(float *)(this + 0x318) = (float)fVar9;
  *(float *)(*(int *)(this + 4) + 0x138) = (float)(fVar9 + (float10)*(int *)pCVar1);
  switch(*(undefined4 *)(*(int *)(this + 4) + 0x128)) {
  case 8:
  case 0x12:
  case 0x1c:
  case 0x26:
    FUN_100af200(*(int *)(this + 4) + 0x50);
    fVar9 = FUN_1009d820((int)this);
    iVar7 = *(int *)(this + 4);
    fStack_b8 = *(float *)(iVar7 + 8);
    fStack_a4 = *(float *)(iVar7 + 0xc);
    fStack_a0 = (float)((fVar9 - (float10)_DAT_100de4fc) + (float10)*(float *)(iVar7 + 0x10));
    fStack_98 = DAT_10122044[0xb] * _DAT_100de47c;
    fStack_94 = DAT_10122044[0xc] * _DAT_100de47c;
    fStack_84 = DAT_10122044[10] * _DAT_100de47c + fStack_b8;
    fStack_80 = fStack_98 + fStack_a4;
    fStack_7c = fStack_94 + fStack_a0;
    fStack_a8 = fStack_b8;
    FUN_100afc60(&fStack_a8,&fStack_84,1,*(undefined4 *)(iVar7 + 0x208),auStack_40);
    fVar9 = FUN_1009d820((int)this);
    iVar7 = *(int *)(this + 4);
    fStack_b8 = *(float *)(iVar7 + 8);
    fStack_a4 = *(float *)(iVar7 + 0xc);
    fStack_a0 = (float)(fVar9 + (float10)_DAT_100de45c + (float10)*(float *)(iVar7 + 0x10));
    fStack_98 = DAT_10122044[0xb] * _DAT_100de47c;
    fStack_94 = DAT_10122044[0xc] * _DAT_100de47c;
    fStack_90 = DAT_10122044[10] * _DAT_100de47c + fStack_b8;
    fStack_8c = fStack_98 + fStack_a4;
    fStack_88 = fStack_94 + fStack_a0;
    fStack_a8 = fStack_b8;
    FUN_100afc60(&fStack_a8,&fStack_90,1,*(undefined4 *)(iVar7 + 0x208),auStack_78);
    fVar9 = (float10)(*DAT_10121f74)(fStack_30 * _DAT_100de47c,fStack_68 * _DAT_100de47c);
    fVar9 = (float10)FUN_100083f0(this,0,(float)fVar9);
    *(float *)(this + 0x334) = (float)fVar9;
    break;
  default:
    *(undefined4 *)(this + 0x334) = 0x43a80000;
  }
  fVar9 = FUN_1009d820((int)this);
  *(float *)(*(int *)(this + 4) + 0x17c) = (float)fVar9;
LAB_1009e126:
  if (*DAT_10122044 < *(float *)(this + 0x350) + (float)_DAT_100e4138) {
    *(float *)(*(int *)(this + 4) + 0x138) =
         (float)*(int *)(this + 0x314) * (float)_DAT_100dd650 + *(float *)(this + 0x318);
    return;
  }
  if (*(float *)(this + 0x350) + (float)_DAT_100e08f0 <= *DAT_10122044) {
    return;
  }
  *(float *)(*(int *)(this + 4) + 0x138) =
       ((_DAT_100dd5d8 - (*DAT_10122044 - *(float *)(this + 0x350))) * _DAT_100dd614 + _DAT_100dd618
       ) * (float)*(int *)(this + 0x314) + *(float *)(this + 0x318);
  return;
}

