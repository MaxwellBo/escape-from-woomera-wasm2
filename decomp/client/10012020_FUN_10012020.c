
void __thiscall FUN_10012020(void *this,undefined *param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0x100;
  do {
    for (pvVar1 = *(void **)((int)this + 0x14); pvVar1 != this;
        pvVar1 = *(void **)((int)pvVar1 + 0x14)) {
      (*(code *)param_1)(pvVar1);
    }
    this = (void *)((int)this + 0x18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

