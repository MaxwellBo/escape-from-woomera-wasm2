
void __cdecl FUN_10009060(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_3 <= *(int *)(param_1 + 0xcc))) {
    iVar2 = *(int *)(param_1 + 0xd0) + param_3 * 0x4c + param_1;
    iVar1 = *(int *)(iVar2 + 0x40);
    if (param_4 < iVar1) {
      iVar2 = *(int *)(iVar2 + 0x44);
      *(int *)(param_2 + 0x114) =
           (param_4 - (*(int *)(param_2 + 0x114) / iVar2) % iVar1) * iVar2 +
           *(int *)(param_2 + 0x114);
    }
  }
  return;
}

