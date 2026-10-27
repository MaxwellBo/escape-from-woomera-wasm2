
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003fce0(void *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  void *this_00;
  longlong lVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_c [12];
  
  switch(*param_2) {
  case 1:
    uVar10 = 4;
    lVar6 = __ftol();
    piVar3 = FUN_1003ff70(param_1,_DAT_100e4fd4 + (float)_DAT_100de4a0,(int)lVar6,uVar10);
    if (piVar3 == (int *)0x0) {
      uVar10 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      iVar4 = (*DAT_10121f70)(0,0xf);
      iVar4 = iVar4 + 0x32;
      uVar11 = 0;
      uVar9 = 0x3f4ccccd;
      uVar8 = 0x3f800000;
      iVar5 = (*DAT_10121f70)(0,1);
      pcVar7 = (&PTR_s_zombie_claw_miss1_wav_1010cc90)[iVar5];
      this = extraout_ECX_00;
    }
    else {
      if ((*(byte *)(piVar3[1] + 0x1a4) & 0x28) != 0) {
        *(undefined4 *)(piVar3[1] + 0x68) = 0xc1f00000;
        *(undefined4 *)(piVar3[1] + 0x6c) = 0xc1f00000;
        *(undefined4 *)(piVar3[1] + 0x70) = 0x41f00000;
        iVar4 = piVar3[1];
        fVar1 = DAT_10122044[0x11] * _DAT_100dd61c;
        fVar2 = DAT_10122044[0x12] * _DAT_100dd61c;
        *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) - DAT_10122044[0x10] * _DAT_100dd61c;
        *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) - fVar1;
        *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) - fVar2;
      }
      uVar10 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      iVar4 = (*DAT_10121f70)(0,0xf);
      iVar4 = iVar4 + 0x32;
      uVar11 = 0;
      uVar9 = 0x3f4ccccd;
      uVar8 = 0x3f800000;
      iVar5 = (*DAT_10121f70)(0,2);
      pcVar7 = (&PTR_s_zombie_claw_strike1_wav_1010cc78)[iVar5];
      this = extraout_ECX;
    }
    FUN_10094b20(this,uVar10,1,pcVar7,uVar8,uVar9,uVar11,iVar4);
    (*DAT_10121e58)(*(int *)((int)param_1 + 4) + 0x50,auStack_c,0,0);
    return;
  default:
    FUN_10060620(param_1,param_2);
    break;
  case 3:
  case 4:
    FUN_100af360((float *)(*(int *)((int)param_1 + 4) + 8),4.0,0x40400000,0x3f800000,750.0);
    uVar10 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    iVar4 = (*DAT_10121f70)(0xfffffff6,10);
    iVar4 = iVar4 + 100;
    uVar11 = 0;
    uVar9 = 0x3f4ccccd;
    uVar8 = 0x3f800000;
    iVar5 = (*DAT_10121f70)(0,1);
    FUN_10094b20((&PTR_s_garg_gar_step1_wav_1010cca8)[iVar5],uVar10,4,
                 (&PTR_s_garg_gar_step1_wav_1010cca8)[iVar5],uVar8,uVar9,uVar11,iVar4);
    return;
  case 5:
    FUN_1003e7b0(param_1);
    *(float *)((int)param_1 + 800) = *DAT_10122044 + _DAT_100dd624;
    return;
  case 6:
    if (((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 2) == 0) ||
       (*(int *)((int)param_1 + 0x1d8) != 1)) {
      uVar10 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      iVar4 = (*DAT_10121f70)(0xfffffff6,10);
      iVar4 = iVar4 + 100;
      uVar11 = 0;
      uVar9 = 0x3f4ccccd;
      uVar8 = 0x3f800000;
      iVar5 = (*DAT_10121f70)(0,2);
      FUN_10094b20(this_00,uVar10,2,(&PTR_s_garg_gar_breathe1_wav_1010ccec)[iVar5],uVar8,uVar9,
                   uVar11,iVar4);
      return;
    }
  }
  return;
}

