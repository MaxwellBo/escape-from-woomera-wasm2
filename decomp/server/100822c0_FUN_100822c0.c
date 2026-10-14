
undefined4 __thiscall FUN_100822c0(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  int local_8;
  
  piVar4 = (int *)((int)this + 0x510);
  local_8 = 0;
  do {
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      do {
        pbVar2 = (byte *)(**(int **)(iVar6 + 4) + *(int *)(DAT_10122044 + 0x98));
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar7 = bVar1 < *pbVar2;
          if (bVar1 != *pbVar2) {
LAB_1008231b:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_10082320;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar7 = bVar1 < pbVar2[1];
          if (bVar1 != pbVar2[1]) goto LAB_1008231b;
          pbVar5 = pbVar5 + 2;
          pbVar2 = pbVar2 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_10082320:
        if (iVar3 == 0) {
          return 1;
        }
        iVar6 = *(int *)(iVar6 + 0xe0);
      } while (iVar6 != 0);
    }
    local_8 = local_8 + 1;
    piVar4 = piVar4 + 1;
    if (5 < local_8) {
      return 0;
    }
  } while( true );
}

