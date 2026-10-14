
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10090270(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  bool bVar9;
  
  iVar2 = FUN_100af030(0,(byte *)((int)DAT_10122044[0x26] +
                                 *(int *)(*(int *)((int)this + 4) + 0x1cc)));
  do {
    if (iVar2 == 0) {
      return;
    }
    piVar8 = *(int **)(iVar2 + 4);
    pcVar7 = s_scripted_sequence_10116110;
    pbVar5 = (byte *)((int)DAT_10122044[0x26] + *piVar8);
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100902e7:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100902ec;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100902e7;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100902ec:
    if (iVar4 == 0) {
LAB_10090328:
      if ((piVar8 == (int *)0x0) && (iVar4 = (*DAT_10121e5c)(), iVar4 != 0)) {
        piVar8 = (int *)(iVar4 + 0x80);
      }
      iVar4 = piVar8[0x82];
      if ((iVar4 == 0) || (puVar6 = *(undefined4 **)(iVar4 + 0x7c), puVar6 == (undefined4 *)0x0)) {
        puVar6 = (undefined4 *)(*DAT_10121f04)(iVar4,0x360);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_10002f30(puVar6);
          *puVar6 = &PTR_FUN_100f0d78;
        }
        puVar6[1] = piVar8;
      }
      if (param_1 == 0) {
        iVar4 = puVar6[0xd2];
        puVar6[0xd2] = iVar4 + -1;
        if (iVar4 + -1 < 1) {
          puVar6[0xc2] = 2;
          FUN_10098c10((uint *)(*(int *)((int)this + 800) + (int)DAT_10122044[0x26]),this,this,3,0);
          puVar6[0xd3] = *DAT_10122044 + (float)_DAT_100de4f0;
        }
      }
      else {
        puVar6[0xd2] = puVar6[0xd2] + 1;
      }
    }
    else {
      pcVar7 = s_scripted_action_10101ba8;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1009031b:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_10090320;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1009031b;
        pbVar5 = pbVar5 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10090320:
      if (iVar4 == 0) goto LAB_10090328;
    }
    iVar2 = FUN_100af030(iVar2,(byte *)((int)DAT_10122044[0x26] +
                                       *(int *)(*(int *)((int)this + 4) + 0x1cc)));
  } while( true );
}

