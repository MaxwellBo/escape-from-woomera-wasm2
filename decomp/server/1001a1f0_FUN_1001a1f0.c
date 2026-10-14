
int __cdecl FUN_1001a1f0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_10121e64)(param_1 - *(int *)(DAT_10122044 + 0x98));
  if (iVar1 != 0) {
    iVar2 = (*DAT_10121f20)(iVar1);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x7c);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x198) = param_4;
      iVar2 = *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar2 + 8) = *param_2;
      *(undefined4 *)(iVar2 + 0xc) = param_2[1];
      *(undefined4 *)(iVar2 + 0x10) = param_2[2];
      iVar2 = *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar2 + 0x50) = *param_3;
      *(undefined4 *)(iVar2 + 0x54) = param_3[1];
      *(undefined4 *)(iVar2 + 0x58) = param_3[2];
      FUN_10018b20(*(int *)(*(int *)(iVar1 + 4) + 0x208));
      return iVar1;
    }
  }
  (*DAT_10121efc)(1,s_NULL_Ent_in_Create__101050f8);
  return 0;
}

