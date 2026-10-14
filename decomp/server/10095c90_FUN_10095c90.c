
void __cdecl FUN_10095c90(int param_1,int param_2)

{
  int iVar1;
  
  if (DAT_10131058 != 0) {
    if (param_2 == -1) {
      iVar1 = (param_1 + 7) * 0x20;
      *(undefined4 *)(DAT_10131058 + 0xbc) = *(undefined4 *)(iVar1 + DAT_10131058);
    }
    else {
      iVar1 = (param_1 + 7) * 0x20;
      *(undefined4 *)((param_2 + 7) * 0x20 + DAT_10131058) = *(undefined4 *)(iVar1 + DAT_10131058);
    }
    *(undefined4 *)(iVar1 + DAT_10131058) = *(undefined4 *)(DAT_10131058 + 0xb8);
    *(int *)(DAT_10131058 + 0xb8) = param_1;
  }
  return;
}

