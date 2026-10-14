
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1007e210(void *this,byte *param_1,int param_2,int param_3)

{
  int iVar1;
  void *this_00;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = -1;
  if (((*(uint *)(*(int *)((int)this + 4) + 0x168) & 0x80000000) != 0) &&
     (iVar1 = (**(code **)(*DAT_10121db8 + 0x18))(), iVar1 == 0)) {
    if (param_1 == (byte *)0x0) {
      *(undefined4 *)((int)this + 900) = 0;
      *(undefined4 *)((int)this + 0x388) = 0;
      *(undefined4 *)((int)this + 0x38c) = 0;
      *(undefined4 *)((int)this + 0x390) = 0;
      return;
    }
    if (param_2 == 0) {
      iVar1 = FUN_10094a60(this_00,(int)param_1,(char *)0x0);
      if (iVar1 < 0) {
        (*DAT_10121efc)(1,s_HEV_couldn_t_find_sentence__s_10114e64,param_1);
        return;
      }
    }
    else {
      iVar1 = FUN_10094520(param_1);
      iVar1 = -iVar1;
    }
    iVar2 = 0;
    piVar3 = (int *)((int)this + 0x398);
    do {
      if (iVar1 == *piVar3) {
        if (*DAT_10122044 <= *(float *)((int)this + iVar2 * 4 + 0x418)) {
          return;
        }
        *(undefined4 *)((int)this + iVar2 * 4 + 0x398) = 0;
        *(undefined4 *)((int)this + iVar2 * 4 + 0x418) = 0;
        iVar4 = iVar2;
        break;
      }
      if (*piVar3 == 0) {
        iVar4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x20);
    if (param_3 != 0) {
      if (iVar4 < 0) {
        iVar4 = (*DAT_10121f70)(0,0x1f);
      }
      *(int *)((int)this + iVar4 * 4 + 0x398) = iVar1;
      *(float *)((int)this + iVar4 * 4 + 0x418) = (float)param_3 + *DAT_10122044;
    }
    *(int *)((int)this + *(int *)((int)this + 0x394) * 4 + 900) = iVar1;
    iVar4 = *(int *)((int)this + 0x394) + 1;
    *(int *)((int)this + 0x394) = iVar4;
    if (iVar4 == 4) {
      *(undefined4 *)((int)this + 0x394) = 0;
    }
    if (*(float *)((int)this + 0x380) <= *DAT_10122044) {
      if (*(float *)((int)this + 0x380) == _DAT_100dd5f8) {
        *(float *)((int)this + 0x380) = *DAT_10122044 + (float)_DAT_100dfb80;
        return;
      }
      *(float *)((int)this + 0x380) = *DAT_10122044 + (float)_DAT_100e9458;
    }
  }
  return;
}

