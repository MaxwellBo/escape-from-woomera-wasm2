
void __fastcall FUN_1000ccd0(int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  char acStack_20 [32];
  
  bVar2 = FUN_10019450((uint *)(param_1 + 0x58));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = FUN_1009b210(param_1);
    if (iVar3 != 0) {
      if (param_1[0xdc] != 0) {
        uVar4 = 0xffffffff;
        pcVar6 = (char *)(*(int *)(DAT_10122044 + 0x98) + param_1[0xdc]);
        do {
          pcVar8 = pcVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar8 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar8;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar8 + -uVar4;
        pcVar8 = acStack_20;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar8 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        }
        uVar4 = 0xffffffff;
        pcVar6 = s__ATTACK_101030a8;
        do {
          pcVar8 = pcVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar8 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar8;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar3 = -1;
        pcVar6 = acStack_20;
        do {
          pcVar7 = pcVar6;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        pcVar6 = pcVar8 + -uVar4;
        pcVar8 = pcVar7 + -1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar8 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        }
        iVar3 = *param_1;
        fVar9 = (float10)(*DAT_10121f74)(0x40333333,0x404ccccd,0x3f800000,0x40000000);
        (**(code **)(iVar3 + 0x198))(acStack_20,(float)fVar9);
        return;
      }
      iVar3 = *param_1;
      fVar9 = (float10)(*DAT_10121f74)(0x40333333,0x404ccccd,0x3f800000,0x40000000);
      (**(code **)(iVar3 + 0x198))(s_BA_ATTACK_1010309c,(float)fVar9);
    }
  }
  return;
}

