
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1004f970(int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  switch(*param_2) {
  case 1:
    FUN_1004fe40((int)param_1);
    return;
  case 2:
    FUN_1004fdd0((int)param_1);
    return;
  case 3:
    FUN_10050190(param_1);
    return;
  case 4:
    FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),2,
                 s_houndeye_he_pain3_wav_1010f228,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 5:
    FUN_10094b20(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),2,
                 s_houndeye_he_pain1_wav_1010f210,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 6:
    fVar1 = *(float *)(DAT_10121dac + 0xc);
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    iVar2 = param_1[1];
    fVar3 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100e0d90;
    fVar4 = *(float *)(DAT_10122044 + 0x30) * _DAT_100e0d90;
    *(float *)(iVar2 + 0x20) = *(float *)(DAT_10122044 + 0x28) * _DAT_100e0d90;
    *(float *)(iVar2 + 0x24) = fVar3;
    fVar3 = (float)_DAT_100ddad8;
    *(float *)(iVar2 + 0x28) = fVar4;
    *(float *)(param_1[1] + 0x28) =
         fVar1 * fVar3 * (float)_DAT_100dd648 + *(float *)(param_1[1] + 0x28);
    return;
  case 7:
    if (param_1[0xd2] == 0) {
      *(undefined4 *)(param_1[1] + 0x110) = 3;
      return;
    }
    break;
  default:
    FUN_10060620(param_1,param_2);
  }
  return;
}

