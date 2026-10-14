
undefined4 __thiscall
FUN_1003e100(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_10026030(param_3,param_2);
  piVar2 = (int *)((int)this + 0x898);
  iVar3 = 5;
  do {
    iVar1 = FUN_100260d0();
    *piVar2 = iVar1;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_1003cb10((int)this);
  return 1;
}

