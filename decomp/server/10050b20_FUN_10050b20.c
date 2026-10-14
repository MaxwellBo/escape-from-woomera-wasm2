
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __thiscall FUN_10050b20(void *this,int param_1)

{
  bool bVar1;
  float *pfVar2;
  undefined3 extraout_var;
  void *pvVar3;
  int iVar4;
  undefined **ppuVar5;
  float10 fVar6;
  
  if (*(int *)((int)this + 0x344) != 0) {
    if ((*(uint *)((int)this + 0x15c) & 0x20000) == 0) {
      if ((*(uint *)((int)this + 0x15c) & 0x10000) != 0) {
        return &PTR_DAT_1010efd0;
      }
    }
    else {
      pfVar2 = (float *)(**(code **)(*(int *)this + 0x1e4))();
      if (pfVar2 != (float *)0x0) {
        FUN_10060260(this,*pfVar2,pfVar2[1],pfVar2[2]);
        fVar6 = FUN_1005cd30((int)this,pfVar2);
        if ((float10)_DAT_100ddaf4 <= fVar6) {
          return &PTR_DAT_1010efd0;
        }
      }
    }
    return &PTR_DAT_1010ef98;
  }
  switch(param_1) {
  case 1:
    bVar1 = FUN_10019450((uint *)((int)this + 0x308));
    if ((((CONCAT31(extraout_var,bVar1) != 0) &&
         (pvVar3 = (void *)FUN_10019410((uint *)((int)this + 0x308)), pvVar3 != this)) &&
        (*(int *)((int)this + 0x344) == 0)) && (iVar4 = (*DAT_10121f70)(0,0x1d), iVar4 < 1)) {
      return &PTR_DAT_1010ef58;
    }
    break;
  case 0x18:
    return &PTR_DAT_1010eef0;
  case 0x1a:
    return &PTR_DAT_1010f008;
  case 0x1f:
    return &PTR_DAT_1010eea0;
  case 0x29:
    if (*(int *)((int)this + 0x1d8) == 2) {
      iVar4 = (*DAT_10121e4c)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
      if ((iVar4 != 0) && (iVar4 = (*DAT_10121f20)(iVar4), iVar4 != 0)) {
        return &PTR_DAT_1010f090;
      }
      return &PTR_DAT_1010f0d0;
    }
    break;
  case 0x2b:
    return &PTR_DAT_1010f030;
  case 0x2c:
    return &PTR_DAT_1010f060;
  }
  ppuVar5 = FUN_10096f50(this,param_1);
  return ppuVar5;
}

