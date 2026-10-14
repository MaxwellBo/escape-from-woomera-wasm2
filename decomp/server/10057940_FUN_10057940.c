
void __fastcall FUN_10057940(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 4);
  if (*(int *)(iVar1 + 0x1cc) == 0) {
    (*DAT_10121e60)(*(undefined4 *)(iVar1 + 0x208));
    return;
  }
  if ((*(byte *)(iVar1 + 0x1a0) & 1) == 0) {
    *(undefined4 *)((int)param_1 + 0xb8) = 2;
  }
  else {
    *(undefined4 *)((int)param_1 + 0xb8) = 0;
  }
  FUN_100577d0(param_1);
  return;
}

