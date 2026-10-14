
int __fastcall FUN_10029570(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = *(uint *)(iVar2 + 0x148) & 0xf;
  if ((uVar1 != 0) && (uVar1 != 3)) {
    iVar2 = (*DAT_10121f28)(*(uint *)(iVar2 + 0x110) & 0xfff);
    if (iVar2 != 0) {
      return iVar2 + 0x88;
    }
    return *(int *)(param_1 + 4) + 0x50;
  }
  return iVar2 + 0x50;
}

