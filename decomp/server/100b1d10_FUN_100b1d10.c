
int __thiscall
FUN_100b1d10(void *this,int param_1,void *param_2,int param_3,int param_4,undefined4 param_5,
            byte *param_6,char *param_7)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  int iVar9;
  float *pfVar10;
  char *pcVar11;
  float *pfVar12;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = 0.0;
  local_10 = 0.0;
  iVar9 = *(int *)this;
  local_20 = 0.0;
  local_14 = 0.0;
  if ((iVar9 != 0) && (local_20 = *(float *)(iVar9 + 0x550), *(int *)(iVar9 + 0x52c) != 0)) {
    local_18 = *(float *)(iVar9 + 0x544);
    local_14 = *(float *)(iVar9 + 0x548);
    local_10 = *(float *)(iVar9 + 0x54c);
  }
  iVar9 = 0;
  if (0 < param_3) {
    do {
      iVar6 = (iVar9 + param_4) % param_3;
      piVar2 = (int *)(iVar6 * 0x10 + (int)param_2);
      uVar3 = FUN_100d8b20(param_2,(byte *)piVar2[1],param_6);
      if (uVar3 == 0) {
        if ((*(int *)((int)this + 4) != 0) && ((*(byte *)((int)piVar2 + 0xe) & 1) != 0)) {
          return iVar6;
        }
        iVar9 = 0;
        if ((short)piVar2[3] < 1) {
          return iVar6;
        }
        goto LAB_100b1dff;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_3);
  }
  return -1;
LAB_100b1dff:
  iVar4 = *(int *)(&DAT_1011ad80 + *piVar2 * 4) * iVar9;
  pfVar10 = (float *)(piVar2[2] + iVar4 + param_1);
  pfVar7 = (float *)(param_7 + iVar4);
  switch(*piVar2) {
  case 0:
    *pfVar10 = *pfVar7;
    break;
  case 1:
  case 0x10:
  case 0x11:
    iVar4 = iVar9;
    pcVar8 = param_7;
    if (0 < iVar9) {
      do {
        cVar1 = *pcVar8;
        while (cVar1 != '\0') {
          pcVar11 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar11;
        }
        pcVar8 = pcVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = -1;
    pcVar11 = pcVar8;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if (iVar4 == -2) {
      *pfVar10 = 0.0;
    }
    else {
      fVar5 = (float)(*DAT_10121f14)(pcVar8);
      *pfVar10 = fVar5;
      if ((fVar5 != 0.0) && (*(int *)((int)this + 8) != 0)) {
        if (*piVar2 == 0x10) {
          (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + (int)fVar5);
        }
        else if (*piVar2 == 0x11) {
          (*DAT_10121e0c)(*(int *)(DAT_10122044 + 0x98) + (int)fVar5);
        }
      }
    }
    break;
  case 2:
    iVar4 = FUN_100b1240(this,(int)*pfVar7);
    if (iVar4 == 0) {
LAB_100b1ff3:
      *pfVar10 = 0.0;
    }
    else {
      fVar5 = (float)(*DAT_10121f20)(iVar4);
      *pfVar10 = fVar5;
    }
    break;
  case 3:
    fVar5 = *pfVar7;
    iVar4 = FUN_100b1240(this,(int)fVar5);
    if (iVar4 == 0) {
      *pfVar10 = 0.0;
      if (fVar5 != -NAN) {
        (*DAT_10121efc)(1,s____Restore__invalid_entitynum__d_1011b36c,fVar5);
      }
    }
    else {
      *pfVar10 = *(float *)(iVar4 + 0x7c);
    }
    break;
  case 4:
    pfVar10 = (float *)((int)pfVar10 + (8 - *(int *)(&DAT_1011ad80 + *piVar2 * 4)) * iVar9);
    iVar4 = FUN_100b1240(this,(int)*pfVar7);
    if (iVar4 == 0) {
      FUN_10019420(pfVar10,0);
    }
    else {
      FUN_10019420(pfVar10,*(int *)(iVar4 + 0x7c));
    }
    break;
  case 5:
    iVar4 = FUN_100b1240(this,(int)*pfVar7);
    if (iVar4 == 0) goto LAB_100b1ff3;
    *pfVar10 = (float)(iVar4 + 0x80);
    break;
  case 6:
    fVar5 = (float)FUN_100b1240(this,(int)*pfVar7);
    *pfVar10 = fVar5;
    break;
  case 7:
    *pfVar10 = *pfVar7;
    pfVar10[1] = pfVar7[1];
    pfVar10[2] = pfVar7[2];
    break;
  case 8:
    *pfVar10 = local_18 + *pfVar7;
    pfVar10[1] = local_14 + pfVar7[1];
    pfVar10[2] = local_10 + pfVar7[2];
    break;
  case 9:
  case 10:
  case 0xc:
    *pfVar10 = *pfVar7;
    break;
  case 0xb:
    iVar4 = -1;
    pfVar12 = pfVar7;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *(char *)pfVar12;
      pfVar12 = (float *)((int)pfVar12 + 1);
    } while (cVar1 != '\0');
    if (iVar4 == -2) goto LAB_100b1ff3;
    fVar5 = (float)(*DAT_10121f40)(pfVar7);
    *pfVar10 = fVar5;
    break;
  case 0xd:
    *(undefined2 *)pfVar10 = *(undefined2 *)pfVar7;
    break;
  case 0xe:
    *(undefined1 *)pfVar10 = *(undefined1 *)pfVar7;
    break;
  case 0xf:
    *pfVar10 = *pfVar7 + local_20;
    break;
  default:
    (*DAT_10121efc)(4,s_Bad_field_type_1011b2d8);
  }
  iVar9 = iVar9 + 1;
  if ((short)piVar2[3] <= iVar9) {
    return iVar6;
  }
  goto LAB_100b1dff;
}

