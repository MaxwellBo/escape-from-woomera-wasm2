
/* public: void __thiscall CFlockingFlyer::FallHack(void) */

void __thiscall CFlockingFlyer::FallHack(CFlockingFlyer *this)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  
                    /* 0x1760  98  ?FallHack@CFlockingFlyer@@QAEXXZ */
  iVar2 = *(int *)(this + 4);
  if ((*(uint *)(iVar2 + 0x1a4) & 0x200) != 0) {
    if (*(int *)(iVar2 + 0x19c) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(*(int *)(iVar2 + 0x19c) + 0x80);
    }
    pcVar6 = s_worldspawn_10101338;
    pbVar3 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar5);
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100017c4:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_100017c9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100017c4;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100017c9:
    if (iVar4 != 0) {
      *(uint *)(iVar2 + 0x1a4) = *(uint *)(iVar2 + 0x1a4) & 0xfffffdff;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      return;
    }
    *(undefined4 *)(iVar2 + 0x20) = DAT_10121dd8;
    *(undefined4 *)(iVar2 + 0x24) = DAT_10121ddc;
    *(undefined4 *)(iVar2 + 0x28) = DAT_10121de0;
    *(undefined4 *)(this + 0x74) = 0;
  }
  return;
}

