
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10020cd0(void *this,float *param_1,int param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,float param_10,
            undefined4 param_11,float param_12,float param_13,undefined4 param_14,int param_15,
            float param_16,int param_17)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float fVar15;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  void *local_a4;
  int local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [4];
  float local_28;
  undefined4 auStack_24 [7];
  int local_8;
  
  local_9c = *(float *)(DAT_10122044 + 0x40);
  local_98 = *(float *)(DAT_10122044 + 0x44);
  local_94 = *(float *)(DAT_10122044 + 0x48);
  local_80 = *(float *)(DAT_10122044 + 0x34);
  local_7c = *(float *)(DAT_10122044 + 0x38);
  local_78 = *(float *)(DAT_10122044 + 0x3c);
  fVar4 = param_16;
  if (param_16 == 0.0) {
    fVar4 = *(float *)((int)this + 4);
  }
  local_a4 = this;
  FUN_100b2bd0();
  fVar1 = param_13;
  DAT_10131d00 = 0x1002;
  if (param_2 != 0) {
    local_a0 = param_2;
    iVar13 = param_17 + 1;
    do {
      local_90 = iVar13 + 1;
      fVar5 = FUN_100ae4b0(local_90,-0.5,0x3f000000);
      fVar6 = FUN_100ae4b0(iVar13,-0.5,0x3f000000);
      fVar8 = 0.5;
      local_a8 = (float)(fVar6 + (float10)(float)fVar5);
      fVar5 = FUN_100ae4b0(iVar13 + 3,-0.5,0x3f000000);
      fVar6 = FUN_100ae4b0(iVar13 + 2,-0.5,0x3f000000);
      local_b8 = (float)(fVar6 + (float10)(float)fVar5);
      fVar15 = param_10 * local_b8;
      FUN_10001d60(&local_44,fVar15 * local_80,local_7c * fVar15,local_78 * fVar15);
      fVar15 = param_9 * local_a8;
      FUN_10001d60(&local_68,fVar15 * local_9c,local_98 * fVar15,local_94 * fVar15);
      local_58 = param_7 + local_64;
      local_54 = param_8 + local_60;
      local_b4 = param_6 + local_68 + local_44;
      local_b0 = local_40 + local_58;
      local_ac = local_3c + local_54;
      local_4c = local_b0 * param_12;
      local_48 = local_ac * param_12;
      local_8c = local_b4 * param_12 + param_3;
      local_88 = param_4 + local_4c;
      local_84 = param_5 + local_48;
      pfVar12 = &local_74;
      pfVar14 = *(float **)(*(int *)((int)this + 4) + 0x208);
      iVar13 = 0;
      local_74 = local_8c;
      local_70 = local_88;
      local_6c = local_84;
      FUN_100afc60(&param_3,pfVar12,0,pfVar14,local_38);
      if (local_28 != (float)_DAT_100dd628) {
        iVar2 = local_8;
        if ((local_8 == 0) && (iVar2 = (*DAT_10121f1c)(), iVar2 == 0)) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = *(int **)(iVar2 + 0x7c);
        }
        fVar8 = fVar4;
        if (param_15 == 0) {
          switch(fVar1) {
          case 0.0:
            iVar2 = *piVar3;
            pfVar14 = local_38;
            FUN_10003850(&stack0xffffff24,&local_b4);
            (**(code **)(iVar2 + 0x5c))();
            fVar15 = 0.0;
            pfVar10 = &local_74;
            uVar9 = 0x10021096;
            FUN_10003850(&stack0xffffff28,pfVar10);
            FUN_10003850(&stack0xffffff1c,&param_3);
            FUN_10094fd0((int)local_38,fVar8,uVar9,pfVar10,pfVar12,iVar13,pfVar14,fVar15);
            if (local_8 != 0) {
              pfVar14 = (float *)0x100210cc;
              iVar2 = (*DAT_10121f20)();
              if (iVar2 != 0) {
                iVar2 = local_8;
                if (local_8 != 0) {
                  iVar2 = local_8 + 0x80;
                }
                if (*(int *)(iVar2 + 0x148) != 0) {
                  pfVar14 = (float *)0x0;
                  iVar13 = (*DAT_10121f70)();
                  iVar13 = iVar13 + 0x19;
                  pfVar12 = local_38;
                  FUN_100b0450((int)pfVar12,iVar13);
                }
              }
            }
            goto LAB_10021134;
          default:
            iVar2 = *piVar3;
            pfVar14 = local_38;
            FUN_10003850(&stack0xffffff24,&local_b4);
            break;
          case 2.8026e-45:
            iVar2 = *piVar3;
            pfVar14 = local_38;
            FUN_10003850(&stack0xffffff24,&local_b4);
            break;
          case 4.2039e-45:
            iVar2 = *piVar3;
            pfVar14 = local_38;
            FUN_10003850(&stack0xffffff24,&local_b4);
            break;
          case 5.60519e-45:
            iVar2 = *piVar3;
            pfVar14 = local_38;
            FUN_10003850(&stack0xffffff24,&local_b4);
          }
          (**(code **)(iVar2 + 0x5c))();
        }
        else {
          iVar2 = *piVar3;
          pfVar14 = local_38;
          FUN_10003850(&stack0xffffff24,&local_b4);
          (**(code **)(iVar2 + 0x5c))();
          pfVar10 = &local_74;
          uVar9 = 0x10020fa0;
          fVar15 = fVar1;
          FUN_10003850(&stack0xffffff28,pfVar10);
          FUN_10003850(&stack0xffffff1c,&param_3);
          FUN_10094fd0((int)local_38,fVar8,uVar9,pfVar10,pfVar12,iVar13,pfVar14,fVar15);
          FUN_100b2ce0((int)local_38,(int)fVar1);
        }
      }
LAB_10021134:
      lVar7 = __ftol();
      iVar2 = (int)lVar7;
      puVar11 = auStack_24;
      uVar9 = 0x10021160;
      FUN_10003850(&stack0xffffff28,puVar11);
      FUN_10003850(&stack0xffffff1c,&param_3);
      FUN_100b0dd0(fVar8,uVar9,(float)puVar11,pfVar12,iVar13,(float)pfVar14,iVar2);
      local_a0 = local_a0 + -1;
      this = local_a4;
      iVar13 = local_90;
    } while (local_a0 != 0);
  }
  FUN_100b2bf0(*(undefined4 *)((int)this + 4),fVar4);
  *param_1 = param_9 * local_a8;
  param_1[2] = 0.0;
  param_1[1] = param_10 * local_b8;
  return;
}

