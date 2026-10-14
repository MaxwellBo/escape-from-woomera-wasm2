
void __fastcall FUN_10049ff0(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  char *pcVar6;
  undefined4 auStack_18 [3];
  undefined4 auStack_c [3];
  
  iVar2 = FUN_10008520(param_1,2);
  if ((iVar2 != 2) && ((*(uint *)(param_1[1] + 0x1a0) & 0x400) == 0)) {
    FUN_10008450(param_1,0,auStack_c,auStack_18);
    if ((*(byte *)(param_1[1] + 0x168) & 8) == 0) {
      pcVar6 = s_weapon_9mmAR_10108bb0;
    }
    else {
      pcVar6 = s_weapon_shotgun_10108b84;
    }
    iVar2 = FUN_10061e00(param_1,(int)pcVar6,auStack_c,auStack_18);
    if (iVar2 != 0) {
      fVar3 = (float10)(*DAT_10121f74)(0x43480000,0x43960000);
      fVar4 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
      fVar5 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
      iVar1 = *(int *)(iVar2 + 4);
      *(float *)(iVar1 + 0x20) = (float)fVar5;
      *(float *)(iVar1 + 0x24) = (float)fVar4;
      *(float *)(iVar1 + 0x28) = (float)fVar3;
      fVar3 = (float10)(*DAT_10121f74)(0x43480000,0x43c80000);
      iVar2 = *(int *)(iVar2 + 4);
      *(undefined4 *)(iVar2 + 0x5c) = 0;
      *(float *)(iVar2 + 0x60) = (float)fVar3;
      *(undefined4 *)(iVar2 + 100) = 0;
    }
    if ((*(byte *)(param_1[1] + 0x168) & 4) != 0) {
      iVar2 = FUN_10061e00(param_1,0x10108b94,auStack_c,auStack_18);
      if (iVar2 != 0) {
        fVar3 = (float10)(*DAT_10121f74)(0x43480000,0x43960000);
        fVar4 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
        fVar5 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
        iVar1 = *(int *)(iVar2 + 4);
        *(float *)(iVar1 + 0x20) = (float)fVar5;
        *(float *)(iVar1 + 0x24) = (float)fVar4;
        *(float *)(iVar1 + 0x28) = (float)fVar3;
        fVar3 = (float10)(*DAT_10121f74)(0x43480000,0x43c80000);
        iVar2 = *(int *)(iVar2 + 4);
        *(undefined4 *)(iVar2 + 0x5c) = 0;
        *(float *)(iVar2 + 0x60) = (float)fVar3;
        *(undefined4 *)(iVar2 + 100) = 0;
      }
    }
  }
  FUN_1001e640(param_1);
  return;
}

