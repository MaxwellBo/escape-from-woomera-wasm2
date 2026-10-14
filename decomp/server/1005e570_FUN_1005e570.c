
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005e570(void *this,float param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  
  if (*(int *)((int)this + 0x270) == 7) {
    iVar3 = FUN_1005d300(this);
    if (iVar3 == 0) {
      (*DAT_10121efc)(2,s_Can_t_Refresh_Route___10111260);
      return;
    }
  }
  else {
    uVar1 = *(uint *)(*(int *)((int)this + 0x270) * 0x10 + 0x1f8 + (int)this);
    if ((uVar1 & 0x80) == 0) {
      if ((uVar1 & 0xfffffe7f) == 0x10) {
        uVar4 = (**(code **)(**(int **)((int)this + 8) + 0xd8))();
        *(undefined4 *)((int)this + 8) = uVar4;
      }
      iVar3 = *(int *)((int)this + 0x270) * 0x10;
      if ((((byte)*(undefined4 *)(iVar3 + 0x1f8 + (int)this) & 0x20) == 0x20) &&
         (((byte)*(undefined4 *)((int)this + iVar3 + 0x208) & 0x20) == 0x20)) {
        iVar3 = FUN_1006c3e0(&DAT_10122780,(float *)((int)this + iVar3 + 0x1ec),(int)this);
        iVar5 = FUN_1006c3e0(&DAT_10122780,
                             (float *)(*(int *)((int)this + 0x270) * 0x10 + 0x1fc + (int)this),
                             (int)this);
        FUN_1006f5a0(&DAT_10122780,iVar3,iVar5,(int *)&param_1);
        if ((-1 < (int)param_1) &&
           (piVar2 = *(int **)(DAT_10122790 + 8 + (int)param_1 * 0x18), piVar2 != (int *)0x0)) {
          iVar3 = FUN_1006b870(&DAT_10122780,iVar3,piVar2,*(uint *)((int)this + 0x2b8),0);
          if ((iVar3 != 0) && (iVar3 = *(int *)(DAT_10122790 + 8 + (int)param_1 * 0x18), iVar3 != 0)
             ) {
            fVar6 = FUN_1005e440(this,iVar3);
            *(float *)((int)this + 0x1c8) = (float)fVar6;
          }
        }
      }
      *(int *)((int)this + 0x270) = *(int *)((int)this + 0x270) + 1;
      return;
    }
    if (param_1 < *(float *)((int)this + 0xcc) * (float)_DAT_100dd608) {
      FUN_1005fb10((int)this);
    }
  }
  return;
}

