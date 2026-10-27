
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1007a6f0(int *param_1,float param_2,undefined4 param_3,float param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  CFuncTrain *this;
  byte *pbVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  byte *pbVar13;
  float *pfVar14;
  char *pcVar15;
  bool bVar16;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar7 = FUN_1001a170(param_1,(int)param_4);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = (**(code **)(*param_1 + 0x58))();
  if (iVar7 != 0) {
    FUN_10019680((int)param_1);
    FUN_1007ae70(param_1);
    return;
  }
  this = (CFuncTrain *)
         FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2e]),(int)param_2);
  if (this == (CFuncTrain *)0x0) {
    (*DAT_10121efc)(4,s_Missing_train___s__for_scripted__10114348,
                    *(int *)(DAT_10122044 + 0x98) + param_1[0x2e],
                    *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
    return;
  }
  iVar7 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2f]),(int)param_2);
  param_1[0x36] = iVar7;
  if ((*(byte *)(param_1[1] + 0x1a0) & 8) != 0) {
    (*DAT_10121efc)(1,s_trainsequence___s__found_train___10114440,
                    *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                    *(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
    if (param_1[0x36] == 0) {
      (*DAT_10121efc)(1,s_missing_destination_10114410);
    }
    else {
      (*DAT_10121efc)(1,s_found_destination__s_10114428,
                      *(int *)(*(int *)(param_1[0x36] + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98))
      ;
    }
  }
  pcVar15 = s_func_train_10114404;
  iVar7 = *(int *)(DAT_10122044 + 0x98);
  pbVar13 = (byte *)(**(int **)(this + 4) + iVar7);
  pbVar8 = pbVar13;
  do {
    bVar1 = *pbVar8;
    bVar16 = bVar1 < (byte)*pcVar15;
    if (bVar1 != *pcVar15) {
LAB_1007a83d:
      iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_1007a842;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar16 = bVar1 < (byte)pcVar15[1];
    if (bVar1 != pcVar15[1]) goto LAB_1007a83d;
    pbVar8 = pbVar8 + 2;
    pcVar15 = pcVar15 + 2;
  } while (bVar1 != 0);
  iVar9 = 0;
LAB_1007a842:
  if (iVar9 != 0) {
    pcVar15 = s_func_tracktrain_10114240;
    pbVar8 = pbVar13;
    do {
      bVar1 = *pbVar8;
      bVar16 = bVar1 < (byte)*pcVar15;
      if (bVar1 != *pcVar15) {
LAB_1007acfd:
        iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_1007ad02;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar16 = bVar1 < (byte)pcVar15[1];
      if (bVar1 != pcVar15[1]) goto LAB_1007acfd;
      pbVar8 = pbVar8 + 2;
      pcVar15 = pcVar15 + 2;
    } while (bVar1 != 0);
    iVar9 = 0;
LAB_1007ad02:
    if (iVar9 != 0) {
      (*DAT_10121efc)(4,s_scripted_trainsequence__s_can_t_a_1011437c,
                      *(int *)(param_1[1] + 0x1cc) + iVar7,pbVar13,
                      (*(int **)(this + 4))[0x73] + iVar7);
      return;
    }
    if (*(int *)(this + 0xb8) != 0) {
      return;
    }
    FUN_10078ab0(this,param_1);
    param_1[0x35] = (int)this;
    goto switchD_1007a8a8_default;
  }
  if (*(int *)(this + 0x164) != 0) {
    return;
  }
  FUN_100765d0(this,param_1);
  param_1[0x34] = (int)this;
  if ((*(byte *)(param_1[1] + 0x1a0) & 4) != 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x1c8) =
         *(undefined4 *)(*(int *)(param_1[0x36] + 4) + 0x1cc);
    CFuncTrain::Next(this);
    goto switchD_1007a8a8_default;
  }
  iVar7 = 0;
  switch(param_1[0x31]) {
  case 2:
switchD_1007a8a8_caseD_2:
    uVar3 = *(uint *)(*(int *)(this + 4) + 0x1a0);
    if ((uVar3 & 0x800000) == 0) {
      *(uint *)(*(int *)(this + 4) + 0x1a0) = uVar3 | 0x800000;
      piVar10 = (int *)param_1[0x36];
      do {
        if (piVar10 == (int *)0x0) {
LAB_1007abed:
          iVar7 = *(int *)(DAT_10122044 + 0x98);
          (*DAT_10121efc)(4,s_Found_no_path_to_reach_destinati_101143bc,
                          *(int *)(*(int *)(this + 4) + 0x1c8) + iVar7,
                          *(int *)(*(int *)(this + 4) + 0x1d4) + iVar7,
                          *(int *)(*(int *)(param_1[0x36] + 4) + 0x1cc) + iVar7);
          return;
        }
        pbVar8 = (byte *)(*(int *)(*(int *)(this + 4) + 0x1d4) + *(int *)(DAT_10122044 + 0x98));
        pbVar13 = (byte *)(*(int *)(piVar10[1] + 0x1c8) + *(int *)(DAT_10122044 + 0x98));
        do {
          bVar1 = *pbVar13;
          bVar16 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_1007ab91:
            iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_1007ab96;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar13[1];
          bVar16 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_1007ab91;
          pbVar13 = pbVar13 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_1007ab96:
        if (iVar7 == 0) {
          iVar7 = (**(code **)(*piVar10 + 0xd8))();
          if (iVar7 == 0) {
            *(undefined4 *)(*(int *)(this + 4) + 400) = 0;
          }
          else {
            *(undefined4 *)(*(int *)(this + 4) + 400) = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x208)
            ;
          }
          *(undefined4 *)(*(int *)(this + 4) + 0x1c8) = *(undefined4 *)(piVar10[1] + 0x1cc);
          if (piVar10 != (int *)0x0) {
            *(undefined4 *)(this + 0x168) = 0;
            CFuncTrain::Next(this);
            break;
          }
          goto LAB_1007abed;
        }
        piVar10 = (int *)(**(code **)(*piVar10 + 0xd8))();
      } while( true );
    }
    break;
  case 3:
switchD_1007a8a8_caseD_3:
    (**(code **)(*param_1 + 8))(0x3dcccccd);
    param_1[0x1d] = 0x1007ae10;
    return;
  case 4:
    if (param_1[0x36] == 0) goto switchD_1007a8a8_caseD_3;
    piVar10 = (int *)FUN_100af030(0,(byte *)(*(int *)(*(int *)(this + 4) + 0x1d4) +
                                            *(int *)(DAT_10122044 + 0x98)));
    iVar9 = *(int *)(this + 4);
    if ((*(byte *)(iVar9 + 0x1a0) & 2) == 0) {
      iVar2 = piVar10[1];
      pfVar14 = (float *)(iVar2 + 8);
      fVar4 = *pfVar14 -
              ((*(float *)(iVar9 + 0xdc) + *(float *)(iVar9 + 0xe8)) * _DAT_100dd614 +
              *(float *)(iVar9 + 8));
      fVar6 = *(float *)(iVar2 + 0xc) -
              ((*(float *)(iVar9 + 0xe0) + *(float *)(iVar9 + 0xec)) * _DAT_100dd614 +
              *(float *)(iVar9 + 0xc));
      fVar5 = *(float *)(iVar2 + 0x10) -
              ((*(float *)(iVar9 + 0xe4) + *(float *)(iVar9 + 0xf0)) * _DAT_100dd614 +
              *(float *)(iVar9 + 0x10));
    }
    else {
      iVar2 = piVar10[1];
      pfVar14 = (float *)(iVar2 + 8);
      fVar4 = *pfVar14 - *(float *)(iVar9 + 8);
      fVar6 = *(float *)(iVar2 + 0xc) - *(float *)(iVar9 + 0xc);
      fVar5 = *(float *)(iVar2 + 0x10) - *(float *)(iVar9 + 0x10);
    }
    fStack_18 = *pfVar14;
    fStack_10 = pfVar14[2];
    piVar12 = (int *)param_1[0x36];
    fStack_14 = pfVar14[1];
    iVar9 = piVar12[1];
    iStack_1c = 10;
    param_4 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
    fStack_c = *(float *)(iVar9 + 8);
    fStack_8 = *(float *)(iVar9 + 0xc);
    fStack_4 = *(float *)(iVar9 + 0x10);
    param_2 = -param_4;
    piVar11 = piVar10;
    do {
      if (piVar11 == (int *)0x0) {
LAB_1007aa77:
        if (piVar12 != (int *)0x0) goto LAB_1007aa7b;
      }
      else {
        iVar9 = piVar11[1];
        fVar4 = *(float *)(iVar9 + 8) - fStack_18;
        fVar6 = *(float *)(iVar9 + 0xc) - fStack_14;
        fVar5 = *(float *)(iVar9 + 0x10) - fStack_10;
        fStack_18 = *(float *)(iVar9 + 8);
        fStack_14 = *(float *)(iVar9 + 0xc);
        fStack_10 = *(float *)(iVar9 + 0x10);
        param_4 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) + param_4;
        if (piVar11 != (int *)param_1[0x36]) {
          piVar11 = (int *)(**(code **)(*piVar11 + 0xd8))();
          goto LAB_1007aa77;
        }
        if ((param_4 <= param_2) || (piVar12 == (int *)0x0)) {
          iVar7 = 1;
          goto LAB_1007aa77;
        }
LAB_1007aa7b:
        iVar9 = piVar12[1];
        fVar4 = *(float *)(iVar9 + 8) - fStack_c;
        fVar6 = *(float *)(iVar9 + 0xc) - fStack_8;
        fVar5 = *(float *)(iVar9 + 0x10) - fStack_4;
        fStack_c = *(float *)(iVar9 + 8);
        fStack_8 = *(float *)(iVar9 + 0xc);
        fStack_4 = *(float *)(iVar9 + 0x10);
        param_2 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) + param_2;
        if (piVar12 == piVar10) {
          if ((param_2 < param_4) || (piVar11 == (int *)0x0)) {
            iVar7 = 2;
          }
        }
        else {
          piVar12 = (int *)(**(code **)(*piVar12 + 0xd8))();
        }
      }
      iStack_1c = iStack_1c + -1;
      if (iStack_1c < 1) goto switchD_1007a8a8_caseD_3;
    } while (iVar7 == 0);
    if (iVar7 == 2) goto switchD_1007a8a8_caseD_2;
    if (iVar7 != 1) {
      if (iVar7 != 3) break;
      goto switchD_1007a8a8_caseD_3;
    }
  case 1:
    *(undefined4 *)(*(int *)(this + 4) + 0x1c8) = *(undefined4 *)(*(int *)(this + 4) + 0x1d4);
    CFuncTrain::Next(this);
    break;
  default:
    break;
  }
switchD_1007a8a8_default:
  if ((float)param_1[0x33] == _DAT_100dd5f8) {
    return;
  }
  param_1[0x1d] = (int)FUN_1007ae40;
  (**(code **)(*param_1 + 8))(param_1[0x33]);
  return;
}

