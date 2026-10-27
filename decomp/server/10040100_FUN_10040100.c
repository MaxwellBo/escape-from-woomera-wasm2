
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10040100(void *param_1,int *param_2)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  void *this;
  char *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  switch(*param_2) {
  case 0x4d:
    *(float *)((int)param_1 + 0x1c4) = *DAT_10122044 + (float)_DAT_100e5458;
    FUN_1003fa60((int)param_1);
  default:
    FUN_100057f0(param_1,param_2);
    break;
  case 0x4f:
    pcVar6 = s_scripted_action_10101ba8;
    pbVar5 = (byte *)(**(int **)(*(int *)((int)param_1 + 0x2fc) + 4) + (int)DAT_10122044[0x26]);
    do {
      bVar2 = *pbVar5;
      bVar7 = bVar2 < (byte)*pcVar6;
      if (bVar2 != *pcVar6) {
LAB_100401f5:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_100401fa;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar7 = bVar2 < (byte)pcVar6[1];
      if (bVar2 != pcVar6[1]) goto LAB_100401f5;
      pbVar5 = pbVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_100401fa:
    if ((iVar4 != 0) || (*(int *)(*(int *)((int)param_1 + 0x2fc) + 0x32c) != 3)) {
      FUN_100057f0(param_1,param_2);
      return;
    }
    FUN_1003e990(param_1);
    *(float *)((int)param_1 + 0x1c4) = *DAT_10122044 + (float)_DAT_100e5460;
    fVar1 = *DAT_10122044;
    goto LAB_10040229;
  case 0x5d:
    iVar4 = (*DAT_10121f70)(0,100);
    if (iVar4 < 0x1e) {
      uVar11 = 100;
      uVar10 = 0;
      uVar9 = 0x3f4ccccd;
      uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      uVar8 = 0x3f800000;
      iVar4 = (*DAT_10121f70)(0,2);
      FUN_10094b20(this,uVar3,2,(&PTR_s_garg_gar_attack1_wav_1010ccc4)[iVar4],uVar8,uVar9,uVar10,
                   uVar11);
    }
    if ((*(uint *)((int)param_1 + 0x15c) & 0x40000000) == 0) {
      *(undefined4 *)((int)param_1 + 0x1e0) = 4;
      return;
    }
    break;
  case 0x5e:
    FUN_1003e990(param_1);
    *(float *)((int)param_1 + 0x1c4) = (float)param_2[1] + *DAT_10122044;
    fVar1 = *DAT_10122044;
LAB_10040229:
    fVar1 = fVar1 + _DAT_100dd620;
    *(undefined4 *)((int)param_1 + 0x330) = 0;
    *(undefined4 *)((int)param_1 + 0x334) = 0;
    *(float *)((int)param_1 + 0x324) = fVar1;
    return;
  }
  return;
}

