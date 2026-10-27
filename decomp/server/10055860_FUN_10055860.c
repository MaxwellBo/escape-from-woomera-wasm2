
void __thiscall FUN_10055860(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*param_2 + 0xcc))();
  if (((iVar3 != 0) && (*(int *)(DAT_10122044 + 0x74) != 0)) &&
     (iVar3 = *(int *)(param_1 + 4), *(int *)(DAT_10122044 + 0x74) == *(int *)(iVar3 + 0x208))) {
    iVar2 = param_2[1];
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar2 + 0x28);
    puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x1a4);
    *puVar1 = *puVar1 | 0x400000;
  }
  return;
}

