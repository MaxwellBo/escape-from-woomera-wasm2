
void __fastcall FUN_1003f3e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),1,
               PTR_s_garg_gar_flameoff1_wav_1010cc84,0x3f800000,0x3f4ccccd,0,100);
  piVar1 = (int *)(param_1 + 0x30c);
  iVar2 = 4;
  do {
    if (*piVar1 != 0) {
      FUN_100b0ef0(*piVar1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

