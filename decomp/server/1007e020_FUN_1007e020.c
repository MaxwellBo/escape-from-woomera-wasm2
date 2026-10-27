
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007e020(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(float *)(param_1 + 0x4a4) <= *DAT_10122044) {
    *(float *)(param_1 + 0x4a4) = *DAT_10122044 + (float)_DAT_100dd5f0;
    lVar3 = __ftol();
    uVar1 = (uint)(byte)lVar3;
    if (uVar1 != *(uint *)(param_1 + 0x4a8)) {
      *(uint *)(param_1 + 0x4a8) = uVar1;
      (*DAT_10121ec0)(1,DAT_101248ec,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
      (*DAT_10121ec8)(uVar1);
      (*DAT_10121ec4)();
    }
    iVar2 = (*DAT_10121f70)(0,3);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x4a0) = 0x447a0000;
    }
  }
  return;
}

