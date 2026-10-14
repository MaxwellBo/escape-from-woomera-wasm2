
/* WARNING: Removing unreachable block (ram,0x100383f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100383d0(void *this,int *param_1,int param_2)

{
  void *this_00;
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  bVar2 = false;
  iVar5 = param_1[1];
  if ((((*(uint *)(iVar5 + 0x1a4) & 0x200) == 0) || (*(int *)(iVar5 + 0x19c) == 0)) ||
     (iVar4 = *(int *)((int)this + 4), *(int *)(iVar5 + 0x19c) + 0x80 != iVar4)) {
    iVar4 = (**(code **)(*param_1 + 0xcc))();
    fVar1 = _DAT_100dd5e8;
    if ((iVar4 == 0) ||
       (((param_2 == 0 || ((*(byte *)(iVar5 + 0x180) & 0x28) != 0)) &&
        ((bVar2 = true, fVar1 = _DAT_100dd618, (*(uint *)(iVar5 + 0x1a4) & 0x200) != 0 ||
         ((0 < *(int *)(*(int *)((int)this + 4) + 0x1c0) &&
          (fVar1 = _DAT_100de1f0, -0x11 < *(int *)(*(int *)((int)this + 4) + 0x1c4))))))))) {
      if (param_2 == 0) {
        fVar1 = fVar1 * (float)_DAT_100dd648;
      }
      *(float *)(*(int *)((int)this + 4) + 0x20) =
           fVar1 * *(float *)(iVar5 + 0x20) + *(float *)(*(int *)((int)this + 4) + 0x20);
      *(float *)(*(int *)((int)this + 4) + 0x24) =
           fVar1 * *(float *)(iVar5 + 0x24) + *(float *)(*(int *)((int)this + 4) + 0x24);
      iVar4 = *(int *)((int)this + 4);
      fVar1 = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                   *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24));
      if ((param_2 != 0) && (*(float *)((int)this + 0x100) < fVar1)) {
        *(float *)(iVar4 + 0x20) =
             (*(float *)((int)this + 0x100) * *(float *)(iVar4 + 0x20)) / fVar1;
        *(float *)(*(int *)((int)this + 4) + 0x24) =
             (*(float *)((int)this + 0x100) * *(float *)(*(int *)((int)this + 4) + 0x24)) / fVar1;
      }
      if (bVar2) {
        *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(*(int *)((int)this + 4) + 0x20);
        *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(*(int *)((int)this + 4) + 0x24);
        fVar3 = _DAT_100dd5f8;
        if ((float)_DAT_100df298 < *DAT_10122044 - *(float *)((int)this + 0x104)) {
          *(float *)((int)this + 0x104) = *DAT_10122044;
          if ((fVar3 < fVar1) && ((*(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0x200) != 0)) {
            iVar5 = (*DAT_10121f70)(0,2);
            *(int *)((int)this + 0xfc) = iVar5;
            FUN_10094b20((&PTR_s_debris_pushbox1_wav_101088d8)[iVar5],
                         *(undefined4 *)(*(int *)((int)this + 4) + 0x208),1,
                         (&PTR_s_debris_pushbox1_wav_101088d8)[iVar5],0x3f000000,0x3f4ccccd,0,100);
            return;
          }
          this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
          FUN_10094b20(this_00,this_00,1,
                       (&PTR_s_debris_pushbox1_wav_101088d8)[*(int *)((int)this + 0xfc)],0,0,0x20,
                       100);
          return;
        }
      }
    }
  }
  else if ((0 < *(int *)(iVar4 + 0x1c0)) && (-0x11 < *(int *)(iVar4 + 0x1c4))) {
    *(float *)(iVar4 + 0x28) =
         *(float *)(iVar5 + 0x28) * (float)_DAT_100dfb80 + *(float *)(iVar4 + 0x28);
    return;
  }
  return;
}

