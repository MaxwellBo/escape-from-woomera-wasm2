
void __thiscall FUN_100a78a0(void *this,int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  float afStack_44 [3];
  float afStack_38 [3];
  float afStack_2c [3];
  undefined4 auStack_20 [3];
  undefined4 auStack_14 [4];
  
  iVar5 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                 *(int *)(*(int *)((int)this + 4) + 0x1c8)),param_1);
  if (iVar5 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
    (*DAT_10121efc)(1,s_DEBUG__trigger_motion_affects__s_10119bfc,
                    **(int **)(iVar5 + 4) + *(int *)(DAT_10122044 + 0x98));
  }
  if (*(int *)((int)this + 0xb8) != 0) {
    if (*(int *)((int)this + 0xbc) == 0) {
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
        iVar3 = *(int *)(iVar5 + 4);
        (*DAT_10121efc)(1,s_DEBUG__Set_origin_from__f__f__f_10119bd8,(double)*(float *)(iVar3 + 8),
                        (double)*(float *)(iVar3 + 0xc),(double)*(float *)(iVar3 + 0x10));
      }
      pfVar6 = FUN_10058750(afStack_44,(int)this,param_1,
                            (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xb8)));
      iVar3 = *(int *)(iVar5 + 4);
      *(float *)(iVar3 + 8) = *pfVar6;
      *(float *)(iVar3 + 0xc) = pfVar6[1];
      *(float *)(iVar3 + 0x10) = pfVar6[2];
      bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
    }
    else {
      if (*(int *)((int)this + 0xbc) != 1) goto LAB_100a7aaf;
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
        iVar3 = *(int *)(iVar5 + 4);
        (*DAT_10121efc)(1,s_DEBUG__Set_origin_from__f__f__f_10119bd8,(double)*(float *)(iVar3 + 8),
                        (double)*(float *)(iVar3 + 0xc),(double)*(float *)(iVar3 + 0x10));
      }
      pfVar6 = FUN_10058820(afStack_50,(int)this,param_1,
                            (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xb8)));
      iVar3 = *(int *)(iVar5 + 4);
      fStack_5c = *pfVar6 + *(float *)(iVar3 + 8);
      fStack_58 = pfVar6[1] + *(float *)(iVar3 + 0xc);
      fStack_54 = pfVar6[2] + *(float *)(iVar3 + 0x10);
      *(float *)(iVar3 + 8) = fStack_5c;
      *(float *)(iVar3 + 0xc) = fStack_58;
      *(float *)(iVar3 + 0x10) = fStack_54;
      bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
    }
    if ((bVar2 & 1) != 0) {
      iVar3 = *(int *)(iVar5 + 4);
      (*DAT_10121efc)(1,s_to__f__f__f_10119bc8,(double)*(float *)(iVar3 + 8),
                      (double)*(float *)(iVar3 + 0xc),(double)*(float *)(iVar3 + 0x10));
    }
    *(uint *)(*(int *)(iVar5 + 4) + 0x1a4) = *(uint *)(*(int *)(iVar5 + 4) + 0x1a4) & 0xfffffdff;
  }
LAB_100a7aaf:
  iVar3 = *(int *)((int)this + 0xc0);
  if (iVar3 == 0) goto LAB_100a7d1f;
  iVar4 = *(int *)((int)this + 0xc4);
  if (iVar4 == 0) {
    pfVar6 = FUN_10058820(afStack_38,(int)this,param_1,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + iVar3));
    fStack_74 = *pfVar6;
    fStack_70 = pfVar6[1];
    fStack_6c = pfVar6[2];
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
      iVar3 = *(int *)(iVar5 + 4);
      (*DAT_10121efc)(1,s_DEBUG__Set_angles_from__f__f__f_10119b80,(double)*(float *)(iVar3 + 0x50),
                      (double)*(float *)(iVar3 + 0x54),(double)*(float *)(iVar3 + 0x58));
    }
    puVar7 = (undefined4 *)FUN_100ae830(afStack_2c,&fStack_74);
    iVar3 = *(int *)(iVar5 + 4);
    *(undefined4 *)(iVar3 + 0x50) = *puVar7;
    *(undefined4 *)(iVar3 + 0x54) = puVar7[1];
    *(undefined4 *)(iVar3 + 0x58) = puVar7[2];
    bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
