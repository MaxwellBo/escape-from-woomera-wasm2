
undefined4 __thiscall FUN_10091050(void *this,int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  
  piVar4 = param_1;
  iVar5 = 0;
  if (param_1 == (int *)0x0) {
    (*DAT_10121efc)(2,s_Not_Playing_sentence__s_101161e0,
                    *(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0x15c));
    return 0;
  }
  bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
  if (*(int *)((int)this + 0x180) != 0) {
    param_1 = *(int **)((int)this + 0x164);
    pcVar7 = s_player_10101c54;
    pbVar1 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0x180));
    pbVar6 = pbVar1;
    do {
      bVar3 = *pbVar6;
      bVar8 = bVar3 < (byte)*pcVar7;
      if (bVar3 != *pcVar7) {
LAB_100910f4:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100910f9;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar6[1];
      bVar8 = bVar3 < (byte)pcVar7[1];
      if (bVar3 != pcVar7[1]) goto LAB_100910f4;
      pbVar6 = pbVar6 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar3 != 0);
    iVar5 = 0;
LAB_100910f9:
    if (iVar5 == 0) {
      param_1 = (int *)0x45800000;
    }
    iVar5 = FUN_100af120(pbVar1,(float *)(piVar4[1] + 8),(float)param_1);
  }
  (**(code **)(*piVar4 + 0x19c))
            (*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0x15c),
             *(undefined4 *)((int)this + 0x168),*(undefined4 *)((int)this + 0x174),
             *(undefined4 *)((int)this + 0x170),(bVar2 & 8) == 0,iVar5);
  (*DAT_10121efc)(2,s_Playing_sentence__s____1f__101161c4,
                  *(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0x15c),
                  (double)*(float *)((int)this + 0x168));
  FUN_10098e40(this,(int *)0x0,3,0);
  return 1;
}

