
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10044750(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *this;
  
  if ((param_1 == 0) && (iVar2 = (*DAT_1007ef24)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (((iVar2 == 0) || (iVar1 = _DAT_00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (this = (undefined4 *)(*DAT_1007efcc)(iVar2,300), iVar1 = param_1, this != (undefined4 *)0x0))
  {
    FUN_100440c0(this,s_models_w_BluePhoneCard_mdl_10077290,s_models_v_BluePhoneCard_mdl_100772ac,
                 s_models_p_BluePhoneCard_mdl_100772c8);
    *this = &PTR_FUN_1005cf44;
    this[1] = param_1;
    return;
  }
  _DAT_00000004 = iVar1;
  return;
}

