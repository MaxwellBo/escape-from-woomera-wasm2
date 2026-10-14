
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1000fb20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int aiStack_20 [2];
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if ((*(float *)(param_1 + 0x30c) < *DAT_10122044) && (*(int *)(param_1 + 0x318) < 0x14)) {
    iVar1 = *(int *)(param_1 + 4);
    uStack_4 = *(undefined4 *)(iVar1 + 0x10);
    fStack_8 = *(float *)(iVar1 + 0xc) - _DAT_100ddac8;
    fStack_c = *(float *)(iVar1 + 8) - _DAT_100ddac8;
    uStack_10 = *(undefined4 *)(iVar1 + 0x10);
    fStack_14 = *(float *)(iVar1 + 0xc) + _DAT_100ddac8;
    fStack_18 = *(float *)(iVar1 + 8) + _DAT_100ddac8;
    iVar1 = FUN_100ae980(aiStack_20,2,&fStack_c,&fStack_18,0x20);
    iVar2 = 0;
    if (0 < iVar1) {
      piVar3 = aiStack_20;
      do {
        if (*piVar3 != param_1) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < iVar1);
    }
    return 1;
  }
  return 0;
}

