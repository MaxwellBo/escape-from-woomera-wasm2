
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10097f60(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = FUN_100ae400();
  *(float *)(param_1[0x37] + 700) = (float)(fVar2 + (float10)_DAT_100dd648);
  if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) == 0) {
    iVar1 = *(int *)(param_1[0x37] + 4);
    *(uint *)(iVar1 + 0x168) = *(uint *)(iVar1 + 0x168) & 0xffff7fff;
    param_1[0x1d] = (int)CBasePlayerItem::DestroyItem;
    (**(code **)(*param_1 + 8))(0x3dcccccd);
    return;
  }
  (**(code **)(*param_1 + 0x17c))(3,1,0);
  FUN_10094b20((void *)param_1[0x37],*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),1,
               s_common_null_wav_10103c74,0x3f800000,0x3f4ccccd,0,100);
  return;
}

