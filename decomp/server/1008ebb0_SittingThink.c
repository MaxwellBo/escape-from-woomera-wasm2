
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSittingScientist::SittingThink(void) */

void __thiscall CSittingScientist::SittingThink(CSittingScientist *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  
                    /* 0x8ebb0  201  ?SittingThink@CSittingScientist@@QAEXXZ */
  FUN_10007fc0((int)this,0.0);
  iVar2 = FUN_1009b350((int *)this);
  if (iVar2 == 0) {
    if (*(int *)(this + 0xd4) == 0) goto LAB_1008ee7f;
    iVar2 = (*DAT_10121f70)(0,99);
    bVar1 = *(float *)(this + 0x398) == _DAT_100dd5f8;
    *(undefined4 *)(this + 0x394) = 0;
    if ((bVar1) || (*DAT_10122044 <= *(float *)(this + 0x398))) {
      if (iVar2 < 0x1e) {
        *(int *)(*(int *)(this + 4) + 0x128) = *(int *)(this + 0x390) + 4;
        piVar3 = FUN_1009af10(this,(uint)(((byte)this[0x308] & 8) == 0));
        iVar2 = FUN_1008eed0((int *)this);
        if ((iVar2 == 0) || (piVar3 == (int *)0x0)) {
          iVar2 = (*DAT_10121f70)(0,8);
          *(int *)(this + 0x394) = (iVar2 + -4) * 10;
          *(int *)(*(int *)(this + 4) + 0x128) = *(int *)(this + 0x390) + 4;
        }
        else {
          iVar2 = piVar3[1];
          iVar4 = *(int *)(this + 4);
          fVar5 = FUN_10060520((int)this,*(float *)(iVar2 + 8) - *(float *)(iVar4 + 8),
                               *(float *)(iVar2 + 0xc) - *(float *)(iVar4 + 0xc),
                               *(float *)(iVar2 + 0x10) - *(float *)(iVar4 + 0x10));
          iVar2 = *(int *)(this + 4);
          fVar5 = fVar5 - (float10)*(float *)(iVar2 + 0x54);
          if ((float10)_DAT_100ddaec < fVar5) {
            fVar5 = fVar5 - (float10)_DAT_100ddae8;
          }
          if (fVar5 < (float10)_DAT_100de530) {
            fVar5 = fVar5 + (float10)_DAT_100ddae8;
          }
          if (fVar5 <= (float10)_DAT_100dd5f8) {
            iVar4 = *(int *)(this + 0x390) + 1;
LAB_1008ee55:
            *(int *)(iVar2 + 0x128) = iVar4;
          }
          else {
            *(undefined4 *)(iVar2 + 0x128) = *(undefined4 *)(this + 0x390);
          }
        }
      }
      else if (iVar2 < 0x3c) {
        *(int *)(*(int *)(this + 4) + 0x128) = *(int *)(this + 0x390) + 4;
        iVar2 = (*DAT_10121f70)(0,8);
        *(int *)(this + 0x394) = (iVar2 + -4) * 10;
        iVar2 = (*DAT_10121f70)(0,99);
        if (iVar2 < 5) {
          FUN_1008eed0((int *)this);
        }
      }
      else if (iVar2 < 0x50) {
        *(int *)(*(int *)(this + 4) + 0x128) = *(int *)(this + 0x390) + 3;
      }
      else if (iVar2 < 100) {
        iVar2 = *(int *)(this + 4);
        iVar4 = *(int *)(this + 0x390) + 2;
        goto LAB_1008ee55;
      }
    }
    else {
      FUN_1009b1d0((int *)this);
      *(int *)(*(int *)(this + 4) + 0x128) = *(int *)(this + 0x390) + 2;
      *(undefined4 *)(this + 0x398) = 0;
    }
    FUN_10008190((int)this);
    *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
    fVar6 = (float)*(int *)(this + 0x394);
  }
  else {
    piVar3 = FUN_1009af10(this,1);
    if (piVar3 == (int *)0x0) goto LAB_1008ee7f;
    iVar2 = piVar3[1];
    iVar4 = *(int *)(this + 4);
    fVar5 = FUN_10060520((int)this,*(float *)(iVar2 + 8) - *(float *)(iVar4 + 8),
                         *(float *)(iVar2 + 0xc) - *(float *)(iVar4 + 0xc),
                         *(float *)(iVar2 + 0x10) - *(float *)(iVar4 + 0x10));
    iVar2 = *(int *)(this + 4);
    fVar5 = fVar5 - (float10)*(float *)(iVar2 + 0x54);
    if ((float10)_DAT_100ddaec < fVar5) {
      fVar5 = fVar5 - (float10)_DAT_100ddae8;
    }
    if (fVar5 < (float10)_DAT_100de530) {
      fVar5 = fVar5 + (float10)_DAT_100ddae8;
    }
    if (fVar5 <= (float10)_DAT_100dd5f8) {
      *(int *)(iVar2 + 0x128) = *(int *)(this + 0x390) + 1;
    }
    else {
      *(undefined4 *)(iVar2 + 0x128) = *(undefined4 *)(this + 0x390);
    }
    FUN_10008190((int)this);
    fVar6 = 0.0;
    *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
  }
  FUN_10008360(this,0,fVar6);
LAB_1008ee7f:
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

