
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a5d50(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0xfffffff0;
  fVar2 = (float10)(*DAT_10121eec)(s_showtriggers_10103c24);
  if ((fVar2 == (float10)_DAT_100dd5f8) &&
     (iVar1 = *(int *)(param_1 + 4), (*(byte *)(iVar1 + 0x1a0) & 1) == 0)) {
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) | 0x80;
    return;
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  return;
}

