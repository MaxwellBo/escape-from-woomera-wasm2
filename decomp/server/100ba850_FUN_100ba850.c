
undefined4 * __thiscall FUN_100ba850(void *this,byte param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar2 = *(undefined **)this;
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
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100c8ce6((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((param_1 & 1) != 0) {
    FUN_100c8ce6(this);
  }
  return this;
}

