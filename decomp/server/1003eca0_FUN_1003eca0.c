
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003eca0(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float in_stack_ffffff28;
  float fVar5;
  float *pfVar6;
  float in_stack_ffffff34;
  float in_stack_ffffff38;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  undefined1 local_44 [16];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_20 [5];
  undefined1 local_c [12];
  
  iVar3 = 0;
  local_90 = 0;
  iVar4 = 0x2000;
  piVar2 = (int *)((int)param_1 + 0x30c);
  do {
    if (*piVar2 != 0) {
      iVar1 = *(int *)((int)param_1 + 4);
      local_8c = *(float *)(iVar1 + 0x50) + *(float *)((int)param_1 + 0x330);
      local_84 = *(undefined4 *)(iVar1 + 0x58);
      local_88 = *(float *)(iVar1 + 0x54) + *(float *)((int)param_1 + 0x334);
      FUN_100af200(&local_8c);
      FUN_10008450(param_1,iVar3 + 1,&local_9c,local_c);
      local_70 = DAT_10122044[0xb] * _DAT_100e544c;
      local_6c = DAT_10122044[0xc] * _DAT_100e544c;
      local_5c = DAT_10122044[10] * _DAT_100e544c + local_9c;
      local_58 = local_70 + local_98;
      local_54 = local_6c + local_94;
      pfVar7 = (float *)0x1003ed89;
      FUN_100afc60(&local_9c,&local_5c,0,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),
                   local_44);
      iVar1 = *(int *)(*piVar2 + 4);
      *(float *)(iVar1 + 8) = local_30;
      *(float *)(iVar1 + 0xc) = local_2c;
      *(float *)(iVar1 + 0x10) = local_28;
      local_64 = local_2c * _DAT_100e5450;
      local_60 = local_28 * _DAT_100e5450;
      local_4c = local_98 * _DAT_100e4374;
      local_48 = local_94 * _DAT_100e4374;
      iVar1 = *(int *)(piVar2[2] + 4);
      local_80 = local_9c * _DAT_100e4374 + local_30 * _DAT_100e5450;
      local_7c = local_4c + local_64;
      *(float *)(iVar1 + 8) = local_80;
      local_78 = local_48 + local_60;
      *(float *)(iVar1 + 0xc) = local_7c;
      *(float *)(iVar1 + 0x10) = local_78;
      if ((local_34 != (float)_DAT_100dd628) && (*(float *)((int)param_1 + 0x32c) < *DAT_10122044))
      {
        pfVar7 = &local_30;
        FUN_1003e4a0(pfVar7,local_20,6,0x14,0x32,400);
        in_stack_ffffff38 = 2.8026e-45;
        in_stack_ffffff34 = 0.0;
        local_90 = 1;
        iVar1 = (*DAT_10121f70)();
        in_stack_ffffff28 = 2.6019052e-29;
        FUN_100b0450((int)local_44,iVar1 + 0x25);
      }
      uVar8 = *(undefined4 *)((int)param_1 + 4);
      iVar1 = 7;
      pfVar6 = &local_30;
      fVar5 = 2.6019163e-29;
      uVar9 = uVar8;
      fVar10 = DAT_10126a8c;
      FUN_10003850(&stack0xffffff34,pfVar6);
      FUN_10003850(&stack0xffffff28,&local_9c);
      FUN_1003efd0(in_stack_ffffff28,fVar5,(float)pfVar6,in_stack_ffffff34,in_stack_ffffff38,
                   (float)pfVar7,uVar8,uVar9,fVar10,iVar1);
      (*DAT_10121ec0)();
      (*DAT_10121ec8)();
      (*DAT_10121f24)();
      (*DAT_10121ed0)();
      in_stack_ffffff34 = local_9c;
      (*DAT_10121edc)();
      (*DAT_10121edc)();
      (*DAT_10121edc)();
      in_stack_ffffff28 = 48.0;
      (*DAT_10121f74)(0x42000000);
      (*DAT_10121edc)();
      (*DAT_10121ec8)();
      (*DAT_10121ec8)();
      (*DAT_10121ec8)();
      (*DAT_10121ec8)();
      in_stack_ffffff38 = 2.6019705e-29;
      (*DAT_10121edc)();
      (*DAT_10121ec4)();
    }
    iVar4 = iVar4 + 0x1000;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 0x4000);
  if (local_90 != 0) {
    *(float *)((int)param_1 + 0x32c) = *DAT_10122044;
  }
  return;
}