joined_r0x100a7cef:
    if ((bVar2 & 1) != 0) {
LAB_100a7cf1:
      iVar3 = *(int *)(iVar5 + 4);
      (*DAT_10121efc)(1,s_to__f__f__f_10119bc8,(double)*(float *)(iVar3 + 0x50),
                      (double)*(float *)(iVar3 + 0x54),(double)*(float *)(iVar3 + 0x58));
    }
  }
  else {
    if (iVar4 == 1) {
      pfVar6 = FUN_10058820(afStack_44,(int)this,param_1,
                            (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 200)));
      fStack_74 = *pfVar6;
      fStack_70 = pfVar6[1];
      fStack_6c = pfVar6[2];
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
        iVar3 = *(int *)(iVar5 + 4);
        (*DAT_10121efc)(1,s_DEBUG__Rotate_angles_from__f__f___10119ba4,
                        (double)*(float *)(iVar3 + 0x50),(double)*(float *)(iVar3 + 0x54),
                        (double)*(float *)(iVar3 + 0x58));
      }
      pfVar6 = (float *)FUN_100ae830(afStack_50,&fStack_74);
      iVar3 = *(int *)(iVar5 + 4);
      fStack_5c = *pfVar6 + *(float *)(iVar3 + 0x50);
      fStack_58 = pfVar6[1] + *(float *)(iVar3 + 0x54);
      fStack_54 = pfVar6[2] + *(float *)(iVar3 + 0x58);
      *(float *)(iVar3 + 0x50) = fStack_5c;
      *(float *)(iVar3 + 0x54) = fStack_58;
      *(float *)(iVar3 + 0x58) = fStack_54;
      bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
      goto joined_r0x100a7cef;
    }
    if (iVar4 == 2) {
      FUN_100b0920(&fStack_74,(char *)(*(int *)(DAT_10122044 + 0x98) + iVar3));
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
        iVar3 = *(int *)(iVar5 + 4);
        (*DAT_10121efc)(1,s_DEBUG__Rotate_angles_from__f__f___10119ba4,
                        (double)*(float *)(iVar3 + 0x50),(double)*(float *)(iVar3 + 0x54),
                        (double)*(float *)(iVar3 + 0x58));
      }
      iVar3 = *(int *)(iVar5 + 4);
      fStack_5c = fStack_74 + *(float *)(iVar3 + 0x50);
      fStack_58 = fStack_70 + *(float *)(iVar3 + 0x54);
      fStack_54 = fStack_6c + *(float *)(iVar3 + 0x58);
      *(float *)(iVar3 + 0x50) = fStack_5c;
      *(float *)(iVar3 + 0x54) = fStack_58;
      *(float *)(iVar3 + 0x58) = fStack_54;
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) == 0) goto LAB_100a7d1f;
      goto LAB_100a7cf1;
    }
  }
LAB_100a7d1f:
  iVar3 = *(int *)((int)this + 200);
  if (iVar3 != 0) {
    switch(*(undefined4 *)((int)this + 0xcc)) {
    case 0:
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
        iVar3 = *(int *)(iVar5 + 4);
        (*DAT_10121efc)(1,s_DEBUG__Set_velocity_from__f__f___10119b5c,
                        (double)*(float *)(iVar3 + 0x20),(double)*(float *)(iVar3 + 0x24),
                        (double)*(float *)(iVar3 + 0x28));
      }
      pfVar6 = FUN_10058820(afStack_2c,(int)this,param_1,
                            (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 200)));
      iVar3 = *(int *)(iVar5 + 4);
      *(float *)(iVar3 + 0x20) = *pfVar6;
      *(float *)(iVar3 + 0x24) = pfVar6[1];
      *(float *)(iVar3 + 0x28) = pfVar6[2];
      bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
      break;
    case 1:
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
        iVar3 = *(int *)(iVar5 + 4);
        (*DAT_10121efc)(1,s_DEBUG__Set_velocity_from__f__f___10119b5c,
                        (double)*(float *)(iVar3 + 0x20),(double)*(float *)(iVar3 + 0x24),
                        (double)*(float *)(iVar3 + 0x28));
      }
      pfVar6 = FUN_10058820(afStack_38,(int)this,param_1,
                            (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 200)));
      iVar3 = *(int *)(iVar5 + 4);
      fStack_5c = *pfVar6 + *(float *)(iVar3 + 0x20);
      fStack_58 = pfVar6[1] + *(float *)(iVar3 + 0x24);
      fStack_54 = pfVar6[2] + *(float *)(iVar3 + 0x28);
      *(float *)(iVar3 + 0x20) = fStack_5c;
      *(float *)(iVar3 + 0x24) = fStack_58;
      *(float *)(iVar3 + 0x28) = fStack_54;
      bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
      break;
    case 2:
      pfVar6 = FUN_10058820(afStack_44,(int)this,param_1,
                            (byte *)(*(int *)(DAT_10122044 + 0x98) + iVar3));
      fStack_74 = *pfVar6;
      fStack_70 = pfVar6[1];
      fStack_6c = pfVar6[2];
      pfVar6 = (float *)FUN_100ae830(afStack_50,*(int *)(iVar5 + 4) + 0x20);
      pfVar8 = (float *)FUN_100ae830(auStack_20,&fStack_74);
      fStack_68 = *pfVar6 + *pfVar8;
      fStack_64 = pfVar6[1] + pfVar8[1];
      fStack_60 = pfVar6[2] + pfVar8[2];
      fStack_5c = fStack_68;
      fStack_58 = fStack_64;
      fStack_54 = fStack_60;
      FUN_100af200(&fStack_68);
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
        iVar3 = *(int *)(iVar5 + 4);
        (*DAT_10121efc)(1,s_DEBUG__Rotate_velocity_from__f___10119b34,
                        (double)*(float *)(iVar3 + 0x20),(double)*(float *)(iVar3 + 0x24),
                        (double)*(float *)(iVar3 + 0x28));
      }
      iVar3 = *(int *)(iVar5 + 4);
      fVar1 = *(float *)(iVar3 + 0x20);
      fStack_54 = SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                       *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) + fVar1 * fVar1);
      fStack_5c = fStack_54 * *(float *)(DAT_10122044 + 0x28);
      fStack_58 = fStack_54 * *(float *)(DAT_10122044 + 0x2c);
      fStack_54 = fStack_54 * *(float *)(DAT_10122044 + 0x30);
      *(float *)(iVar3 + 0x20) = fStack_5c;
      *(float *)(iVar3 + 0x24) = fStack_58;
      *(float *)(iVar3 + 0x28) = fStack_54;
      *(float *)(*(int *)(iVar5 + 4) + 0x28) = -*(float *)(*(int *)(iVar5 + 4) + 0x28);
      bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
      break;
    case 3:
      FUN_100b0920(&fStack_74,(char *)(*(int *)(DAT_10122044 + 0x98) + iVar3));
      pfVar6 = (float *)FUN_100ae830(auStack_14,*(int *)(iVar5 + 4) + 0x20);
      fStack_68 = fStack_74 + *pfVar6;
      fStack_64 = fStack_70 + pfVar6[1];
      fStack_60 = fStack_6c + pfVar6[2];
      fStack_5c = fStack_68;
      fStack_58 = fStack_64;
      fStack_54 = fStack_60;
      FUN_100af200(&fStack_68);
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
        iVar3 = *(int *)(iVar5 + 4);
        (*DAT_10121efc)(1,s_DEBUG__Rotate_velocity_from__f___10119b34,
                        (double)*(float *)(iVar3 + 0x20),(double)*(float *)(iVar3 + 0x24),
                        (double)*(float *)(iVar3 + 0x28));
      }
      iVar3 = *(int *)(iVar5 + 4);
      fVar1 = *(float *)(iVar3 + 0x20);
      fStack_54 = SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                       *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) + fVar1 * fVar1);
      fStack_5c = fStack_54 * *(float *)(DAT_10122044 + 0x28);
      fStack_58 = fStack_54 * *(float *)(DAT_10122044 + 0x2c);
      fStack_54 = fStack_54 * *(float *)(DAT_10122044 + 0x30);
      *(float *)(iVar3 + 0x20) = fStack_5c;
      *(float *)(iVar3 + 0x24) = fStack_58;
      *(float *)(iVar3 + 0x28) = fStack_54;
      *(float *)(*(int *)(iVar5 + 4) + 0x28) = -*(float *)(*(int *)(iVar5 + 4) + 0x28);
      bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
      break;
    default:
      goto switchD_100a7d3c_default;
    }
    if ((bVar2 & 1) != 0) {
      iVar3 = *(int *)(iVar5 + 4);
      (*DAT_10121efc)(1,s_to__f__f__f_10119bc8,(double)*(float *)(iVar3 + 0x20),
                      (double)*(float *)(iVar3 + 0x24),(double)*(float *)(iVar3 + 0x28));
    }
  }
