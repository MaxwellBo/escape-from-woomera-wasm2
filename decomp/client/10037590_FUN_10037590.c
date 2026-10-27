
void __thiscall FUN_10037590(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *this;
  
  puVar4 = FUN_10012170();
  cVar3 = FUN_100133d0((int)puVar4);
  iVar2 = param_3;
  iVar1 = param_2;
  if (cVar3 != '\0') {
    iVar6 = 0;
    this = (void *)(param_1 + 0xc68);
    while( true ) {
      uVar5 = FUN_10034250(this,iVar1,iVar2,&param_2,&param_3);
      if ((char)uVar5 != '\0') break;
      iVar6 = iVar6 + 1;
      this = (void *)((int)this + 0xe4);
      if (0x49 < iVar6) {
        return;
      }
    }
    FUN_10037610((void *)(param_1 + -0xbc),iVar6,param_3);
  }
  return;
}

