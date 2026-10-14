
int * __thiscall FUN_1008f8a0(void *this,byte *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  for (piVar2 = (int *)FUN_100af060(0,param_1,param_2); piVar2 != (int *)0x0;
      piVar2 = (int *)FUN_100af060((int)piVar2,param_1,param_2)) {
    if ((*(byte *)(piVar2[1] + 0x1a4) & 0x20) != 0) {
      piVar3 = (int *)(**(code **)(*piVar2 + 0x74))();
      if ((piVar3 != (int *)0x0) &&
         (iVar4 = (**(code **)(*piVar3 + 400))(*(uint *)((int)this + 0x344) | 1), iVar4 != 0)) {
        return piVar3;
      }
      (*DAT_10121efc)(1,s_Found__s__but_can_t_play__10116010,param_1);
    }
  }
  piVar2 = (int *)FUN_100aeba0(0,*(int *)((int)this + 4) + 8,*(undefined4 *)((int)this + 0x334));
  do {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    pbVar5 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)piVar2[1]);
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_1008f985:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_1008f98a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_1008f985;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_1008f98a:
    if ((((iVar4 == 0) && ((*(byte *)((int *)piVar2[1] + 0x69) & 0x20) != 0)) &&
        (piVar3 = (int *)(**(code **)(*piVar2 + 0x74))(), piVar3 != (int *)0x0)) &&
       (iVar4 = (**(code **)(*piVar3 + 400))(*(undefined4 *)((int)this + 0x344)), iVar4 != 0)) {
      return piVar3;
    }
    piVar2 = (int *)FUN_100aeba0((int)piVar2,*(int *)((int)this + 4) + 8,
                                 *(undefined4 *)((int)this + 0x334));
  } while( true );
}

