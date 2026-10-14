
void __fastcall FUN_10096290(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if (*(int *)(param_1 + 0x33c) != 0) {
    bVar1 = FUN_10019450((uint *)(param_1 + 0x308));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar2 = FUN_10019410((uint *)(param_1 + 0x308));
      if (iVar2 == 0) {
        iVar2 = param_1;
      }
      *(uint *)(iVar2 + 0x330) = *(uint *)(iVar2 + 0x330) & ~*(uint *)(param_1 + 0x33c);
      *(undefined4 *)(param_1 + 0x33c) = 0;
    }
  }
  return;
}

