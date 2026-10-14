
void __cdecl FUN_10099880(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x44);
  if (((*(float *)(param_1 + 0x44) == DAT_10121dd8) && (*(float *)(param_1 + 0x48) == DAT_10121ddc))
     && (*(float *)(param_1 + 0x4c) == DAT_10121de0)) {
    if ((*(uint *)(param_1 + 0x1a0) & 0x40) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
      return;
    }
    if ((*(uint *)(param_1 + 0x1a0) & 0x80) != 0) {
      *puVar1 = 0x3f800000;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      return;
    }
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

