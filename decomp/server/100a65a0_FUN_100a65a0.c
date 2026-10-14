
void __fastcall FUN_100a65a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  iVar2 = FUN_100a6690(param_1);
  iVar1 = param_1[1];
  if (iVar2 == 0) {
    if ((*(uint *)(iVar1 + 0x1a0) & 0x8000) != 0) {
      FUN_10098c10((uint *)(*(int *)(iVar1 + 0x1e8) + *(int *)(DAT_10122044 + 0x98)),param_1,param_1
                   ,3,0);
      FUN_10098c10((uint *)(*(int *)(param_1[1] + 0x1ec) + *(int *)(DAT_10122044 + 0x98)),param_1,
                   param_1,0,0);
      *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) & 0xffff7fff;
    }
  }
  else if ((*(uint *)(iVar1 + 0x1a0) & 0x8000) == 0) {
    FUN_10098c10((uint *)(*(int *)(iVar1 + 0x1c8) + *(int *)(DAT_10122044 + 0x98)),param_1,param_1,3
                 ,0);
    FUN_10098c10((uint *)(*(int *)(param_1[1] + 0x1ec) + *(int *)(DAT_10122044 + 0x98)),param_1,
                 param_1,1,0);
    *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) | 0x8000;
    return;
  }
  return;
}

