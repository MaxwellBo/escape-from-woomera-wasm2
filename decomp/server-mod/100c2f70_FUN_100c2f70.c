
uint __cdecl FUN_100c2f70(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  
  iVar2 = (**(code **)(*param_1 + 0xcc))();
  if (iVar2 != 0) {
    uVar3 = FUN_100c2dc0((int)param_1,param_2);
    return uVar3;
  }
  iVar2 = 0;
  if (0 < (int)DAT_10132c70) {
    piVar7 = &DAT_10132470;
    do {
      if ((int *)piVar7[1] == param_1) {
        pbVar4 = (byte *)(**(int **)(*piVar7 + 4) + *(int *)(DAT_10122044 + 0x98));
        pbVar6 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_100c2feb:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_100c2ff0;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_100c2feb;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_100c2ff0:
        if (iVar5 == 0) {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar2 < (int)DAT_10132c70);
  }
  return DAT_10132c70 & 0xffffff00;
}

