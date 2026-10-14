
undefined * __thiscall FUN_100bd350(void *this,byte param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  puVar5 = *(undefined4 **)((int)this + 4);
  if (puVar5 != *(undefined4 **)((int)this + 8)) {
    do {
      puVar2 = (undefined4 *)*puVar5;
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined *)*puVar2;
        if (puVar3 != (undefined *)0x0) {
          piVar6 = *(int **)(puVar3 + 4);
          if (piVar6 != *(int **)(puVar3 + 8)) {
            do {
              if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
                (*(code *)**(undefined4 **)*piVar6)(1);
              }
              piVar6 = piVar6 + 1;
            } while (piVar6 != *(int **)(puVar3 + 8));
          }
          FUN_100bd430((int)puVar3);
          FUN_100c8ce6(puVar3);
        }
        iVar4 = puVar2[2];
        if (iVar4 != 0) {
          cVar1 = *(char *)(iVar4 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_100c8ce6((char *)(iVar4 + -1));
          }
          else {
            *(char *)(iVar4 + -1) = cVar1 + -1;
          }
        }
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        FUN_100c8ce6((undefined *)puVar2);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)((int)this + 8));
  }
  FUN_100c8ce6(*(undefined **)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    FUN_100c8ce6(this);
  }
  return this;
}

