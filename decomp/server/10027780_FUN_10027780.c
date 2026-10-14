
void __thiscall FUN_10027780(CBaseDoor *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  
  FUN_10019420(param_1 + 0xc0,param_2);
  bVar1 = FUN_100b0030(*(int *)(param_1 + 0x158),param_2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    if (param_4 == 1) {
      if (*(int *)(param_1 + 0xdc) != 1) {
        return;
      }
      FUN_10026660(*(int *)(param_1 + 4),(int *)(param_1 + 0x160),0,0.0);
      CBaseDoor::DoorGoUp(param_1);
      return;
    }
    if (param_4 == 0) {
      if (*(int *)(param_1 + 0xdc) != 0) {
        return;
      }
      CBaseDoor::DoorGoDown(param_1);
      return;
    }
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x20) != 0) {
      FUN_10027840(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0xdc) == 1) {
    FUN_10027840(param_1);
  }
  return;
}

