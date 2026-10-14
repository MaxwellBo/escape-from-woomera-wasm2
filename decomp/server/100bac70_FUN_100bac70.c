
void __fastcall FUN_100bac70(void *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(int *)((int)param_1 + 4) == 0) ||
      (cVar1 = *(char *)(*(int *)((int)param_1 + 4) + -1), cVar1 == '\0')) || (cVar1 == -1))
  goto LAB_100bacd8;
  uVar2 = *(uint *)((int)param_1 + 8);
  if (0xfffffffd < uVar2) {
    FUN_100d9d61();
  }
  iVar3 = *(int *)((int)param_1 + 4);
  if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (iVar3 != 0) {
        FUN_100bbb10(param_1,0);
      }
      goto LAB_100bacd8;
    }
    if (uVar2 <= *(uint *)((int)param_1 + 0xc)) goto LAB_100bacd8;
  }
  else if (uVar2 == 0) {
    *(char *)(iVar3 + -1) = cVar1 + -1;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)((int)param_1 + 8) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    goto LAB_100bacd8;
  }
  FUN_100bcd30(uVar2);
LAB_100bacd8:
  if (*(int *)((int)param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)((int)param_1 + 4) + -1) = 0xff;
  }
  return;
}

