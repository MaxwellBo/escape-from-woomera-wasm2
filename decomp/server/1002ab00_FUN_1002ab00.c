
/* WARNING: Removing unreachable block (ram,0x1002ab31) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002ab00(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  int unaff_EDI;
  longlong lVar4;
  float *pfVar5;
  float afStack_34 [3];
  int iStack_28;
  undefined4 uStack_24;
  float afStack_c [3];
  
  FUN_100298f0((int)this);
  if (((*(float *)(param_1 + 0x10) != (float)_DAT_100dd628) && (*(int *)(param_1 + 0x30) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0x7c), piVar1 != (int *)0x0)) {
    if (*(float *)(*(int *)((int)this + 4) + 0x1e0) <= _DAT_100dd5f8) {
      uStack_24 = 0x1002ac2e;
      (**(code **)(*piVar1 + 100))();
    }
    else {
      uStack_24 = 0x1002ab70;
      FUN_100b2bd0();
      iVar3 = *(int *)((int)this + 4);
      iVar2 = *piVar1;
      uStack_24 = 0x1002ab86;
      lVar4 = __ftol();
      uStack_24 = (undefined4)lVar4;
      iStack_28 = param_1;
      pfVar5 = afStack_34;
      this_00 = (void *)FUN_10002250((void *)(param_1 + 0x14),afStack_c,(float *)(iVar3 + 8));
      FUN_1001fdd0(this_00,pfVar5);
      (**(code **)(iVar2 + 0x5c))
                (iVar3,(*DAT_10122044 - *(float *)(iVar3 + 0x1e4)) * *(float *)(iVar3 + 0x1e0));
      FUN_100b2bf0(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 4));
      if (((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x40) != 0) &&
         (iVar3 = (**(code **)(*piVar1 + 0xbc))(), iVar3 != 0)) {
        iVar3 = (*DAT_10121f70)(0,4);
        FUN_100b0450(unaff_EDI,iVar3 + 0x1c);
      }
    }
  }
  *(float *)(*(int *)((int)this + 4) + 0x1e4) = *DAT_10122044;
  return;
}

