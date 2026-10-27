
int __fastcall FUN_1003b3a0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 0x148);
  if (iVar2 == 0) {
    iVar2 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                   *(int *)(*(int *)(param_1 + 4) + 0x1d4)));
    if (iVar2 != 0) {
      do {
        pcVar5 = s_env_laser_1010951c;
        pbVar3 = (byte *)(**(int **)(iVar2 + 4) + *(int *)(DAT_10122044 + 0x98));
        do {
          bVar1 = *pbVar3;
          bVar6 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1003b415:
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_1003b41a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar6 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1003b415;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_1003b41a:
        if (iVar4 == 0) {
          *(int *)(param_1 + 0x148) = iVar2;
          break;
        }
        iVar2 = FUN_100af030(iVar2,(byte *)(*(int *)(*(int *)(param_1 + 4) + 0x1d4) +
                                           *(int *)(DAT_10122044 + 0x98)));
        if (iVar2 == 0) {
          return *(int *)(param_1 + 0x148);
        }
      } while( true );
    }
    iVar2 = *(int *)(param_1 + 0x148);
  }
  return iVar2;
}

