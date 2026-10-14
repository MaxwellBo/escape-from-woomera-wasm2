
void __fastcall FUN_10054be0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x344);
  iVar2 = 8;
  do {
    if (*piVar1 != 0) {
      FUN_100b0ef0(*piVar1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
  FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),1,
               s_debris_zap4_wav_101064c8,0,0,0x20,100);
  return;
}

