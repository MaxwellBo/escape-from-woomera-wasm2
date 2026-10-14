
void __cdecl FUN_10095d30(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_10131058 != 0) {
    iVar2 = FUN_10095cf0(DAT_10131058);
    if (iVar2 == -1) {
      (*DAT_10121efc)(1,s_Could_not_AllocSound___for_Inser_101171cc);
      return;
    }
    iVar2 = iVar2 * 0x20;
    puVar1 = (undefined4 *)(iVar2 + 200 + DAT_10131058);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined4 *)(iVar2 + 0xd4 + DAT_10131058) = param_1;
    *(undefined4 *)(iVar2 + 0xd8 + DAT_10131058) = param_3;
    *(float *)(iVar2 + 0xdc + DAT_10131058) = param_4 + *DAT_10122044;
  }
  return;
}

