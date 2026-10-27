
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000e4a0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = FUN_10018f40();
  if (fVar7 < (float10)(float)param_1[0x40]) {
    return;
  }
  iVar2 = param_1[0x2b];
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x17c))(1,1,0);
    iVar2 = param_1[0x37];
    pcVar6 = &DAT_10077704;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) == 0) {
          param_1[0x2b] = 0;
          (**(code **)(*param_1 + 0x194))();
          return;
        }
        FUN_1000a1e0(s_models_v_satchel_mdl_100776dc,param_1[0x37]);
        (**(code **)(*param_1 + 0x17c))(2,1,0);
        uVar3 = 0xffffffff;
        pcVar6 = &DAT_10077704;
        do {
          pcVar5 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar5 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar5;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar5 + -uVar3;
        pcVar5 = (char *)(param_1[0x37] + 0x66c);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar5 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        }
        fVar7 = FUN_10018f40();
        param_1[0x3e] = (int)(float)(fVar7 + (float10)_DAT_100599f0);
        fVar8 = FUN_10018f40();
        fVar7 = (float10)_DAT_100599f0;
        param_1[0x2b] = 0;
        param_1[0x3f] = (int)(float)(fVar8 + fVar7);
      }
      goto LAB_1000e5e4;
    }
    (**(code **)(*param_1 + 0x17c))(1,1,0);
    iVar2 = param_1[0x37];
    pcVar6 = &DAT_10077434;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar5 + -uVar3;
  pcVar5 = (char *)(iVar2 + 0x66c);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
LAB_1000e5e4:
  fVar7 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
  fVar8 = FUN_10018f40();
  param_1[0x40] = (int)(float)(fVar8 + (float10)(float)fVar7);
  return;
}

