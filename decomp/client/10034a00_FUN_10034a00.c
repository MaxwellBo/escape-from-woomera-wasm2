
void __thiscall FUN_10034a00(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = (**(code **)(*(int *)this + 0x14))(param_3);
      iVar3 = iVar2 + 1;
      *(undefined1 *)(iVar2 + param_1) = uVar1;
      iVar2 = iVar3;
    } while (iVar3 < param_2);
  }
  return;
}

