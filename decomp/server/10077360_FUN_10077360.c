
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10077360(void *this,undefined4 param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_3 == 2) {
    iVar3 = *(int *)((int)this + 4);
    uVar4 = __ftol();
    lVar5 = __ftol();
    fVar1 = ((float)(int)((longlong)
                          ((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
                         (longlong)(int)lVar5) + param_4) * (float)_DAT_100dd5f0;
    fVar2 = _DAT_100dd618;
    if ((fVar1 <= _DAT_100dd618) && (fVar2 = fVar1, fVar1 < _DAT_100df2b0)) {
      fVar2 = _DAT_100df2b0;
    }
    if (((*(byte *)(iVar3 + 0x1a0) & 4) != 0) && (fVar2 < _DAT_100dd5f8)) {
      fVar2 = _DAT_100dd5f8;
    }
    *(float *)(iVar3 + 0x1f8) = fVar2 * *(float *)((int)this + 200);
    if ((*(uint *)(*(int *)((int)this + 4) + 0x1a0) & 0x400000) != 0) {
      FUN_10063ac0((int)this,fVar2 * *(float *)((int)this + 0x100),
                   fVar2 * *(float *)((int)this + 0x104),fVar2 * *(float *)((int)this + 0x108));
    }
    CFuncTrackTrain::PostponeNext(this);
    (*DAT_10121efc)(2,s_TRAIN__s___speed_to___2f_101140c4,
                    *(int *)(*(int *)((int)this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                    (double)*(float *)(*(int *)((int)this + 4) + 0x1f8));
  }
  else {
    iVar3 = FUN_1001a140(param_3,(uint)(*(float *)(*(int *)((int)this + 4) + 0x1f8) != _DAT_100dd5f8
                                       ));
    if (iVar3 != 0) {
      iVar3 = *(int *)((int)this + 4);
      if (*(float *)(iVar3 + 0x1f8) == _DAT_100dd5f8) {
        *(float *)(iVar3 + 0x1f8) = *(float *)((int)this + 0xcc) * *(float *)((int)this + 200);
        CFuncTrackTrain::PostponeNext(this);
        return;
      }
      *(undefined4 *)(iVar3 + 0x1f8) = 0;
      FUN_100638f0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
      if ((*(uint *)(*(int *)((int)this + 4) + 0x1a0) & 0x800000) == 0) {
        FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
      }
      FUN_10077570((int)this);
      *(undefined4 *)((int)this + 0x74) = 0;
      return;
    }
  }
  return;
}

