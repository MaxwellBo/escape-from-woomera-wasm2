
void __cdecl weapon_efw_BluePhoneCard(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *this;
  
                    /* 0xc4a10  566  weapon_efw_BluePhoneCard */
  if ((param_1 == 0) && (iVar2 = (*DAT_10121e5c)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (((iVar2 == 0) || (iVar1 = iRam00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (this = (undefined4 *)(*DAT_10121f04)(iVar2,300), iVar1 = param_1, this != (undefined4 *)0x0))
  {
    FUN_100c43f0(this,s_models_w_BluePhoneCard_mdl_1011c904,s_models_v_BluePhoneCard_mdl_1011c920,
                 s_models_p_BluePhoneCard_mdl_1011c93c);
    *this = &PTR_FUN_100f8df8;
    this[1] = param_1;
    return;
  }
  iRam00000004 = iVar1;
  return;
}

