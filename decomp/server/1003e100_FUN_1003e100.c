
/* WARNING: Removing unreachable block (ram,0x1003e1d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003e100(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int iStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_3c [20];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_c;
  
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  iVar5 = param_1[1];
  fStack_7c = *(float *)(iVar5 + 8);
  fStack_78 = *(float *)(iVar5 + 0xc);
  fStack_74 = *(float *)(iVar5 + 0x10) + _DAT_100de4f8;
  fVar1 = *(float *)(iVar5 + 0x1f8);
  fVar2 = DAT_10122044[1];
  fStack_6c = fVar1 * *(float *)(iVar5 + 0x44) * fVar2 + fStack_7c;
  fStack_68 = fStack_78 + fVar1 * *(float *)(iVar5 + 0x48) * fVar2;
  fStack_64 = fVar1 * *(float *)(iVar5 + 0x4c) * fVar2 + fStack_74;
  FUN_100afc90(&fStack_7c,&fStack_6c,0,3,*(undefined4 *)(iVar5 + 0x208),auStack_3c);
  if (iStack_c != 0) {
    iVar5 = param_1[1];
    iVar3 = *(int *)(iVar5 + 0x198);
    if (iStack_c != iVar3) {
      iVar6 = iVar5;
      if (iVar3 != 0) {
        iVar6 = iVar3 + 0x80;
      }
      if (*(int **)(iStack_c + 0x7c) != (int *)0x0) {
        (**(code **)(**(int **)(iStack_c + 0x7c) + 0x60))(iVar5,iVar6,DAT_10126a90,0x200);
      }
    }
  }
  iVar5 = param_1[1];
  *(float *)(iVar5 + 0x1f8) =
       DAT_10122044[1] * *(float *)(iVar5 + 0x138) + *(float *)(iVar5 + 0x1f8);
  *(float *)(param_1[1] + 0x138) = DAT_10122044[1] * _DAT_100e0d84 + *(float *)(param_1[1] + 0x138);
  iVar5 = param_1[1];
  if ((float)_DAT_100e5210 < *DAT_10122044 - *(float *)(iVar5 + 0x1e4)) {
    do {
      fVar1 = *(float *)(iVar5 + 0x1f8);
      fStack_48 = fVar1 * *(float *)(iVar5 + 0x44);
      iStack_80 = 2;
      fStack_44 = fVar1 * *(float *)(iVar5 + 0x48);
      fStack_60 = fStack_48 * _DAT_100e5208;
      fStack_5c = fStack_44 * _DAT_100e5208;
      fVar1 = fVar1 * *(float *)(iVar5 + 0x4c) * _DAT_100e5208;
      *(float *)(iVar5 + 8) = fStack_60 + *(float *)(iVar5 + 8);
      *(float *)(iVar5 + 0xc) = fStack_5c + *(float *)(iVar5 + 0xc);
      *(float *)(iVar5 + 0x10) = fVar1 + *(float *)(iVar5 + 0x10);
      do {
        piVar4 = FUN_1002ca80(0x1010d03c,(undefined4 *)(param_1[1] + 8),1);
        if (piVar4 != (int *)0x0) {
          iVar5 = param_1[1];
          fStack_4c = *(float *)(iVar5 + 0x10) - _DAT_100df284;
          uStack_50 = *(undefined4 *)(iVar5 + 0xc);
          uStack_54 = *(undefined4 *)(iVar5 + 8);
          FUN_100afc60((undefined4 *)(iVar5 + 8),&uStack_54,1,*(undefined4 *)(iVar5 + 0x208),
                       auStack_3c);
          iVar5 = piVar4[1];
          *(undefined4 *)(iVar5 + 8) = uStack_28;
          *(undefined4 *)(iVar5 + 0xc) = uStack_24;
          *(undefined4 *)(iVar5 + 0x10) = uStack_20;
          fVar7 = (float10)(*DAT_10121f74)(0xc3480000,0x43480000);
          fStack_70 = (float)fVar7;
          fVar7 = (float10)(*DAT_10121f74)(0xc3480000,0x43480000);
          iVar5 = piVar4[1];
          *(float *)(iVar5 + 0x20) = (float)fVar7;
          *(float *)(iVar5 + 0x24) = fStack_70;
          *(undefined4 *)(iVar5 + 0x28) = 0x432f0000;
          (**(code **)(*piVar4 + 8))(0x3e99999a);
          piVar4[0x1d] = (int)CBaseEntity::SUB_Remove;
          *(undefined4 *)(piVar4[1] + 0x148) = 5;
          *(undefined4 *)(piVar4[1] + 0x150) = 0x437f0000;
          *(undefined4 *)(piVar4[1] + 0x154) = 0x437f0000;
          *(undefined4 *)(piVar4[1] + 0x158) = 0x437f0000;
          *(undefined4 *)(piVar4[1] + 0x14c) = 0x437f0000;
          *(undefined4 *)(piVar4[1] + 0x15c) = 6;
        }
        iStack_80 = iStack_80 + -1;
      } while (iStack_80 != 0);
      *(float *)(param_1[1] + 0x1e4) = *(float *)(param_1[1] + 0x1e4) + (float)_DAT_100e5210;
      iVar5 = param_1[1];
      *(float *)(iVar5 + 0x144) =
           *(float *)(iVar5 + 0x144) - *(float *)(iVar5 + 0x1f8) * (float)_DAT_100e5210;
      if (*(float *)(param_1[1] + 0x144) <= _DAT_100dd5f8) {
        FUN_100b0ef0((int)param_1);
        FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),4,
                     s_weapons_mine_charge_wav_1010d054,0,0,0x20,100);
      }
      iVar5 = param_1[1];
    } while ((float)_DAT_100e5210 < *DAT_10122044 - *(float *)(iVar5 + 0x1e4));
  }
  return;
}

