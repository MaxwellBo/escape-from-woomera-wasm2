
int __thiscall FUN_1002db30(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar3 = *(int *)(iVar1 + 0xb0) + *(int *)(param_3 + 0x9c) * 0x68 + iVar1;
  if (*(int *)(param_3 + 0x9c) == 0) {
    return *(int *)(iVar3 + 100) + *(int *)(param_3 + 0x7c) + iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x7c);
  if (iVar1 == 0) {
    iVar1 = (*DAT_100b20f8)(0x10,4);
    *(int *)(param_2 + 0x7c) = iVar1;
  }
  iVar2 = (*DAT_100b20fc)(iVar1 + *(int *)(param_3 + 0x9c) * 4);
  if (iVar2 == 0) {
    iVar3 = iVar3 + 0x20;
    (*DAT_100a5094)(s_loading__s_10079b00,iVar3);
    (*DAT_100b2100)(iVar3,iVar1 + *(int *)(param_3 + 0x9c) * 4);
  }
  return *(int *)(iVar1 + *(int *)(param_3 + 0x9c) * 4) + *(int *)(param_3 + 0x7c);
}

