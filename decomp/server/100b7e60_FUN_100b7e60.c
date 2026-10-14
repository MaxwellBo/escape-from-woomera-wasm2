
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b7e60(void *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *pcVar6;
  char *extraout_ECX_02;
  char *pcVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar4 = *param_2;
  if (iVar4 == 1) {
    uVar12 = 4;
    lVar8 = __ftol();
    piVar3 = FUN_1001fef0(param_1,70.0,(int)lVar8,uVar12);
    if (piVar3 == (int *)0x0) {
      uVar12 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      iVar4 = (*DAT_10121f70)(0xfffffffb,5);
      iVar4 = iVar4 + 100;
      uVar11 = 0;
      uVar10 = 0x3f4ccccd;
      uVar9 = 0x3f800000;
      iVar5 = (*DAT_10121f70)(0,1);
      pcVar6 = (&PTR_s_zombie_claw_miss1_wav_1011c238)[iVar5];
      pcVar7 = extraout_ECX_02;
    }
    else {
      if ((*(byte *)(piVar3[1] + 0x1a4) & 0x28) != 0) {
        *(undefined4 *)(piVar3[1] + 0x70) = 0xc1900000;
        *(undefined4 *)(piVar3[1] + 0x68) = 0x40a00000;
        iVar4 = piVar3[1];
        fVar1 = *(float *)(DAT_10122044 + 0x44) * _DAT_100dd61c;
        fVar2 = *(float *)(DAT_10122044 + 0x48) * _DAT_100dd61c;
        *(float *)(iVar4 + 0x20) =
             *(float *)(iVar4 + 0x20) - *(float *)(DAT_10122044 + 0x40) * _DAT_100dd61c;
        *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) - fVar1;
        *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) - fVar2;
      }
      uVar12 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      iVar4 = (*DAT_10121f70)(0xfffffffb,5);
      iVar4 = iVar4 + 100;
      uVar11 = 0;
      uVar10 = 0x3f4ccccd;
      uVar9 = 0x3f800000;
      iVar5 = (*DAT_10121f70)(0,2);
      pcVar7 = (&PTR_s_zombie_claw_strike1_wav_1011c22c)[iVar5];
      pcVar6 = pcVar7;
    }
    FUN_10094b20(pcVar7,uVar12,1,pcVar6,uVar9,uVar10,uVar11,iVar4);
    iVar4 = (*DAT_10121f70)(0,1);
    if (iVar4 != 0) {
      FUN_100b7e10((int)param_1);
    }
  }
  else {
    if (iVar4 == 2) {
      uVar12 = 4;
      lVar8 = __ftol();
      piVar3 = FUN_1001fef0(param_1,70.0,(int)lVar8,uVar12);
      if (piVar3 == (int *)0x0) {
        uVar12 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
        iVar4 = (*DAT_10121f70)(0xfffffffb,5);
        iVar4 = iVar4 + 100;
        uVar11 = 0;
        uVar10 = 0x3f4ccccd;
        uVar9 = 0x3f800000;
        iVar5 = (*DAT_10121f70)(0,1);
        pcVar7 = (&PTR_s_zombie_claw_miss1_wav_1011c238)[iVar5];
        pcVar6 = extraout_ECX_01;
      }
      else {
        if ((*(byte *)(piVar3[1] + 0x1a4) & 0x28) != 0) {
          *(undefined4 *)(piVar3[1] + 0x70) = 0x41900000;
          *(undefined4 *)(piVar3[1] + 0x68) = 0x40a00000;
          iVar4 = piVar3[1];
          fVar1 = *(float *)(DAT_10122044 + 0x44) * _DAT_100dd61c;
          fVar2 = *(float *)(DAT_10122044 + 0x48) * _DAT_100dd61c;
          *(float *)(iVar4 + 0x20) =
               *(float *)(DAT_10122044 + 0x40) * _DAT_100dd61c + *(float *)(iVar4 + 0x20);
          *(float *)(iVar4 + 0x24) = fVar1 + *(float *)(iVar4 + 0x24);
          *(float *)(iVar4 + 0x28) = fVar2 + *(float *)(iVar4 + 0x28);
        }
        uVar12 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
        iVar4 = (*DAT_10121f70)(0xfffffffb,5);
        iVar4 = iVar4 + 100;
        uVar11 = 0;
        uVar10 = 0x3f4ccccd;
        uVar9 = 0x3f800000;
        iVar5 = (*DAT_10121f70)(0,2);
        pcVar6 = (&PTR_s_zombie_claw_strike1_wav_1011c22c)[iVar5];
        pcVar7 = pcVar6;
      }
    }
    else {
      if (iVar4 != 3) {
        FUN_10060620(param_1,param_2);
        return;
      }
      uVar12 = 4;
      lVar8 = __ftol();
      piVar3 = FUN_1001fef0(param_1,70.0,(int)lVar8,uVar12);
      if (piVar3 == (int *)0x0) {
        uVar12 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
        iVar4 = (*DAT_10121f70)(0xfffffffb,5);
        iVar4 = iVar4 + 100;
        uVar11 = 0;
        uVar10 = 0x3f4ccccd;
        uVar9 = 0x3f800000;
        iVar5 = (*DAT_10121f70)(0,1);
        pcVar6 = extraout_ECX_00;
        pcVar7 = (&PTR_s_zombie_claw_miss1_wav_1011c238)[iVar5];
      }
      else {
        if ((*(byte *)(piVar3[1] + 0x1a4) & 0x28) != 0) {
          *(undefined4 *)(piVar3[1] + 0x68) = 0x40a00000;
          iVar4 = piVar3[1];
          fVar1 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100de49c;
          fVar2 = *(float *)(DAT_10122044 + 0x30) * _DAT_100de49c;
          *(float *)(iVar4 + 0x20) =
               *(float *)(DAT_10122044 + 0x28) * _DAT_100de49c + *(float *)(iVar4 + 0x20);
          *(float *)(iVar4 + 0x24) = fVar1 + *(float *)(iVar4 + 0x24);
          *(float *)(iVar4 + 0x28) = fVar2 + *(float *)(iVar4 + 0x28);
        }
        uVar12 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
        iVar4 = (*DAT_10121f70)(0xfffffffb,5);
        iVar4 = iVar4 + 100;
        uVar11 = 0;
        uVar10 = 0x3f4ccccd;
        uVar9 = 0x3f800000;
        iVar5 = (*DAT_10121f70)(0,2);
        pcVar7 = (&PTR_s_zombie_claw_strike1_wav_1011c22c)[iVar5];
        pcVar6 = extraout_ECX;
      }
    }
    FUN_10094b20(pcVar6,uVar12,1,pcVar7,uVar9,uVar10,uVar11,iVar4);
    iVar4 = (*DAT_10121f70)(0,1);
    if (iVar4 != 0) {
      FUN_100b7e10((int)param_1);
      return;
    }
  }
  return;
}

