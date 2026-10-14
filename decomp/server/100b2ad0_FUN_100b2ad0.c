
undefined4 __cdecl FUN_100b2ad0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_4;
  
  local_4 = 0;
  puVar5 = &DAT_10131e28;
  do {
    pbVar4 = (byte *)puVar5[-2];
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1);
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_100b2b1f:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_100b2b24;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_100b2b1f;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100b2b24:
      if (iVar3 == 0) {
        return (&DAT_10131e24)[local_4 * 0xb];
      }
    }
    pbVar4 = (byte *)*puVar5;
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1);
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_100b2b5a:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_100b2b5f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_100b2b5a;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100b2b5f:
      if (iVar3 == 0) {
        return (&DAT_10131e2c)[local_4 * 0xb];
      }
    }
    puVar5 = puVar5 + 0xb;
    local_4 = local_4 + 1;
    if (0x101323a7 < (int)puVar5) {
      (*DAT_10121efc)(1,s_MaxAmmoCarry___doesn_t_recognize_1011b874,
                      *(int *)(DAT_10122044 + 0x98) + param_1);
      return 0xffffffff;
    }
  } while( true );
}

