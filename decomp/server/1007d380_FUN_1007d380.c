
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007d380(int param_1)

{
  uint *this;
  void *pvVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  longlong lVar8;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  float afStack_44 [3];
  undefined1 auStack_38 [48];
  int iStack_8;
  
  if (((*(uint *)(*(int *)(param_1 + 4) + 0x180) | *(uint *)(param_1 + 0x330) |
       *(uint *)(param_1 + 0x334)) & 0x20) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x330) & 0x20) != 0) {
    this = (uint *)(param_1 + 0x4dc);
    bVar2 = FUN_10019450(this);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      piVar3 = (int *)FUN_10019460(this);
      (**(code **)(*piVar3 + 0xe4))(param_1,param_1,0,0);
      FUN_10019420(this,0);
      return;
    }
    if ((*(uint *)(param_1 + 0x364) & 2) != 0) {
      *(undefined4 *)(param_1 + 0x4d4) = 0xc0;
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
      return;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x19c);
    if ((((iVar4 != 0) || (iVar4 = (*DAT_10121f1c)(0), iVar4 != 0)) &&
        (piVar3 = *(int **)(iVar4 + 0x7c), piVar3 != (int *)0x0)) &&
       ((((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 2) == 0 &&
         ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x200) != 0)) &&
        ((uVar5 = (**(code **)(*piVar3 + 0x3c))(), (uVar5 & 0x40) != 0 &&
         (iVar4 = (**(code **)(*piVar3 + 0xb0))(*(undefined4 *)(param_1 + 4)), iVar4 != 0)))))) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      iVar4 = *(int *)(piVar3[1] + 0x184);
      lVar8 = __ftol();
      uVar5 = FUN_1007b460((int)lVar8,iVar4);
      *(uint *)(param_1 + 0x4d4) = uVar5 | 0xc0;
      pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x208);
      FUN_10094b20(pvVar1,pvVar1,3,s_plats_train_use1_wav_10105954,0x3f4ccccd,0x3f4ccccd,0,100);
      return;
    }
  }
  local_60 = 0.7;
  FUN_100af200(*(int *)(param_1 + 4) + 0x74);
  iVar4 = *(int *)(param_1 + 4);
  fStack_6c = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddb10;
  fStack_68 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddb10;
  fStack_5c = *(float *)(iVar4 + 0x174) + *(float *)(iVar4 + 8) +
              *(float *)(DAT_10122044 + 0x28) * _DAT_100ddb10;
  fStack_58 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 0xc) + fStack_6c;
  fStack_54 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0x10) + fStack_68;
  fStack_80 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0x10);
  fStack_84 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 0xc);
  fStack_88 = *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0x174);
  FUN_100afc60(&fStack_88,&fStack_5c,0,*(undefined4 *)(iVar4 + 0x208),auStack_38);
  if (((iStack_8 == 0) || (piVar3 = *(int **)(iStack_8 + 0x7c), piVar3 == (int *)0x0)) ||
     (uVar5 = (**(code **)(*piVar3 + 0x3c))(), (uVar5 & 0x38) == 0)) {
    piVar6 = (int *)FUN_100aeba0(0,*(int *)(param_1 + 4) + 8,0x42800000);
    piVar3 = (int *)0x0;
    for (; piVar6 != (int *)0x0;
        piVar6 = (int *)FUN_100aeba0((int)piVar6,*(int *)(param_1 + 4) + 8,0x42800000)) {
      uVar5 = (**(code **)(*piVar6 + 0x3c))();
      if (((uVar5 & 0x38) != 0) && ((uVar5 & 0x100) == 0)) {
        iVar4 = *(int *)(param_1 + 4);
        fStack_70 = *(float *)(iVar4 + 0x174) + *(float *)(iVar4 + 8);
        fStack_6c = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 0xc);
        fStack_68 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0x10);
        pfVar7 = (float *)FUN_10010f30(afStack_50,piVar6[1]);
        fStack_88 = *pfVar7 - fStack_70;
        fStack_84 = pfVar7[1] - fStack_6c;
        fStack_80 = pfVar7[2] - fStack_68;
        iVar4 = piVar6[1];
        fStack_54 = *(float *)(iVar4 + 0xfc) * _DAT_100dd614;
        fStack_58 = *(float *)(iVar4 + 0xf8) * _DAT_100dd614;
        fStack_5c = *(float *)(iVar4 + 0xf4) * _DAT_100dd614;
        fStack_7c = fStack_88;
        fStack_78 = fStack_84;
        fStack_74 = fStack_80;
        pfVar7 = (float *)FUN_100b0ac0(afStack_44,&fStack_7c,&fStack_5c);
        fStack_7c = *pfVar7;
        fStack_78 = pfVar7[1];
        fStack_74 = pfVar7[2];
        fStack_64 = fStack_7c * *(float *)(DAT_10122044 + 0x28) +
                    fStack_78 * *(float *)(DAT_10122044 + 0x2c) +
                    fStack_74 * *(float *)(DAT_10122044 + 0x30);
        if ((local_60 < fStack_64) ||
           (((fStack_7c == DAT_10121dd8 && (fStack_78 == DAT_10121ddc)) &&
            (fStack_74 == DAT_10121de0)))) {
          piVar3 = piVar6;
          local_60 = fStack_64;
        }
      }
    }
    if (piVar3 == (int *)0x0) {
      if ((*(byte *)(param_1 + 0x330) & 0x20) == 0) {
        return;
      }
      FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),3,
                   s_common_wpn_denyselect_wav_101057d8,0x3ecccccd,0x3f4ccccd,0,100);
      return;
    }
  }
  uVar5 = (**(code **)(*piVar3 + 0x3c))();
  if ((*(byte *)(param_1 + 0x330) & 0x20) != 0) {
    pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x208);
    FUN_10094b20(pvVar1,pvVar1,3,s_common_wpn_select_wav_101057f4,0x3ecccccd,0x3f4ccccd,0,100);
  }
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) == 0) || ((uVar5 & 0x10) == 0)) {
    if (((*(byte *)(param_1 + 0x330) & 0x20) == 0) || ((uVar5 & 0x28) == 0)) {
      if ((*(byte *)(param_1 + 0x334) & 0x20) == 0) {
        return;
      }
      uVar5 = (**(code **)(*piVar3 + 0x3c))();
      if ((uVar5 & 0x20) == 0) {
        return;
      }
      (**(code **)(*piVar3 + 0xe4))(param_1,param_1,2,0);
      return;
    }
    if ((uVar5 & 0x10) == 0) goto LAB_1007d7cb;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x10;
LAB_1007d7cb:
  (**(code **)(*piVar3 + 0xe4))(param_1,param_1,2,0x3f800000);
  return;
}

