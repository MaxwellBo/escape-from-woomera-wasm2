
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000fe90(void *this,int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  switch(*param_1) {
  case 0x25:
    uVar13 = 0x6400000000;
    uVar12 = 0x3f4ccccd;
    uVar10 = *(undefined4 *)(*(int *)((int)this + 4) + 0x208);
    uVar11 = 0x3f800000;
    iVar8 = (*DAT_10121f70)(0,2);
    FUN_10094b20((&PTR_s_gonarch_gon_attack1_wav_10103474)[iVar8],uVar10,2,
                 (&PTR_s_gonarch_gon_attack1_wav_10103474)[iVar8],uVar11,uVar12,(int)uVar13,
                 (int)((ulonglong)uVar13 >> 0x20));
  default:
    FUN_100057f0(this,param_1);
    return;
  case 0x5d:
    iVar8 = FUN_10019410((uint *)((int)this + 0x168));
    if (iVar8 == 0) {
      uVar2 = *(uint *)((int)this + 0x15c);
    }
    else {
      iVar9 = *(int *)(iVar8 + 4);
      iVar3 = *(int *)((int)this + 4);
      fVar4 = *(float *)(iVar9 + 8) - *(float *)(iVar3 + 8);
      fVar6 = *(float *)(iVar9 + 0xc) - *(float *)(iVar3 + 0xc);
      fVar5 = *(float *)(iVar9 + 0x10) - *(float *)(iVar3 + 0x10);
      iVar9 = FUN_10019410((uint *)((int)this + 0x168));
      fVar7 = _DAT_100df2a0;
      if (iVar9 != 0) {
        fVar7 = *(float *)(*(int *)(iVar9 + 4) + 0x144);
      }
      if (SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) < fVar7) {
        if ((*(uint *)((int)this + 0x15c) & 0x40000000) == 0) {
          *(undefined4 *)((int)this + 0x1e0) = 4;
        }
        goto LAB_10010290;
      }
      iVar8 = *(int *)(iVar8 + 4);
      uVar10 = 3;
      if ((*(byte *)(iVar8 + 0x1a0) & 1) != 0) {
        uVar10 = 4;
      }
      *(undefined4 *)((int)this + 0x278) = *(undefined4 *)(iVar8 + 8);
      *(undefined4 *)((int)this + 0x27c) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined4 *)((int)this + 0x280) = *(undefined4 *)(iVar8 + 0x10);
      iVar8 = FUN_1005d500(this,uVar10,0x40000000);
      if (iVar8 != 0) goto LAB_10010290;
      uVar2 = *(uint *)((int)this + 0x15c);
    }
    *(uint *)((int)this + 0x15c) = uVar2 | 0x40000000;
LAB_10010290:
    (*DAT_10121efc)(2,s_BM__Moving_to_node__s_1010397c,
                    *(int *)(*(int *)((int)this + 4) + 0x1d0) + (int)DAT_10122044[0x26]);
    return;
  case 0x5e:
    iVar8 = FUN_10019410((uint *)((int)this + 0x168));
    if (((*(uint *)((int)this + 0x2a0) & 0x40000000) == 0) && (iVar8 != 0)) {
      iVar8 = FUN_10019460((uint *)((int)this + 0x168));
      *(undefined4 *)(*(int *)((int)this + 4) + 0x1d0) =
           *(undefined4 *)(*(int *)(iVar8 + 4) + 0x1c8);
    }
    FUN_1000f980(this,*(undefined4 *)(*(int *)((int)this + 4) + 0x1d0));
    if ((*(uint *)((int)this + 0x15c) & 0x40000000) == 0) {
      *(undefined4 *)((int)this + 0x1e0) = 4;
    }
    (*DAT_10121efc)(2,s_BM__Found_node__s_10103a38,
                    (int)DAT_10122044[0x26] + *(int *)(*(int *)((int)this + 4) + 0x1d0));
    return;
  case 0x5f:
  case 0x60:
    puVar1 = (uint *)((int)this + 0x168);
    if (*param_1 == 0x60) {
      iVar8 = FUN_10019410(puVar1);
      if (iVar8 == 0) {
LAB_1000ffec:
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(iVar8 + 4) + 0x1d0);
      }
    }
    else {
      iVar8 = FUN_10019410(puVar1);
      if (iVar8 == 0) goto LAB_1000ffec;
      iVar8 = *(int *)(iVar8 + 0xb8);
    }
    (*DAT_10121efc)(2,s_BM__Playing_node_sequence__s_101039e8);
    if ((iVar8 != 0) &&
       (iVar8 = FUN_10008160(this,(byte *)((int)DAT_10122044[0x26] + iVar8)), iVar8 != -1)) {
      *(int *)(*(int *)((int)this + 4) + 0x128) = iVar8;
      *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
      FUN_10008190((int)this);
      iVar8 = FUN_10019410(puVar1);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(iVar8 + 4) + 0x1d0);
      }
      (*DAT_10121efc)(2,s_BM__Sequence__s_101039d4,(int)DAT_10122044[0x26] + iVar8);
      return;
    }
    break;
  case 0x61:
    (*DAT_10121efc)(2,s_BM__Reached_node__s_10103a08,
                    *(int *)(*(int *)((int)this + 4) + 0x1d0) + (int)DAT_10122044[0x26]);
    FUN_1000fa00(this);
    break;
  case 0x62:
    puVar1 = (uint *)((int)this + 0x168);
    iVar8 = FUN_10019410(puVar1);
    fVar4 = _DAT_100dd5f8;
    if (iVar8 != 0) {
      fVar4 = *(float *)(*(int *)(iVar8 + 4) + 0x1f8);
    }
    *(float *)((int)this + 0xe8) = fVar4 + *DAT_10122044;
    iVar8 = FUN_10019460(puVar1);
    if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a0) & 2) == 0) {
      iVar8 = FUN_10019410(puVar1);
      fVar4 = _DAT_100dd5f8;
      if (iVar8 != 0) {
        fVar4 = *(float *)(*(int *)(iVar8 + 4) + 0x1f8);
      }
      (*DAT_10121efc)(2,s_BM__Wait_at_node__s_for___2f_10103994,
                      *(int *)(*(int *)((int)this + 4) + 0x1d0) + (int)DAT_10122044[0x26],
                      (double)fVar4);
      return;
    }
    (*DAT_10121efc)(2,s_BM__Wait_at_node__s_forever_101039b4,
                    *(int *)(*(int *)((int)this + 4) + 0x1d0) + (int)DAT_10122044[0x26]);
    return;
  case 99:
    *(float *)((int)this + 0x308) = *DAT_10122044 + (float)param_1[1];
    if ((*(uint *)((int)this + 0x15c) & 0x40000000) == 0) {
      *(undefined4 *)((int)this + 0x1e0) = 4;
    }
    (*DAT_10121efc)(2,s_BM__FAIL__Delay___2f_10103a20,(double)(float)param_1[1]);
    return;
  case 100:
    iVar8 = FUN_10019410((uint *)((int)this + 0x168));
    if ((iVar8 == 0) || (*(float *)(*(int *)(iVar8 + 4) + 0x54) == _DAT_100dd5f8)) {
      uVar10 = *(undefined4 *)(*(int *)((int)this + 4) + 0x54);
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x54);
    }
    *(undefined4 *)(*(int *)((int)this + 4) + 0xac) = uVar10;
  }
  if ((*(uint *)((int)this + 0x15c) & 0x40000000) != 0) {
    return;
  }
  *(undefined4 *)((int)this + 0x1e0) = 4;
  return;
}

