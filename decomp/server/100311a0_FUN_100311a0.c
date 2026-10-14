
void __thiscall FUN_100311a0(void *this)

{
  undefined *puVar1;
  undefined4 uStack0000000c;
  int in_stack_00000024;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0;
  puVar1 = FUN_100affd0((byte *)s_Rain_use__08x_1010841c);
  FUN_100af940(1,puVar1,iVar2,iVar3,iVar4,iVar5);
  uStack0000000c = 0x100311d6;
  iVar2 = FUN_1001a170(this,in_stack_00000024);
  if (iVar2 != 0) {
    if (*(int *)((int)this + 0xb8) == 2) {
      *(undefined4 *)((int)this + 0xb8) = 0;
      FUN_10019680((int)this);
      return;
    }
    *(undefined4 *)((int)this + 0xb8) = 2;
    uStack0000000c = 0x10031210;
    (**(code **)(*(int *)this + 8))();
  }
  return;
}

