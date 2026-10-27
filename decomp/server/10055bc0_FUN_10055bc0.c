
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10055bc0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  float local_1c;
  
  iVar2 = *(int *)(param_1 + 4);
  local_3c = *(float *)(iVar2 + 0x10) - _DAT_100de4a8;
  local_40 = *(undefined4 *)(iVar2 + 0xc);
  local_44 = *(undefined4 *)(iVar2 + 8);
  FUN_100afc60((undefined4 *)(iVar2 + 8),&local_44,2,*(undefined4 *)(iVar2 + 0x208),local_38);
  if (local_28 == (float)_DAT_100dd628) {
    *(float *)(param_1 + 0x31c) = local_3c;
  }
  else {
    *(float *)(param_1 + 0x31c) = local_1c + _DAT_100dd618;
  }
  fVar3 = *(float *)(*(int *)(param_1 + 4) + 0x10);
  fVar6 = FUN_100b0c00((undefined4 *)(*(int *)(param_1 + 4) + 8),fVar3,fVar3 + _DAT_100de4a8);
  fVar5 = (float10)_DAT_100dd618;
  fVar3 = (float)((fVar6 - fVar5) * (float10)_DAT_100dd608 +
                 (float10)*(float *)(param_1 + 0x31c) * (float10)_DAT_100dd600);
  fVar1 = *(float *)(param_1 + 0x31c);
  fVar7 = (float10)_DAT_100dd608;
  fVar4 = (float10)_DAT_100dd600;
  *(float *)(param_1 + 0x31c) = fVar3;
  *(float *)(param_1 + 0x318) = (float)((fVar6 - fVar5) * fVar4 + (float10)fVar1 * fVar7);
  fVar7 = (float10)(*DAT_10121f74)(fVar3,*(undefined4 *)(param_1 + 0x318));
  *(float *)(param_1 + 800) = (float)fVar7;
  fVar7 = (float10)(*DAT_10121f74)(0x40a00000,0x40e00000);
  *(float *)(param_1 + 0x324) = (float)(fVar7 + (float10)*DAT_10122044);
  return;
}

