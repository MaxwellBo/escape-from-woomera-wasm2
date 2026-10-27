
void __fastcall FUN_10021b70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)(*DAT_100a50c8)();
  puVar1 = (undefined4 *)(param_1 + 0x150);
  iVar2 = 0x80;
  do {
    if ((float10)*(double *)(puVar1 + 2) < fVar3) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    }
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

