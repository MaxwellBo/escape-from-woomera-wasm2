
void __fastcall FUN_10060570(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = (*DAT_10121f30)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  FUN_100088c0(iVar2,&uStack_c);
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x174) = uStack_c;
  *(undefined4 *)(iVar2 + 0x178) = uStack_8;
  *(undefined4 *)(iVar2 + 0x17c) = uStack_4;
  piVar1 = *(int **)(param_1 + 4);
  if ((((float)piVar1[0x5d] == DAT_10121dd8) && ((float)piVar1[0x5e] == DAT_10121ddc)) &&
     ((float)piVar1[0x5f] == DAT_10121de0)) {
    (*DAT_10121efc)(2,s__s_has_no_view_ofs__101113c4,*(int *)(DAT_10122044 + 0x98) + *piVar1);
  }
  return;
}

