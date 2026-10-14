
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __thiscall FUN_1009ba00(void *this,undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined **ppuVar6;
  float10 fVar7;
  
  switch(param_1) {
  case 1:
    uVar1 = *(uint *)((int)this + 0x308);
    if ((uVar1 & 8) == 0) {
      return &PTR_DAT_10117b48;
    }
    if (((uVar1 & 0x10) == 0) &&
       (*(float *)(*(int *)((int)this + 4) + 0x160) <=
        *(float *)(*(int *)((int)this + 4) + 0x1b0) * (float)_DAT_100e1860)) {
      iVar5 = *(int *)this;
      fVar7 = (float10)(*DAT_10121f74)(0x40333333,0x404ccccd,0x3f800000,0x40000000);
      (**(code **)(iVar5 + 0x198))(*(undefined4 *)((int)this + 0x358),(float)fVar7);
      *(uint *)((int)this + 0x308) = *(uint *)((int)this + 0x308) | 0x10;
      return &PTR_DAT_101067e8;
    }
    if (((uVar1 & 0x20) != 0) ||
       (*(float *)(*(int *)((int)this + 4) + 0x1b0) * (float)_DAT_100dd648 <
        *(float *)(*(int *)((int)this + 4) + 0x160))) {
      iVar5 = FUN_1009b210(this);
      if ((iVar5 != 0) && (iVar5 = (*DAT_10121f70)(0,*(int *)((int)this + 0x30c) << 1), iVar5 == 0))
      {
        return &PTR_DAT_10117a90;
      }
      iVar5 = FUN_1009bcc0((int)this);
      if (((iVar5 == 0) && ((*(uint *)((int)this + 0x15c) & 0x200000) != 0)) &&
         (iVar5 = (*DAT_10121f70)(0,6), iVar5 == 0)) {
        iVar5 = (*DAT_10121f28)(1);
        if (iVar5 != 0) {
          FUN_100af200(iVar5 + 0xd0);
          iVar2 = *(int *)((int)this + 4);
          fVar3 = *(float *)(iVar5 + 0x88) - *(float *)(iVar2 + 8);
          fVar4 = *(float *)(iVar5 + 0x8c) - *(float *)(iVar2 + 0xc);
          if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) < _DAT_100ddaf4) &&
             (fVar7 = FUN_100b1010((float *)(iVar5 + 0x88),(float *)(iVar2 + 8),
                                   (float *)(DAT_10122044 + 0x28)),
             (float10)*(float *)((int)this + 0x1c0) <= fVar7)) {
            return &PTR_DAT_10117ca4;
          }
          return &PTR_DAT_10117c90;
        }
        goto switchD_1009ba1d_caseD_2;
      }
      iVar5 = FUN_1009bcc0((int)this);
      if (iVar5 != 0) {
        return &PTR_DAT_10117cd8;
      }
    }
    else {
      iVar5 = *(int *)this;
      fVar7 = (float10)(*DAT_10121f74)(0x40333333,0x404ccccd,0x3f800000,0x40000000);
      (**(code **)(iVar5 + 0x198))(*(undefined4 *)((int)this + 0x35c),(float)fVar7);
      *(uint *)((int)this + 0x308) = *(uint *)((int)this + 0x308) | 0x20;
    }
    break;
  default:
switchD_1009ba1d_caseD_2:
    ppuVar6 = FUN_10026300(this,param_1);
    return ppuVar6;
  case 0xf:
    iVar5 = (*DAT_10121f70)(0,99);
    if (iVar5 < 2) {
      return &PTR_DAT_10117ac8;
    }
    break;
  case 0x2c:
    return &PTR_DAT_10117bb0;
  case 0x2d:
    return &PTR_DAT_10117c20;
  case 0x2e:
    return &PTR_DAT_10117bd8;
  }
  return &PTR_DAT_101067e8;
}

