
void __cdecl weapon_efw_IDTag(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *this;
  
                    /* 0xc48c0  569  weapon_efw_IDTag */
  if ((param_1 == 0) && (iVar2 = (*DAT_10121e5c)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (((iVar2 == 0) || (iVar1 = iRam00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (this = (undefined4 *)(*DAT_10121f04)(iVar2,0x130), iVar1 = param_1, this != (undefined4 *)0x0)
     ) {
    FUN_100c43f0(this,s_models_w_IDTag_mdl_1011c628,s_models_v_IDTag_mdl_1011c63c,
                 s_models_p_IDTag_mdl_1011c650);
    *this = &PTR_FUN_100f7f14;
    this[1] = param_1;
    return;
  }
  iRam00000004 = iVar1;
  return;
}

