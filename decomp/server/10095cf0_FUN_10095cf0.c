
int __fastcall FUN_10095cf0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == -1) {
    (*DAT_10121efc)(1,s_Free_Sound_List_is_full__101171b0);
    return -1;
  }
  puVar2 = (undefined4 *)((iVar1 + 7) * 0x20 + param_1);
  *(undefined4 *)(param_1 + 0xb8) = *puVar2;
  *puVar2 = *(undefined4 *)(param_1 + 0xbc);
  *(int *)(param_1 + 0xbc) = iVar1;
  return iVar1;
}

