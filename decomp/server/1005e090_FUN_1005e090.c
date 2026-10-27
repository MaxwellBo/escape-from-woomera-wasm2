
undefined4 __fastcall FUN_1005e090(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *this;
  
  iVar5 = 3;
  this = (uint *)(param_1 + 0x188);
  do {
    bVar2 = FUN_10019450(this);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      piVar3 = (int *)FUN_10019460(this);
      iVar4 = (**(code **)(*piVar3 + 0xb8))();
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x170 + iVar5 * 8);
        puVar1 = (undefined4 *)(param_1 + 400 + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x174 + iVar5 * 8);
        *(undefined4 *)(param_1 + 0x2a8) = *puVar1;
        *(undefined4 *)(param_1 + 0x2ac) = puVar1[1];
        *(undefined4 *)(param_1 + 0x2b0) = puVar1[2];
        return 1;
      }
      FUN_10019420(this,0);
    }
    iVar5 = iVar5 + -1;
    this = this + -2;
  } while (-1 < iVar5);
  return 0;
}

