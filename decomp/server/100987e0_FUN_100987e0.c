
void __fastcall FUN_100987e0(int param_1)

{
  int iVar1;
  int iVar2;
  float in_stack_ffffffe0;
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  int iVar3;
  
  if (DAT_10122060 == 0) {
    (*DAT_10121efc)();
    return;
  }
  iVar2 = *(int *)(DAT_10122060 + 0x38);
  iVar1 = DAT_10122060;
  while (iVar3 = iVar2, iVar3 != 0) {
    if (param_1 == iVar3) {
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = 0;
      break;
    }
    iVar1 = iVar3;
    iVar2 = *(int *)(iVar3 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    if (iVar2 == param_1) {
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
    }
    else {
      for (iVar1 = *(int *)(iVar2 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
        if (iVar1 == param_1) {
          *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
          break;
        }
        iVar2 = iVar1;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = DAT_10122790;
  while (DAT_10122790 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x1c);
    iVar3 = 100;
    FUN_10003850(&stack0xffffffe0,&DAT_10121dd8);
    FUN_100637d0(iVar1,in_stack_ffffffe0,in_stack_ffffffe4,in_stack_ffffffe8,iVar3);
    iVar3 = 100;
    FUN_10003850(&stack0xffffffe0,&DAT_10121dd8);
    FUN_100639c0(iVar1,in_stack_ffffffe0,in_stack_ffffffe4,in_stack_ffffffe8,iVar3);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    iVar1 = iVar2;
    iVar2 = DAT_10122790;
  }
  if (((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x10000) != 0) && (iVar1 = 0, 0 < DAT_1012279c))
  {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + 8 + iVar2) == *(int *)(param_1 + 4)) {
        *(undefined4 *)(iVar3 + 8 + iVar2) = 0;
        iVar2 = DAT_10122790;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar1 < DAT_1012279c);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 != 0) {
    FUN_100b5a20(&DAT_101323a8,iVar1,2);
  }
  return;
}

