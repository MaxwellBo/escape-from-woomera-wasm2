
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10044600(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *this;
  
  if ((param_1 == 0) && (iVar2 = (*DAT_1007ef24)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (((iVar2 == 0) || (iVar1 = _DAT_00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (this = (undefined4 *)(*DAT_1007efcc)(iVar2,0x130), iVar1 = param_1, this != (undefined4 *)0x0)
     ) {
    FUN_100440c0(this,s_models_w_IDTag_mdl_10077124,s_models_v_IDTag_mdl_10077138,
                 s_models_p_IDTag_mdl_1007714c);
    *this = &PTR_FUN_1005ca34;
    this[1] = param_1;
    return;
  }
  _DAT_00000004 = iVar1;
  return;
}

