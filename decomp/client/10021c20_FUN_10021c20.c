
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10021c20(void *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = (*DAT_100a50c4)();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    fVar2 = (float10)(*DAT_100a50c8)();
    FUN_10021c70(param_1,*(undefined4 *)((int)param_1 + 0xc84),iVar1,
                 SUB84((double)(fVar2 + (float10)_DAT_10059ea0),0),
                 (int)((ulonglong)(double)(fVar2 + (float10)_DAT_10059ea0) >> 0x20));
  }
  return;
}

