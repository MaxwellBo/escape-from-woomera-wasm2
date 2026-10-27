
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10042d50(void *this,int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  float fVar7;
  void *extraout_ECX;
  void *this_00;
  float10 fVar8;
  longlong lVar9;
  void *pvVar10;
  char *pcVar11;
  int iVar12;
  
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb8) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x16c) = 0;
  if (*(float *)(param_1 + 0x10) != (float)_DAT_100dd628) {
    iVar6 = *(int *)((int)this + 4);
    fVar2 = *(float *)(iVar6 + 0x1e0) - _DAT_100e0ed0;
    fVar4 = fVar2 * *(float *)(param_1 + 0x28) * _DAT_100e4374;
    fVar3 = fVar2 * *(float *)(param_1 + 0x2c) * _DAT_100e4374;
    fVar7 = *(float *)(param_1 + 0x18);
    fVar1 = *(float *)(param_1 + 0x1c);
    *(float *)(iVar6 + 8) =
         fVar2 * *(float *)(param_1 + 0x24) * _DAT_100e4374 + *(float *)(param_1 + 0x14);
    *(float *)(iVar6 + 0xc) = fVar4 + fVar7;
    *(float *)(iVar6 + 0x10) = fVar3 + fVar1;
  }
  iVar6 = FUN_100b01e0(*(int *)((int)this + 4) + 8);
  (*DAT_10121ec0)(5,0x17,*(int *)((int)this + 4) + 8,0);
  (*DAT_10121ec8)(3);
  (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)this + 4) + 8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)this + 4) + 0xc));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)this + 4) + 0x10));
  sVar5 = DAT_10131cf0;
  if (iVar6 != -3) {
    sVar5 = DAT_10131d04;
  }
  (*DAT_10121ed0)((int)sVar5);
  lVar9 = __ftol();
  (*DAT_10121ec8)((int)lVar9);
  (*DAT_10121ec8)(0xf);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec4)();
  FUN_10095d30(1,(undefined4 *)(*(int *)((int)this + 4) + 8),0x400,3.0);
  iVar12 = *(int *)(*(int *)((int)this + 4) + 0x198);
  if (iVar12 == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)(iVar12 + 0x80);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + 0x198) = 0;
  FUN_1001fe50(this,*(float *)((int)this + 4),fVar7,
               *(float *)((int)*(float *)((int)this + 4) + 0x1e0),0,param_2);
  fVar8 = (float10)(*DAT_10121f74)(0,0x3f800000);
  if ((float10)_DAT_100dd648 <= fVar8) {
    iVar12 = 0xc;
  }
  else {
    iVar12 = 0xb;
  }
  FUN_100b0450(param_1,iVar12);
  (*DAT_10121f74)(0,0x3f800000);
  iVar12 = (*DAT_10121f70)(0,2);
  if (iVar12 == 0) {
    this_00 = *(void **)((int)this + 4);
    pvVar10 = *(void **)((int)this_00 + 0x208);
    pcVar11 = s_weapons_debris1_wav_1010d2f4;
  }
  else if (iVar12 == 1) {
    pvVar10 = *(void **)(*(int *)((int)this + 4) + 0x208);
    pcVar11 = s_weapons_debris2_wav_1010d308;
    this_00 = extraout_ECX;
  }
  else {
    if (iVar12 != 2) goto LAB_10042fb2;
    this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
    pcVar11 = s_weapons_debris3_wav_1010d31c;
    pvVar10 = this_00;
  }
  FUN_10094b20(this_00,pvVar10,2,pcVar11,0x3f0ccccd,0x3f4ccccd,0,100);
LAB_10042fb2:
  *(uint *)(*(int *)((int)this + 4) + 0x118) = *(uint *)(*(int *)((int)this + 4) + 0x118) | 0x80;
  iVar12 = *(int *)((int)this + 4);
  *(code **)((int)this + 0x74) = CGrenade::Smoke;
  *(undefined4 *)(iVar12 + 0x20) = DAT_10121dd8;
  *(undefined4 *)(iVar12 + 0x24) = DAT_10121ddc;
  *(undefined4 *)(iVar12 + 0x28) = DAT_10121de0;
  (**(code **)(*(int *)this + 8))(0x3e99999a);
  if ((iVar6 != -3) && (iVar6 = (*DAT_10121f70)(0,3), 0 < iVar6)) {
    do {
      FUN_1001a1f0(0x10108740,(undefined4 *)(*(int *)((int)this + 4) + 8),
                   (undefined4 *)(param_1 + 0x24),0);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

