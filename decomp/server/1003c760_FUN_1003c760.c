
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003c760(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  CLaserSpot *this;
  void *pvVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [3];
  float afStack_48 [3];
  float afStack_3c [3];
  undefined1 local_30 [12];
  float afStack_24 [3];
  float afStack_18 [3];
  float afStack_c [3];
  
  iVar2 = *(int *)(param_1 + 0xdc);
  if (iVar2 == 0) {
    (*DAT_10121efc)(4,s_TankSeq__StopSequence_with_no_ta_101095ac);
    return;
  }
  if (*(int *)(param_1 + 0xcc) == 1) {
    *(float *)(iVar2 + 0xcc) = *DAT_10122044 - _DAT_100dd618 / *(float *)(iVar2 + 0xd0);
    (*DAT_10121e58)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x50,local_30,0,0);
    iVar2 = *(int *)(param_1 + 0xdc);
    (*DAT_10121e58)(*(int *)(iVar2 + 4) + 0x50,&fStack_60,&fStack_6c,&fStack_78);
    fVar1 = *(float *)(iVar2 + 0x10c);
    FUN_10001d60(afStack_54,fStack_78 * fVar1,fStack_74 * fVar1,fStack_70 * fVar1);
    fVar1 = *(float *)(iVar2 + 0x108);
    FUN_10001d60(afStack_48,fStack_6c * fVar1,fStack_68 * fVar1,fStack_64 * fVar1);
    fVar1 = *(float *)(iVar2 + 0x104);
    FUN_10001d60(afStack_3c,fStack_60 * fVar1,fStack_5c * fVar1,fStack_58 * fVar1);
    pfVar10 = afStack_54;
    pfVar9 = afStack_24;
    pfVar8 = afStack_48;
    pfVar7 = afStack_18;
    pvVar5 = (void *)FUN_1000b550((void *)(*(int *)(iVar2 + 4) + 8),afStack_c,afStack_3c);
    pvVar5 = (void *)FUN_1000b550(pvVar5,pfVar7,pfVar8);
    FUN_1000b550(pvVar5,pfVar9,pfVar10);
    FUN_1003ab30(*(void **)(param_1 + 0xdc),afStack_24,local_30,
                 *(undefined4 *)((int)*(void **)(param_1 + 0xdc) + 4));
  }
  iVar2 = *(int *)(param_1 + 0xd8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
    uVar6 = *(uint *)(iVar3 + 0x1a0);
    if (((uVar6 & 0x40) == 0) || (iVar2 == 1)) {
      if (((uVar6 & 0x40) != 0) || (iVar2 == 2)) goto LAB_1003c909;
      uVar6 = uVar6 | 0x40;
    }
    else {
      uVar6 = uVar6 & 0xffffffbf;
    }
    *(uint *)(iVar3 + 0x1a0) = uVar6;
  }
LAB_1003c909:
  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar2 != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
    uVar6 = *(uint *)(iVar3 + 0x1a0);
    if (((uVar6 & 0x20) == 0) || (iVar2 == 1)) {
      if (((uVar6 & 0x20) != 0) || (iVar2 == 2)) goto LAB_1003c943;
      uVar6 = uVar6 | 0x20;
    }
    else {
      uVar6 = uVar6 & 0xffffffdf;
    }
    *(uint *)(iVar3 + 0x1a0) = uVar6;
  }
LAB_1003c943:
  FUN_100399c0(*(int *)(param_1 + 0xdc));
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) == 0) {
    FUN_100b0ef0(param_1);
  }
  piVar4 = *(int **)(param_1 + 0xdc);
  uVar6 = *(uint *)(piVar4[1] + 0x1a0) & 1;
  if ((uVar6 == 0) || ((*(int *)(param_1 + 0xd0) != 2 && (*(int *)(param_1 + 0xd0) != 3)))) {
    if ((uVar6 == 0) && ((*(int *)(param_1 + 0xd0) == 1 || (*(int *)(param_1 + 0xd0) == 3)))) {
      *(uint *)(piVar4[1] + 0x1a0) = *(uint *)(piVar4[1] + 0x1a0) | 1;
      (**(code **)(*piVar4 + 8))(0x3dcccccd);
      piVar4[0x33] = 0;
      this = *(CLaserSpot **)(*(int *)(param_1 + 0xdc) + 0xc4);
      if (this != (CLaserSpot *)0x0) {
        CLaserSpot::Revive(this);
      }
    }
  }
  else {
    *(uint *)(piVar4[1] + 0x1a0) = *(uint *)(piVar4[1] + 0x1a0) & 0xfffffffe;
    piVar4[0x33] = 0;
    FUN_1003afb0((int)piVar4);
    pvVar5 = *(void **)(*(int *)(param_1 + 0xdc) + 0xc4);
    if (pvVar5 != (void *)0x0) {
      FUN_1008b140(pvVar5,-1.0);
      *(undefined4 *)(param_1 + 0xdc) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}

