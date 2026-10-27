
void __fastcall FUN_100c20a0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint local_4;
  
  pbVar2 = *(byte **)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x40);
  if (pbVar2 < *(byte **)(param_1 + 0x38)) {
    do {
      if (*pbVar2 == 0) {
        local_4 = 1;
      }
      else {
        local_4 = (uint)(byte)(&DAT_100f75b8)[(uint)*pbVar2 * 4];
      }
      iVar3 = iVar1 * 2;
      if (*(short *)(&DAT_100f74f4 + iVar3) != 0) {
        *(int *)(param_1 + 0x48) = iVar1;
        *(byte **)(param_1 + 0x4c) = pbVar2;
      }
      if (*(short *)(&DAT_100f7d64 + ((int)*(short *)(&DAT_100f7a68 + iVar3) + local_4) * 2) !=
          iVar1) {
        do {
          iVar1 = (int)*(short *)(&DAT_100f7b30 + iVar3);
          if (0x61 < iVar1) {
            local_4 = (uint)(byte)(&DAT_100f79b8)[local_4 * 4];
          }
          iVar3 = iVar1 * 2;
        } while (*(short *)(&DAT_100f7d64 + ((int)*(short *)(&DAT_100f7a68 + iVar3) + local_4) * 2)
                 != iVar1);
      }
      pbVar2 = pbVar2 + 1;
      iVar1 = (int)*(short *)(&DAT_100f7bf8 +
                             ((int)*(short *)(&DAT_100f7a68 + iVar1 * 2) + local_4) * 2);
    } while (pbVar2 < *(byte **)(param_1 + 0x38));
  }
  return;
}

