
void __fastcall FUN_100bd0c0(undefined4 *param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar2 = (undefined *)*param_1;
  if (puVar2 != (undefined *)0x0) {
    piVar4 = *(int **)(puVar2 + 4);
    if (piVar4 != *(int **)(puVar2 + 8)) {
      do {
        if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar4)(1);
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 != *(int **)(puVar2 + 8));
    }
    FUN_100c8ce6(*(undefined **)(puVar2 + 4));
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    FUN_100c8ce6(puVar2);
  }
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar3 + -1) = cVar1 + -1;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    FUN_100c8ce6((char *)(iVar3 + -1));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

