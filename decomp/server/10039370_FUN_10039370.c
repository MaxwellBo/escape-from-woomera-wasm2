
undefined4 __thiscall FUN_10039370(void *this,undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if ((*(int *)((int)this + 0xb8) != 0) || (*(int *)((int)this + 0xbc) != 0)) {
    return 0;
  }
  if ((*(int *)((int)this + 0x134) != 0) &&
     (bVar1 = FUN_100b0030(*(int *)((int)this + 0x134),param_1), CONCAT31(extraout_var,bVar1) == 0))
  {
    return 0;
  }
  *(int *)((int)this + 0xb8) = param_2;
  if (*(CLaserSpot **)((int)this + 0xc4) != (CLaserSpot *)0x0) {
    CLaserSpot::Revive(*(CLaserSpot **)((int)this + 0xc4));
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return 1;
}

