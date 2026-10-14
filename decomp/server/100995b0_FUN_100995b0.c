
bool __fastcall FUN_100995b0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  uVar2 = FUN_10019410((uint *)(param_1 + 0xc0));
  bVar1 = FUN_100b0030(*(int *)(param_1 + 0x158),uVar2);
  return (bool)('\x01' - (CONCAT31(extraout_var,bVar1) != 0));
}

