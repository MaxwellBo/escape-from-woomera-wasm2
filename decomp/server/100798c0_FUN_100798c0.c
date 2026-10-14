
void __thiscall FUN_100798c0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x17c);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x180) != 0)) {
    if (param_2 == 0) {
      puVar1 = (uint *)(*(int *)(iVar2 + 4) + 0x1a0);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    else {
      *(uint *)(*(int *)(iVar2 + 4) + 0x1a0) = *(uint *)(*(int *)(iVar2 + 4) + 0x1a0) | 1;
      if (param_2 == 1) {
        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x180) + 4) + 0x1a0);
        *puVar1 = *puVar1 & 0xfffffffe;
        return;
      }
    }
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x180) + 4) + 0x1a0);
    *puVar1 = *puVar1 | 1;
  }
  return;
}

