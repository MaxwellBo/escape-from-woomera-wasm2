
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTentacle::DieThink(void) */

void __thiscall CTentacle::DieThink(CTentacle *this)

{
  CTentacle *pCVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
                    /* 0x9e2e0  73  ?DieThink@CTentacle@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_10008240((int *)this);
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 0x128))(0x18);
  if (*(int *)(this + 0xd4) != 0) {
    if (*(int *)(*(int *)(this + 4) + 0x128) == *(int *)(this + 0x30c)) {
      switch(*(int *)(this + 0x30c)) {
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
        iVar3 = (*DAT_10121f70)(0,2);
        *(int *)(this + 0x30c) = iVar3 + 0x2d;
        break;
      case 0x30:
      case 0x31:
      case 0x32:
        FUN_100b0ef0((int)this);
        return;
      }
    }
    pCVar1 = this + 0x314;
    iVar3 = FUN_10008480(this,*(int *)(*(int *)(this + 4) + 0x128),*(int *)(this + 0x30c),
                         (int *)pCVar1);
    *(int *)(*(int *)(this + 4) + 0x128) = iVar3;
    if (*(int *)pCVar1 < 1) {
      *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0x437f0000;
    }
    else {
      *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
    }
    FUN_10008190((int)this);
    fVar2 = _DAT_100dd5f8;
    switch(*(undefined4 *)(*(int *)(this + 4) + 0x128)) {
    case 10:
    case 0xb:
    case 0x14:
    case 0x15:
    case 0x1e:
    case 0x1f:
    case 0x28:
    case 0x29:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
      fVar4 = (float10)(*DAT_10121f74)((float)*(int *)pCVar1 - (float)_DAT_100dd608,
                                       (float)*(int *)pCVar1 + (float)_DAT_100dd608);
      *(float *)(*(int *)(this + 4) + 0x138) = (float)fVar4;
      *(float *)(*(int *)(this + 4) + 0xac) = _DAT_100ddaec + *(float *)(this + 0x308);
      return;
    default:
      *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0x3fc00000;
      *(float *)(*(int *)(this + 4) + 0xac) = fVar2 + *(float *)(this + 0x308);
    }
  }
  return;
}

