
void __fastcall FUN_10011020(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x50) = DAT_10121dd8;
  *(undefined4 *)(iVar2 + 0x54) = DAT_10121ddc;
  *(undefined4 *)(iVar2 + 0x58) = DAT_10121de0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x1a4);
    *puVar1 = *puVar1 | 0x2000000;
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  if (0x1f < iVar2) {
    (*DAT_10121eb4)(iVar2,&DAT_10103c18);
    return;
  }
  if (iVar2 < -0x1f) {
    (*DAT_10121eb4)(-iVar2,&DAT_10103c14);
  }
  return;
}

