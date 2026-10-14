
void __fastcall FUN_100577d0(void *param_1)

{
  int iVar1;
  
  if (0x1f < *(int *)((int)param_1 + 0x60)) {
    switch(*(undefined4 *)((int)param_1 + 0xb8)) {
    case 0:
      iVar1 = *(int *)((int)param_1 + 0xc0);
      if (iVar1 == 0) {
        FUN_100577a0(param_1,(int)&DAT_10103c18 - *(int *)(DAT_10122044 + 0x98));
        return;
      }
      break;
    case 1:
      iVar1 = *(int *)((int)param_1 + 0xc4);
      if (iVar1 == 0) {
        FUN_100577a0(param_1,(int)&DAT_10103c18 - *(int *)(DAT_10122044 + 0x98));
        return;
      }
      break;
    case 2:
      if (*(int *)((int)param_1 + 0xd4) != 0) {
        FUN_100577a0(param_1,*(int *)((int)param_1 + 0xd4));
        return;
      }
      iVar1 = *(int *)((int)param_1 + 0xbc);
      if (iVar1 == 0) {
        FUN_100577a0(param_1,(int)&DAT_1010ff3c - *(int *)(DAT_10122044 + 0x98));
        return;
      }
      break;
    case 3:
      iVar1 = *(int *)((int)param_1 + 200);
      if (iVar1 == 0) {
        FUN_100577a0(param_1,(int)&DAT_1010ff3c - *(int *)(DAT_10122044 + 0x98));
        return;
      }
      break;
    default:
      goto switchD_100577ee_default;
    }
    iVar1 = FUN_100570c0(iVar1);
    FUN_100577a0(param_1,iVar1);
    return;
  }
  iVar1 = FUN_100570c0(*(int *)((int)param_1 + 0x60));
  *(int *)((int)param_1 + 0xd8) = iVar1;
switchD_100577ee_default:
  return;
}

