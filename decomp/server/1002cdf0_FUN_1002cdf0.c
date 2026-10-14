
void __thiscall FUN_1002cdf0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(int *)(*(int *)((int)this + 4) + 0x118) != 0x80);
  iVar1 = FUN_1001a140(param_3,uVar2);
  if (iVar1 != 0) {
    if (uVar2 != 0) {
      FUN_10098bd0(this,this,0,0);
      FUN_1002cce0((int)this);
      return;
    }
    FUN_10098bd0(this,this,1,0);
    FUN_1002cd00(this);
  }
  return;
}

