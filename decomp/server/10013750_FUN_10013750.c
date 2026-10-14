
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10013750(void *this,float param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  
  iVar2 = (**(code **)(*(int *)this + 0x98))();
  if (((((iVar2 == 0) || (param_2 < _DAT_100de47c)) && (_DAT_100ddb10 < param_2)) &&
      ((param_2 <= _DAT_100dd890 && ((float)_DAT_100dd648 <= param_1)))) &&
     (*(float *)((int)this + 0x310) <= *DAT_10122044)) {
    bVar1 = FUN_10019450((uint *)((int)this + 0x160));
    if ((CONCAT31(extraout_var,bVar1) != 0) &&
       (iVar2 = *(int *)((int)this + 4), iVar3 = FUN_10019460((uint *)((int)this + 0x160)),
       (float)_DAT_100de1d8 < ABS(*(float *)(iVar2 + 0x10) - *(float *)(*(int *)(iVar3 + 4) + 0x10))
       )) {
      return 0;
    }
    iVar2 = (**(code **)(*(int *)this + 0x98))();
    if (iVar2 == 0) {
      *(float *)((int)this + 0x310) = *DAT_10122044 + (float)_DAT_100dd648;
      return 1;
    }
    *(float *)((int)this + 0x310) = *DAT_10122044 + _DAT_100dd5d8;
    return 1;
  }
  return 0;
}

