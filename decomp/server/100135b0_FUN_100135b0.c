
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100135b0(int *param_1,int param_2,int *param_3,float param_4,uint param_5)

{
  uint *puVar1;
  byte bVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char *pcVar9;
  int *piVar10;
  float fVar11;
  uint uVar12;
  undefined4 auStack_c [3];
  
  puVar1 = (uint *)(param_1 + 0x58);
  bVar4 = FUN_10019450(puVar1);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    iVar5 = (**(code **)(*param_1 + 0x98))();
    if (iVar5 != 0) {
      iVar5 = FUN_10019460(puVar1);
      if ((param_3 == *(int **)(iVar5 + 4)) &&
         (_DAT_100ddad4 < *DAT_10122044 - (float)param_1[0xc3])) {
        iVar6 = FUN_10019460(puVar1);
        iVar5 = param_1[1];
        fVar11 = *(float *)(iVar5 + 8) - *(float *)(*(int *)(iVar6 + 4) + 8);
        fVar3 = *(float *)(iVar5 + 0xc) - *(float *)(*(int *)(iVar6 + 4) + 0xc);
        if (_DAT_100dd658 < SQRT(fVar11 * fVar11 + fVar3 * fVar3)) {
          iVar6 = *param_1;
          fVar11 = *(float *)(iVar5 + 8) - (float)param_1[param_1[0x9c] * 4 + 0x7b];
          fVar3 = *(float *)(iVar5 + 0xc) - (float)param_1[param_1[0x9c] * 4 + 0x7c];
          uVar7 = FUN_10019410(puVar1);
          piVar10 = param_1 + param_1[0x9c] * 4 + 0x7b;
          fVar11 = SQRT(fVar11 * fVar11 + fVar3 * fVar3) * (float)_DAT_100dd648;
          iVar5 = (**(code **)(iVar6 + 0x1b4))(param_1[1] + 8);
          if (iVar5 != 0) {
            uVar12 = 0x108;
            FUN_10003850(&stack0xffffffc8,auStack_c);
            FUN_1005e890(param_1,piVar10,fVar11,uVar7,uVar12);
          }
        }
      }
    }
  }
  pcVar9 = s_monster_headcrab_101040d0;
  pbVar8 = (byte *)((int)DAT_10122044[0x26] + *param_3);
  do {
    bVar2 = *pbVar8;
    bVar4 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_1001371d:
      iVar5 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_10013722;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar8[1];
    bVar4 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_1001371d;
    pbVar8 = pbVar8 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_10013722:
  if (iVar5 != 0) {
    param_1[0xc3] = (int)*DAT_10122044;
  }
  FUN_1001f350(param_1,param_2,(int)param_3,param_4,param_5);
  return;
}

