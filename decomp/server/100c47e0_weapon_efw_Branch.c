
void __cdecl weapon_efw_Branch(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *this;
  
                    /* 0xc47e0  567  weapon_efw_Branch */
  if ((param_1 == 0) && (iVar2 = (*DAT_10121e5c)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (((iVar2 == 0) || (iVar1 = iRam00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (this = (undefined4 *)(*DAT_10121f04)(iVar2,300), iVar1 = param_1, this != (undefined4 *)0x0))
  {
    FUN_100c43f0(this,s_models_w_Branch_mdl_1011c7cc,s_models_v_Branch_mdl_1011c7e0,
                 s_models_p_Branch_mdl_1011c7f4);
    *this = &PTR_FUN_100f8738;
    this[1] = param_1;
    return;
  }
  iRam00000004 = iVar1;
  return;
}