switchD_100a7d3c_default:
  if (*(int *)((int)this + 0xd4) == 0) {
    FUN_100b0920(&fStack_74,(char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xd0)));
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
      iVar3 = *(int *)(iVar5 + 4);
      (*DAT_10121efc)(1,s_DEBUG__Set_avelocity_from__f__f___10119b10,
                      (double)*(float *)(iVar3 + 0x5c),(double)*(float *)(iVar3 + 0x60),
                      (double)*(float *)(iVar3 + 100));
    }
    iVar3 = *(int *)(iVar5 + 4);
    *(float *)(iVar3 + 0x5c) = fStack_74;
    *(float *)(iVar3 + 0x60) = fStack_70;
    *(float *)(iVar3 + 100) = fStack_6c;
    bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
  }
  else {
    if (*(int *)((int)this + 0xd4) != 1) {
      return;
    }
    FUN_100b0920(&fStack_74,(char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xd0)));
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
      iVar3 = *(int *)(iVar5 + 4);
      (*DAT_10121efc)(1,s_DEBUG__Set_avelocity_from__f__f___10119b10,
                      (double)*(float *)(iVar3 + 0x5c),(double)*(float *)(iVar3 + 0x60),
                      (double)*(float *)(iVar3 + 100));
    }
    iVar3 = *(int *)(iVar5 + 4);
    fStack_5c = fStack_74 + *(float *)(iVar3 + 0x5c);
    fStack_58 = fStack_70 + *(float *)(iVar3 + 0x60);
    fStack_54 = fStack_6c + *(float *)(iVar3 + 100);
    *(float *)(iVar3 + 0x5c) = fStack_5c;
    *(float *)(iVar3 + 0x60) = fStack_58;
    *(float *)(iVar3 + 100) = fStack_54;
    bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
  }
  if ((bVar2 & 1) != 0) {
    iVar5 = *(int *)(iVar5 + 4);
    (*DAT_10121efc)(1,s_to__f__f__f_10119bc8,(double)*(float *)(iVar5 + 0x5c),
                    (double)*(float *)(iVar5 + 0x60),(double)*(float *)(iVar5 + 100));
  }
  return;
}

