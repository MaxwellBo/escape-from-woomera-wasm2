
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040289(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,int param_5
                 ,CBaseEntity *param_6,int param_7,float param_8,int *param_9)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  CBaseEntity *this;
  char cVar4;
  undefined3 uVar12;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  CBaseEntity *pCVar13;
  char *pcVar14;
  bool bVar15;
  float10 fVar16;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined1 auStack_4 [4];
  
  this = param_6;
  uVar12 = (undefined3)((uint)param_7 >> 8);
  cVar4 = (char)param_7 + *(char *)(param_7 + param_5);
  iVar9 = CONCAT31(uVar12,cVar4 + '\x10');
  piVar7 = (int *)(iVar9 + param_5 + -1);
  *piVar7 = *piVar7 + iVar9;
  puVar1 = (uint *)(iVar9 + param_5 + -1);
  *puVar1 = *puVar1 + iVar9;
  if ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) {
    iVar9 = CONCAT31(uVar12,cVar4 + ' ');
  }
  param_6[iVar9] = (CBaseEntity)((char)param_6[iVar9] + (char)iVar9);
  iVar9 = *param_9;
  if (iVar9 == 0x4d) {
    if (*(float *)(param_6 + 0x1c4) < *DAT_10122044) {
      *(undefined4 *)(*(int *)(param_6 + 4) + 0x15c) = 0x12;
      *(undefined4 *)(*(int *)(param_6 + 4) + 0x150) = 0x437f0000;
      *(undefined4 *)(*(int *)(param_6 + 4) + 0x154) = 0;
      *(undefined4 *)(*(int *)(param_6 + 4) + 0x158) = 0;
      *(undefined4 *)(*(int *)(param_6 + 4) + 0x138) = 0;
      (**(code **)(*(int *)param_6 + 8))(0x3e19999a);
      *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
      iVar9 = (*DAT_10121e18)(DAT_10121dc4);
      iVar6 = 10;
      do {
        iVar10 = (*DAT_10121e5c)();
        if (iVar10 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = iVar10 + 0x80;
        }
        iVar3 = *(int *)(iVar10 + 0x208);
        if ((iVar3 == 0) || (piVar7 = *(int **)(iVar3 + 0x7c), piVar7 == (int *)0x0)) {
          piVar7 = (int *)(*DAT_10121f04)(iVar3,200);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = (int)&PTR_FUN_100e0d98;
          }
          piVar7[1] = iVar10;
        }
        FUN_1001f200(piVar7,s_models_metalplategibs_mdl_10108d1c);
        uVar11 = 0;
        if (1 < iVar9) {
          uVar11 = (*DAT_10121f70)(0,*(int *)(*(int *)(this + 4) + 0x114) + -1);
        }
        *(undefined4 *)(piVar7[1] + 0x114) = uVar11;
        iVar10 = piVar7[1];
        piVar7[0x2e] = 0xc3;
        piVar7[0x30] = 9;
        iVar3 = *(int *)(this + 4);
        *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
        fVar16 = (float10)(*DAT_10121f74)(0x43960000,0x43fa0000);
        param_8 = (float)fVar16;
        pfVar8 = (float *)FUN_100b03b0(&param_4);
        fStack_14 = param_8 * *pfVar8;
        iVar10 = piVar7[1];
        fStack_10 = param_8 * pfVar8[1];
        fStack_c = param_8 * pfVar8[2];
        *(float *)(iVar10 + 0x20) = fStack_14;
        *(float *)(iVar10 + 0x24) = fStack_10;
        *(float *)(iVar10 + 0x28) = fStack_c;
        (**(code **)(*piVar7 + 8))(0x3fa00000);
        iVar6 = iVar6 + -1;
        piVar7[0x1d] = (int)CBaseEntity::SUB_FadeOut;
      } while (iVar6 != 0);
      (*DAT_10121ec0)(4,0x17,*(int *)(this + 4) + 8,0);
      (*DAT_10121ec8)(0x6c);
      (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
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
    if (iVar9 == 0x4f) {
      iVar9 = *(int *)(param_6 + 0x2fc);
      pcVar14 = s_scripted_action_10101ba8;
      pbVar5 = (byte *)(**(int **)(iVar9 + 4) + (int)DAT_10122044[0x26]);
      do {
        bVar2 = *pbVar5;
        bVar15 = bVar2 < (byte)*pcVar14;
        if (bVar2 != *pcVar14) {
LAB_1004033a:
          iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_1004033f;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar15 = bVar2 < (byte)pcVar14[1];
        if (bVar2 != pcVar14[1]) goto LAB_1004033a;
        pbVar5 = pbVar5 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_1004033f:
      if ((iVar6 == 0) && (*(int *)(iVar9 + 0x32c) == 3)) {
        if (*(int *)(param_6 + 0xd4) == 0) goto LAB_100403b8;
        if (*(int *)(iVar9 + 0x33c) < 1) {
          FUN_1003f3e0((int)param_6);
          FUN_1003ebc0(this,0.0,0.0);
          FUN_10008360(this,0,0.0);
          FUN_10008360(this,1,0.0);
          FUN_1008fef0(*(void **)(this + 0x2fc),this);
          return;
        }
      }
      FUN_10005140(param_6,param_9);
      return;
    }
    if (iVar9 == 0x5e) {
LAB_100403b8:
      if (*(float *)(param_6 + 0x1c4) < *DAT_10122044) {
        FUN_1003f3e0((int)param_6);
        if ((*(uint *)(this + 0x15c) & 0x40000000) == 0) {
          *(undefined4 *)(this + 0x1e0) = 4;
        }
        FUN_1003ebc0(this,0.0,0.0);
        FUN_10008360(this,0,0.0);
        FUN_10008360(this,1,0.0);
        return;
      }
      bVar15 = false;
      fStack_28 = DAT_10121dd8;
      fStack_24 = DAT_10121ddc;
      FUN_1003eca0(param_6);
      pCVar13 = this + 0x168;
      if (*(int *)(this + 0x2fc) == 0) {
        pCVar13 = this + 0x160;
      }
      piVar7 = (int *)FUN_10019410((uint *)pCVar13);
      if (piVar7 != (int *)0x0) {
        iVar9 = *(int *)(this + 4);
        fStack_10 = *(float *)(iVar9 + 8);
        fStack_c = *(float *)(iVar9 + 0xc);
        fStack_8 = *(float *)(iVar9 + 0x10) + _DAT_100ddb10;
        pfVar8 = (float *)(**(code **)(*piVar7 + 0x104))(auStack_4,&fStack_10);
        fStack_14 = pfVar8[2] - fStack_8;
        fStack_18 = pfVar8[1] - fStack_c;
        fStack_1c = *pfVar8 - fStack_10;
        pfVar8 = (float *)FUN_100ae830(&param_2,&fStack_1c);
        fStack_28 = -*pfVar8;
        fStack_24 = pfVar8[1] - *(float *)(*(int *)(this + 4) + 0x54);
        if (_DAT_100de4a8 <
            SQRT(fStack_1c * fStack_1c + fStack_14 * fStack_14 + fStack_18 * fStack_18)) {
          bVar15 = true;
        }
      }
      if (((float)_DAT_100ddb18 < ABS(fStack_24)) || (bVar15)) {
        *(float *)(this + 0x1c4) = *(float *)(this + 0x1c4) - (float)_DAT_100dd648;
        *(float *)(this + 0x324) = *(float *)(this + 0x324) - (float)_DAT_100dd648;
      }
      FUN_1003ebc0(this,fStack_28,fStack_24);
      return;
    }
  }
  FUN_10005140(param_6,param_9);
  return;
}

