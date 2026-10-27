
void __thiscall FUN_10037b90(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined1 auStack_c [8];
  undefined1 auStack_4 [4];
  
  uStack_1c = param_3;
  iVar3 = param_2;
  (**(code **)**(undefined4 **)(param_1 + 0x24))(param_2);
  (**(code **)(**(int **)(param_1 + 0x24) + 8))(auStack_c,auStack_4);
  (**(code **)(**(int **)(param_1 + 0x28) + 8))(&stack0xffffffe8,&uStack_1c);
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x28);
  lVar2 = __ftol();
  (*(code *)*puVar1)(iVar3 + param_2,(int)lVar2);
  return;
}

