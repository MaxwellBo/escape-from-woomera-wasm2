
char * __thiscall FUN_100ba550(void *this,char *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  
  if (this == param_1) {
    return this;
  }
  puVar1 = *(undefined **)((int)this + 4);
  if (puVar1 == *(undefined **)(param_1 + 4)) {
    if (*param_1 != '\0') {
      *(undefined1 *)this = 1;
    }
    *param_1 = '\0';
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
    return this;
  }
  if ((*(char *)this != '\0') && (puVar1 != (undefined *)0x0)) {
    puVar4 = *(undefined4 **)(puVar1 + 4);
    if (puVar4 != *(undefined4 **)(puVar1 + 8)) {
      do {
        puVar2 = (undefined4 *)*puVar4;
        if (puVar2 != (undefined4 *)0x0) {
          puVar3 = (undefined *)*puVar2;
          if (puVar3 != (undefined *)0x0) {
            FUN_100ba630((int)puVar3);
            FUN_100c8ce6(puVar3);
          }
          if ((void *)puVar2[1] != (void *)0x0) {
            FUN_100bd350((void *)puVar2[1],1);
          }
          FUN_100c8ce6((undefined *)puVar2);
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != *(undefined4 **)(puVar1 + 8));
    }
    FUN_100c8ce6(*(undefined **)(puVar1 + 4));
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    FUN_100c8ce6(puVar1);
  }
  *(char *)this = *param_1;
  *param_1 = '\0';
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

