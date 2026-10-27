
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100402c0(CBaseEntity *param_1,int *param_2)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  CBaseEntity *pCVar11;
  char *pcVar12;
  bool bVar13;
  float10 fVar14;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_24 [12];
  undefined4 auStack_18 [2];
  float afStack_10 [4];
  
  iVar8 = *param_2;
  if (iVar8 == 0x4d) {
    if (*(float *)(param_1 + 0x1c4) < *DAT_10122044) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x15c) = 0x12;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x150) = 0x437f0000;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x154) = 0;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x158) = 0;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
      (**(code **)(*(int *)param_1 + 8))(0x3e19999a);
      *(code **)(param_1 + 0x74) = CBaseEntity::SUB_Remove;
      iVar8 = (*DAT_10121e18)(DAT_10121dc4);
      iVar5 = 10;
      do {
        iVar9 = (*DAT_10121e5c)();
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = iVar9 + 0x80;
        }
        iVar3 = *(int *)(iVar9 + 0x208);
        if ((iVar3 == 0) || (piVar6 = *(int **)(iVar3 + 0x7c), piVar6 == (int *)0x0)) {
          piVar6 = (int *)(*DAT_10121f04)(iVar3,200);
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            *piVar6 = (int)&PTR_FUN_100e0d98;
          }
          piVar6[1] = iVar9;
        }
        FUN_1001f200(piVar6,s_models_metalplategibs_mdl_10108d1c);
        uVar10 = 0;
        if (1 < iVar8) {
          uVar10 = (*DAT_10121f70)(0,*(int *)(*(int *)(param_1 + 4) + 0x114) + -1);
        }
        *(undefined4 *)(piVar6[1] + 0x114) = uVar10;
        iVar9 = piVar6[1];
        piVar6[0x2e] = 0xc3;
        piVar6[0x30] = 9;
        iVar3 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
        fVar14 = (float10)(*DAT_10121f74)(0x43960000,0x43fa0000);
        fVar1 = (float)fVar14;
        pfVar7 = (float *)FUN_100b03b0(afStack_10);
        fStack_34 = fVar1 * *pfVar7;
        iVar9 = piVar6[1];
        fStack_30 = fVar1 * pfVar7[1];
        fStack_2c = fVar1 * pfVar7[2];
        *(float *)(iVar9 + 0x20) = fStack_34;
        *(float *)(iVar9 + 0x24) = fStack_30;
        *(float *)(iVar9 + 0x28) = fStack_2c;
        (**(code **)(*piVar6 + 8))(0x3fa00000);
        iVar5 = iVar5 + -1;
        piVar6[0x1d] = (int)CBaseEntity::SUB_FadeOut;
      } while (iVar5 != 0);
      (*DAT_10121ec0)(4,0x17,*(int *)(param_1 + 4) + 8,0);
      (*DAT_10121ec8)(0x6c);
      (*DAT_10121edc)(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
      (*DAT_10121edc)(0x43480000);
      (*DAT_10121edc)(0x43480000);
      (*DAT_10121edc)(0x43000000);
      (*DAT_10121edc)(0);
      (*DAT_10121edc)(0);
      (*DAT_10121edc)(0);
      (*DAT_10121ec8)(200);
      (*DAT_10121ed0)(DAT_10121dc4);
      (*DAT_10121ec8)(0x32);
      (*DAT_10121ec8)(0x14);
      (*DAT_10121ec8)(4);
      (*DAT_10121ec4)();
      return;
    }
  }
  else {
    if (iVar8 == 0x4f) {
      iVar8 = *(int *)(param_1 + 0x2fc);
      pcVar12 = s_scripted_action_10101ba8;
      pbVar4 = (byte *)(**(int **)(iVar8 + 4) + (int)DAT_10122044[0x26]);
      do {
        bVar2 = *pbVar4;
        bVar13 = bVar2 < (byte)*pcVar12;
        if (bVar2 != *pcVar12) {
LAB_1004033a:
          iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_1004033f;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar13 = bVar2 < (byte)pcVar12[1];
        if (bVar2 != pcVar12[1]) goto LAB_1004033a;
        pbVar4 = pbVar4 + 2;
        pcVar12 = pcVar12 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_1004033f:
      if ((iVar5 == 0) && (*(int *)(iVar8 + 0x32c) == 3)) {
        if (*(int *)(param_1 + 0xd4) == 0) goto LAB_100403b8;
        if (*(int *)(iVar8 + 0x33c) < 1) {
          FUN_1003f3e0((int)param_1);
          FUN_1003ebc0(param_1,0.0,0.0);
          FUN_10008360(param_1,0,0.0);
          FUN_10008360(param_1,1,0.0);
          FUN_1008fef0(*(void **)(param_1 + 0x2fc),param_1);
          return;
        }
      }
      FUN_10005140(param_1,param_2);
      return;
    }
    if (iVar8 == 0x5e) {
LAB_100403b8:
      if (*(float *)(param_1 + 0x1c4) < *DAT_10122044) {
        FUN_1003f3e0((int)param_1);
        if ((*(uint *)(param_1 + 0x15c) & 0x40000000) == 0) {
          *(undefined4 *)(param_1 + 0x1e0) = 4;
        }
        FUN_1003ebc0(param_1,0.0,0.0);
        FUN_10008360(param_1,0,0.0);
        FUN_10008360(param_1,1,0.0);
        return;
      }
      bVar13 = false;
      fStack_48 = DAT_10121dd8;
      fStack_44 = DAT_10121ddc;
      FUN_1003eca0(param_1);
      pCVar11 = param_1 + 0x168;
      if (*(int *)(param_1 + 0x2fc) == 0) {
        pCVar11 = param_1 + 0x160;
      }
      piVar6 = (int *)FUN_10019410((uint *)pCVar11);
      if (piVar6 != (int *)0x0) {
        iVar8 = *(int *)(param_1 + 4);
        fStack_30 = *(float *)(iVar8 + 8);
        fStack_2c = *(float *)(iVar8 + 0xc);
        fStack_28 = *(float *)(iVar8 + 0x10) + _DAT_100ddb10;
        pfVar7 = (float *)(**(code **)(*piVar6 + 0x104))(auStack_24,&fStack_30);
        fStack_34 = pfVar7[2] - fStack_28;
        fStack_38 = pfVar7[1] - fStack_2c;
        fStack_3c = *pfVar7 - fStack_30;
        pfVar7 = (float *)FUN_100ae830(auStack_18,&fStack_3c);
        fStack_48 = -*pfVar7;
        fStack_44 = pfVar7[1] - *(float *)(*(int *)(param_1 + 4) + 0x54);
        if (_DAT_100de4a8 <
            SQRT(fStack_3c * fStack_3c + fStack_34 * fStack_34 + fStack_38 * fStack_38)) {
          bVar13 = true;
        }
      }
      if (((float)_DAT_100ddb18 < ABS(fStack_44)) || (bVar13)) {
        *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) - (float)_DAT_100dd648;
        *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) - (float)_DAT_100dd648;
      }
      FUN_1003ebc0(param_1,fStack_48,fStack_44);
      return;
    }
  }
  FUN_10005140(param_1,param_2);
  return;
}

