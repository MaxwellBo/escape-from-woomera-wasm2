
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001e640(int *param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  
  bVar1 = false;
  FUN_10094b20(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),1,
               s_common_bodysplat_wav_101058e8,0x3f800000,0x3f4ccccd,0,100);
  iVar2 = (**(code **)(*param_1 + 0x204))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x208))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 0x20c))();
      if (iVar2 == 0) goto LAB_1001e755;
      fVar3 = (float10)(*DAT_10121eec)(s_violence_agibs_10105ff4);
      if (fVar3 != (float10)_DAT_100dd5f8) {
        FUN_1001e0f0(param_1[1],4,0);
      }
    }
    else {
      fVar3 = (float10)(*DAT_10121eec)(s_violence_hgibs_10106004);
      if (fVar3 != (float10)_DAT_100dd5f8) {
        FUN_1001dce0(param_1[1]);
        FUN_1001e0f0(param_1[1],4,1);
      }
    }
  }
  else {
    fVar3 = (float10)(*DAT_10121eec)(s_violence_hgibs_10106004);
    if (fVar3 != (float10)_DAT_100dd5f8) {
      FUN_1001dd10(param_1[1],*(int *)(DAT_10122044 + 0x98) + iVar2);
      FUN_1001e150(param_1[1],4,1,*(int *)(DAT_10122044 + 0x98) + iVar2);
    }
  }
  bVar1 = true;
LAB_1001e755:
  iVar2 = (**(code **)(*param_1 + 0xcc))();
  if (iVar2 == 0) {
    if (bVar1) {
      param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
      (**(code **)(*param_1 + 8))(0);
      return;
    }
    (**(code **)(*param_1 + 0x210))();
  }
  return;
}

