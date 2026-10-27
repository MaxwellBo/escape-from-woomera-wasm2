
void __cdecl FUN_100179b0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x80) != -1)) {
    iVar1 = FUN_10015eb0(&DAT_100a0ea8,*(int *)(param_1 + 0x80));
    if (iVar1 != 0) {
      iVar1 = FUN_10015eb0(&DAT_100a0ea8,*(int *)(param_1 + 0x80));
      iVar1 = FUN_100178e0(param_2,param_3,param_4,param_5,
                           (float)iVar1 / (float)*(int *)(param_1 + 0x88));
      if (*(int *)(param_1 + 0x84) != -1) {
        iVar2 = FUN_10015eb0(&DAT_100a0ea8,*(int *)(param_1 + 0x84));
        FUN_100178e0(iVar1 + 5,param_3,param_4,param_5,
                     (float)iVar2 / (float)*(int *)(param_1 + 0x8c));
      }
    }
  }
  return;
}

