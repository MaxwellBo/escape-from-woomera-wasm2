
undefined4 __thiscall FUN_1000d670(int *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 unaff_retaddr;
  char acStack_20 [28];
  undefined4 uStack_4;
  
  uVar3 = FUN_1009b980(param_1,param_2,param_3,param_4,param_5);
  iVar4 = (**(code **)(*param_1 + 0xb8))();
  if (((iVar4 == 0) || (*(int *)(param_1[1] + 0x170) == 1)) || (param_1[0xc1] != 0)) {
    return uVar3;
  }
  if ((param_1[0x76] != 5) && ((*(byte *)(param_3 + 0x1a4) & 8) != 0)) {
    param_1[0xe5] = (int)(param_4 + (float)param_1[0xe5]);
    bVar2 = FUN_10019450((uint *)(param_1 + 0x58));
    if (CONCAT31(extraout_var,bVar2) == 0) {
      if ((*(byte *)(param_1 + 0xa8) & 4) == 0) {
        iVar4 = FUN_100b0790(param_3,(float *)(param_1[1] + 8));
        if (iVar4 == 0) {
          if (param_1[0xdc] == 0) {
            (**(code **)(*param_1 + 0x198))(s_BA_SHOT_1010336c,0x40800000,0x3f800000,0x3f4ccccd);
          }
          else {
            uVar6 = 0xffffffff;
            pcVar8 = (char *)(*(int *)(DAT_10122044 + 0x98) + param_1[0xdc]);
            do {
              pcVar10 = pcVar8;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar10 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar10;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar8 = pcVar10 + -uVar6;
            pcVar10 = acStack_20;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar10 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar10 = pcVar10 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar8 = &DAT_10103374;
            do {
              pcVar10 = pcVar8;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar10 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar10;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar4 = -1;
            pcVar8 = acStack_20;
            do {
              pcVar9 = pcVar8;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pcVar9 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar9;
            } while (cVar1 != '\0');
            pcVar8 = pcVar10 + -uVar6;
            pcVar10 = pcVar9 + -1;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar10 = pcVar10 + 4;
            }
            iVar4 = *param_1;
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar10 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar10 = pcVar10 + 1;
            }
            (**(code **)(iVar4 + 0x198))(acStack_20,0x40800000,0x3f800000,0x3f4ccccd);
          }
          param_1[0xa8] = param_1[0xa8] | 4;
          return unaff_retaddr;
        }
      }
      if (param_1[0xdc] == 0) {
        (**(code **)(*param_1 + 0x198))(s_BA_MAD_1010335c,0x40800000,0x3f800000,0x3f4ccccd);
      }
      else {
        uVar6 = 0xffffffff;
        pcVar8 = (char *)(*(int *)(DAT_10122044 + 0x98) + param_1[0xdc]);
        do {
          pcVar10 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar8 = pcVar10 + -uVar6;
        pcVar10 = acStack_20;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar8 = &DAT_10103364;
        do {
          pcVar10 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar8 = acStack_20;
        do {
          pcVar9 = pcVar8;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        pcVar8 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        iVar4 = *param_1;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        (**(code **)(iVar4 + 0x198))(acStack_20,0x40800000,0x3f800000,0x3f4ccccd);
      }
      param_1[0xa8] = param_1[0xa8] | 1;
      (**(code **)(*param_1 + 0x228))(1);
      return uStack_4;
    }
    piVar5 = (int *)FUN_10019460((uint *)(param_1 + 0x58));
    iVar4 = (**(code **)(*piVar5 + 0xcc))();
    if ((iVar4 == 0) && (*(int *)(param_1[1] + 0x170) == 0)) {
      if (param_1[0xdc] != 0) {
        uVar6 = 0xffffffff;
        pcVar8 = (char *)(*(int *)(DAT_10122044 + 0x98) + param_1[0xdc]);
        do {
          pcVar10 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar8 = pcVar10 + -uVar6;
        pcVar10 = acStack_20;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar8 = &DAT_10103374;
        do {
          pcVar10 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar8 = acStack_20;
        do {
          pcVar9 = pcVar8;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        pcVar8 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        iVar4 = *param_1;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        (**(code **)(iVar4 + 0x198))(acStack_20,0x40800000,0x3f800000,0x3f4ccccd);
        return uVar3;
      }
      (**(code **)(*param_1 + 0x198))(s_BA_SHOT_1010336c,0x40800000,0x3f800000,0x3f4ccccd);
    }
  }
  return uVar3;
}

