
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __thiscall FUN_1004c960(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var_00;
  void *pvVar4;
  int *piVar5;
  undefined3 extraout_var_01;
  undefined **ppuVar6;
  
  switch(param_1) {
  case 10:
    return &PTR_DAT_1010e1a0;
  default:
    ppuVar6 = FUN_10096f50(this,param_1);
    return ppuVar6;
  case 0xe:
    bVar1 = FUN_10019450((uint *)((int)this + 0x308));
    if ((CONCAT31(extraout_var_00,bVar1) == 0) ||
       (pvVar4 = (void *)FUN_10019410((uint *)((int)this + 0x308)), pvVar4 == this)) {
      return &PTR_DAT_1010e0f0;
    }
    break;
  case 0x12:
    bVar1 = FUN_10019450((uint *)((int)this + 0x308));
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar2 = FUN_100961f0(this,0xc);
      if ((iVar2 != 0) && (iVar2 = (*DAT_10121f70)(0,1), iVar2 != 0)) {
        return &PTR_DAT_1010e3c8;
      }
    }
    else if (((DAT_10121df0 == 3) && ((*(uint *)((int)this + 0x15c) & 0x1000) != 0)) &&
            (iVar2 = FUN_100961f0(this,0xc), iVar2 != 0)) {
      iVar2 = FUN_1004a210((int)this);
      if (iVar2 != 0) {
        FUN_100945d0(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),(byte *)s_HG_THROW_1010e8b4);
        FUN_1004a250((int)this);
      }
      return &PTR_DAT_1010e3f8;
    }
    return &PTR_DAT_1010e370;
  case 0x13:
    return &PTR_DAT_1010e448;
  case 0x18:
    iVar2 = (*DAT_10121f70)(0,9);
    if (iVar2 == 0) {
      uVar3 = (*DAT_10121f70)(0,1);
      *(undefined4 *)((int)this + 0x35c) = uVar3;
    }
    if (*(int *)((int)this + 0x35c) != 0) {
      return &PTR_DAT_1010e5d8;
    }
    return &PTR_DAT_1010e558;
  case 0x19:
    return &PTR_DAT_1010e610;
  case 0x29:
    bVar1 = FUN_10019450((uint *)((int)this + 0x160));
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      return &PTR_DAT_1010e098;
    }
    break;
  case 0x2b:
    piVar5 = (int *)FUN_10019460((uint *)((int)this + 0x160));
    iVar2 = (**(code **)(*piVar5 + 0xcc))();
    if ((iVar2 != 0) && (*(int *)((int)this + 0x360) != 0)) {
      *(undefined4 *)((int)this + 0x360) = 0;
      return &PTR_DAT_1010e248;
    }
    return &PTR_DAT_1010e2e0;
  case 0x2c:
    return &PTR_DAT_1010e130;
  case 0x2d:
    return &PTR_DAT_1010e4a0;
  case 0x2e:
    return &PTR_DAT_1010e4d8;
  case 0x2f:
    return &PTR_DAT_1010e160;
  case 0x30:
    iVar2 = *(int *)((int)this + 4);
    if (_DAT_100e8b00 < *(float *)(iVar2 + 0x28)) {
      *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) - _DAT_100ddac8;
    }
    return &PTR_DAT_1010e640;
  case 0x31:
    iVar2 = *(int *)((int)this + 4);
    if (_DAT_100e8b00 < *(float *)(iVar2 + 0x28)) {
      *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) - _DAT_100ddac8;
    }
    return &PTR_DAT_1010e670;
  case 0x32:
    return &PTR_DAT_1010e6b8;
  case 0x33:
    return &PTR_DAT_1010e310;
  case 0x34:
    if (((*(uint *)((int)this + 0x15c) & 0x400) != 0) && (iVar2 = FUN_100961f0(this,3), iVar2 != 0))
    {
      ppuVar6 = (undefined **)(**(code **)(*(int *)this + 0x184))(0x18);
      return ppuVar6;
    }
    ppuVar6 = (undefined **)(**(code **)(*(int *)this + 0x184))(0x29);
    return ppuVar6;
  case 0x35:
    ppuVar6 = (undefined **)(**(code **)(*(int *)this + 0x184))(0x12);
    return ppuVar6;
  }
  return &PTR_DAT_1010e060;
}

