
uint __fastcall FUN_100a6570(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)((int)param_1 + 4) + 0x1a0);
  if ((uVar1 & 0x10000) != 0) {
    iVar2 = FUN_100a6690(param_1);
    return -(uint)(iVar2 != 0) & 2;
  }
  return uVar1 >> 0xe & 2;
}

