
void __fastcall FUN_10096990(int *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  char *pcVar6;
  
  FUN_1005f990(param_1);
  if ((*(byte *)(param_1 + 0xae) & 8) != 0) {
    bVar2 = FUN_10019450((uint *)(param_1 + 0xc2));
    if ((CONCAT31(extraout_var,bVar2) == 0) &&
       ((*(int *)(param_1[1] + 0x1d0) == 0 || ((*(byte *)(param_1[1] + 0x1a0) & 0x20) != 0)))) {
      iVar3 = FUN_10096650(param_1,0x400,4);
      if (iVar3 != 0) {
        (*DAT_10121efc)(2,s_Squad_of__d__s_formed_101173c0,iVar3,
                        *(int *)(DAT_10122044 + 0x98) + *(int *)param_1[1]);
      }
      piVar4 = (int *)FUN_10019410((uint *)(param_1 + 0xc2));
      if (piVar4 == param_1) {
        pcVar6 = s_monster_human_grunt_10101a08;
        pbVar5 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)param_1[1]);
        do {
          bVar1 = *pbVar5;
          bVar2 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_10096a58:
            iVar3 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
            goto LAB_10096a5d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar2 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_10096a58;
          pbVar5 = pbVar5 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_10096a5d:
        if (iVar3 == 0) {
          FUN_100084f0(param_1,1,1);
          *(undefined4 *)(param_1[1] + 0x110) = 0;
        }
      }
    }
  }
  return;
}

