
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10054830(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  float10 fVar8;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [20];
  undefined4 auStack_24 [7];
  int iStack_8;
  
  if (7 < *(int *)((int)this + 0x364)) {
    return;
  }
  local_7c = *(float *)(DAT_10122044 + 0x38) * _DAT_100e8200;
  local_78 = *(float *)(DAT_10122044 + 0x3c) * _DAT_100e8200;
  iVar1 = *(int *)((int)this + 4);
  local_8c = *(float *)(DAT_10122044 + 0x34) * _DAT_100e8200 + *(float *)(iVar1 + 8);
  local_88 = local_7c + *(float *)(iVar1 + 0xc);
  local_84 = local_78 + *(float *)(iVar1 + 0x10);
  local_5c = local_8c;
  local_58 = local_88;
  local_54 = local_84;
  pfVar4 = FUN_10061590(this,&local_68,&local_5c);
  local_74 = *pfVar4;
  local_70 = pfVar4[1];
  local_6c = pfVar4[2];
  fVar8 = (float10)(*DAT_10121f74)();
  fStack_80 = (float)(fVar8 * (float10)*(float *)(DAT_10122044 + 0x34));
  local_7c = (float)(fVar8 * (float10)*(float *)(DAT_10122044 + 0x38));
  local_78 = (float)(fVar8 * (float10)*(float *)(DAT_10122044 + 0x3c));
  FUN_10002280((void *)(DAT_10122044 + 0x40),&fStack_44,(float)param_1);
  fVar8 = (float10)(*DAT_10121f74)();
  fStack_50 = (float)((float10)fStack_44 * fVar8);
  fStack_4c = (float)((float10)fStack_40 * fVar8);
  FUN_10001d60(&local_68,local_74 + fStack_50,local_70 + fStack_4c,
               (float)((float10)local_6c + fVar8 * (float10)fStack_3c));
  FUN_10001d60(&local_8c,local_68 + fStack_80,fStack_64 + local_7c,fStack_60 + local_78);
  local_74 = local_8c;
  local_6c = local_84;
  local_70 = local_88;
  uVar2 = *(undefined4 *)(*(int *)((int)this + 4) + 0x208);
  FUN_10001d60(&local_68,local_8c * _DAT_100ddaf0,local_88 * _DAT_100ddaf0,local_84 * _DAT_100ddaf0)
  ;
  FUN_10001d60(&fStack_50,local_68 + local_5c,local_58 + fStack_64,local_54 + fStack_60);
  FUN_100afc60(&local_5c,&fStack_50,0,uVar2,auStack_38);
  puVar5 = FUN_100295c0(0x10102c0c,0x32);
  *(undefined4 **)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) = puVar5;
  if (*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) != 0) {
    uVar6 = (*DAT_10121f24)();
    FUN_10029800(*(void **)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344),auStack_24,uVar6);
    iVar1 = *(int *)(*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) + 4);
    *(uint *)(iVar1 + 0x110) = ((param_1 < 0) + 1) * 0x1000 | *(uint *)(iVar1 + 0x110) & 0xfff;
    iVar1 = *(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x150) = 0x43340000;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x154) = 0x437f0000;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x158) = 0x42c00000;
    *(undefined4 *)
     (*(int *)(*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) + 4) + 0x14c) =
         0x437f0000;
    *(undefined4 *)
     (*(int *)(*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) + 4) + 0x114) = 0x14;
    *(int *)((int)this + 0x364) = *(int *)((int)this + 0x364) + 1;
    if ((((iStack_8 != 0) || (iStack_8 = (*DAT_10121f1c)(), iStack_8 != 0)) &&
        (piVar3 = *(int **)(iStack_8 + 0x7c), piVar3 != (int *)0x0)) &&
       (*(float *)(piVar3[1] + 0x16c) != _DAT_100dd5f8)) {
      iVar1 = *piVar3;
      FUN_10003850(&stack0xffffff54,&local_74);
      (**(code **)(iVar1 + 0x5c))(*(undefined4 *)((int)this + 4),DAT_10126ac4);
    }
    uVar2 = *(undefined4 *)(*(int *)((int)this + 4) + 0x208);
    uVar7 = (*DAT_10121f70)();
    FUN_100af2c0(uVar2,auStack_24,s_weapons_electro4_wav_101064b0,0x3f000000,0x3f4ccccd,0,uVar7);
    return;
  }
  return;
}

