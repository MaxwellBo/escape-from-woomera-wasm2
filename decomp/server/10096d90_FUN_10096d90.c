
void __fastcall FUN_10096d90(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  void *pvVar2;
  
  FUN_10004f10((int)param_1);
  if (((param_1[0x76] == 1) || (param_1[0x76] == 3)) && ((param_1[0x57] & 0x10000U) != 0)) {
    bVar1 = FUN_10019450((uint *)(param_1 + 0xc2));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      pvVar2 = (void *)FUN_10019410((uint *)(param_1 + 0x58));
      FUN_100964e0(param_1,pvVar2);
    }
  }
  FUN_10062180(param_1);
  return;
}

