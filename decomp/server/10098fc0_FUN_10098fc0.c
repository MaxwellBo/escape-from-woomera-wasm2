
void __cdecl FUN_10098fc0(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_c [3];
  
  puVar1 = (undefined4 *)
           FUN_10099030(local_c,*(float *)(param_1 + 0x50),*(float *)(param_1 + 0x54),
                        *(float *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x44) = *puVar1;
  *(undefined4 *)(param_1 + 0x48) = puVar1[1];
  *(undefined4 *)(param_1 + 0x4c) = puVar1[2];
  *(undefined4 *)(param_1 + 0x50) = DAT_10121dd8;
  *(undefined4 *)(param_1 + 0x54) = DAT_10121ddc;
  *(undefined4 *)(param_1 + 0x58) = DAT_10121de0;
  return;
}

