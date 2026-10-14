
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000b9a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x378) < 1) {
    iVar1 = (*DAT_10121f70)(0,99);
    if ((float)iVar1 <= *(float *)(*(int *)(param_1 + 4) + 0x160)) goto LAB_1000ba57;
  }
  (*DAT_10121ec0)(4,0x17,*(int *)(param_1 + 4) + 8,0);
  (*DAT_10121ec8)(5);
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
  (*DAT_10121edc)(*(float *)(*(int *)(param_1 + 4) + 0x10) - _DAT_100ddac8);
  (*DAT_10121ed0)((int)DAT_10131cf2);
  iVar1 = (*DAT_10121f70)(0,9);
  (*DAT_10121ec8)(iVar1 + 0x14);
  (*DAT_10121ec8)(0xc);
  (*DAT_10121ec4)();
LAB_1000ba57:
  if (0 < *(int *)(param_1 + 0x378)) {
    *(int *)(param_1 + 0x378) = *(int *)(param_1 + 0x378) + -1;
  }
  return;
}

