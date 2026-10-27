
void __fastcall FUN_1003c8b0(void *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(int *)((int)param_1 + 0xc4) != 0) && (DAT_100b6620 != 0)) {
    if (*(int *)((int)param_1 + 0x208) != 0) {
      FUN_1003c9a0(param_1);
      return;
    }
    if (DAT_100a4fe4 == 0) {
      FUN_1003cb10((int)param_1);
      FUN_1003d490((int)param_1);
      FUN_1003cac0(param_1,*(int **)((int)param_1 + 200));
      *(undefined4 *)((int)param_1 + 0x20c) = DAT_100a3a64;
      FUN_1003dcc0((int)param_1);
      iVar4 = 2;
      iVar1 = (*DAT_100a5088)();
      if (2 < iVar1) {
        do {
          pcVar2 = (char *)(*DAT_100a508c)(iVar4 + -1);
          if (pcVar2 != (char *)0x0) {
            uVar3 = FUN_10038f90(*(void **)((int)param_1 + 0x208),(int)*pcVar2);
            if ((char)uVar3 != '\0') {
              FUN_1003c9a0(param_1);
            }
          }
          iVar4 = iVar4 + 1;
          iVar1 = (*DAT_100a5088)();
        } while (iVar4 < iVar1);
      }
    }
  }
  return;
}

