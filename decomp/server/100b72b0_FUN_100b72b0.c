
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b72b0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  void *this;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  int aiStack_20 [8];
  
  if (*param_2 == 1) {
    bVar3 = false;
    param_2 = (int *)FUN_100ae980(aiStack_20,8,(float *)(*(int *)(param_1[0x38] + 4) + 0xc4),
                                  (float *)(*(int *)(param_1[0x38] + 4) + 0xd0),0x28);
    (*DAT_10121e58)(param_1[1] + 0x50,&fStack_38,0,0);
    if (0 < (int)param_2) {
      piVar6 = aiStack_20;
      do {
        piVar1 = (int *)*piVar6;
        if ((piVar1 != param_1) &&
           (iVar5 = param_1[1], *(int *)(piVar1[1] + 0x198) != *(int *)(iVar5 + 0x208))) {
          bVar3 = true;
          (**(code **)(*piVar1 + 0x60))(iVar5,iVar5,0x41c80000,5);
          *(undefined4 *)(*(int *)(*piVar6 + 4) + 0x68) = 0x41700000;
          fStack_28 = fStack_34 * _DAT_100dd61c;
          iVar5 = *(int *)(*piVar6 + 4);
          fStack_24 = fStack_30 * _DAT_100dd61c;
          *(float *)(iVar5 + 0x20) = fStack_38 * _DAT_100dd61c + *(float *)(iVar5 + 0x20);
          *(float *)(iVar5 + 0x24) = fStack_28 + *(float *)(iVar5 + 0x24);
          *(float *)(iVar5 + 0x28) = fStack_24 + *(float *)(iVar5 + 0x28);
        }
        piVar6 = piVar6 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (param_2 != (int *)0x0);
      if (bVar3) {
        uVar2 = *(undefined4 *)(param_1[1] + 0x208);
        uVar4 = (*DAT_10121f70)(0x5f,0x69);
        uVar9 = 0;
        uVar8 = 0x3f4ccccd;
        uVar7 = 0x3f800000;
        iVar5 = (*DAT_10121f70)(0,2);
        FUN_10094b20(this,uVar2,1,(&PTR_s_zombie_claw_strike1_wav_1011c120)[iVar5],uVar7,uVar8,uVar9
                     ,uVar4);
      }
    }
  }
  return;
}

