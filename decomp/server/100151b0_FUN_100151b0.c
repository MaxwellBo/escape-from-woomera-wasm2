
void __fastcall FUN_100151b0(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = FUN_100b5a50(&DAT_101323a8,*(int *)(param_1 + 0xb8));
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 == 0) {
LAB_100151f1:
    iVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar2 = 2;
        goto LAB_100151f3;
      }
      if (iVar2 == 1) goto LAB_100151f1;
      if (iVar2 != 0) goto LAB_100151f3;
    }
    iVar2 = 1;
  }
LAB_100151f3:
  pbVar3 = FUN_100b58c0(&DAT_101323a8,*(int *)(param_1 + 0xb8));
  if (pbVar3 == (byte *)0x0) {
    FUN_100b5980(&DAT_101323a8,*(int *)(param_1 + 0xb8),*(int *)(DAT_10122044 + 0xc),iVar2);
    return;
  }
  FUN_100b5a20(&DAT_101323a8,*(int *)(param_1 + 0xb8),iVar2);
  return;
}

