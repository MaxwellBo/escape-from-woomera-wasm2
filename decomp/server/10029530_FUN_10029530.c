
int __fastcall FUN_10029530(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((byte)*(undefined4 *)(iVar1 + 0x148) & 0xf) == 2) {
    iVar1 = (*DAT_10121f28)(*(uint *)(iVar1 + 0x128) & 0xfff);
    return iVar1 + 0x88;
  }
  return iVar1 + 8;
}

