
void FUN_100c27f0(void)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = FUN_100c5b80();
  iVar2 = CONCAT31(extraout_var,uVar1);
  if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 == 2)) {
    iVar2 = FUN_100af030(0,(byte *)s_efw_IDTag_Position_1011c664);
    if (iVar2 != 0) {
      iVar3 = (*DAT_10121e64)((int)s_weapon_efw_IDTag_1011b9cc - *(int *)(DAT_10122044 + 0x98));
      if (iVar3 != 0) {
        iVar4 = (*DAT_10121f20)(iVar3);
        if (iVar4 != 0) {
          iVar3 = iVar3 + 0x80;
          if (iVar3 == 0) {
            iVar4 = (*DAT_10121e5c)();
            if (iVar4 != 0) {
              iVar3 = iVar4 + 0x80;
            }
          }
          iVar4 = *(int *)(iVar3 + 0x208);
          if ((iVar4 == 0) || (piVar5 = *(int **)(iVar4 + 0x7c), piVar5 == (int *)0x0)) {
            piVar5 = (int *)(*DAT_10121f04)(iVar4,0x130);
            if (piVar5 != (int *)0x0) {
              FUN_100c43f0(piVar5,s_models_w_IDTag_mdl_1011c628,s_models_v_IDTag_mdl_1011c63c,
                           s_models_p_IDTag_mdl_1011c650);
              *piVar5 = (int)&PTR_LAB_100f7f14;
              piVar5[1] = iVar3;
              (**(code **)(*piVar5 + 0x1a8))(iVar2);
              return;
            }
            piVar5 = (int *)0x0;
            iRam00000004 = iVar3;
          }
          (**(code **)(*piVar5 + 0x1a8))(iVar2);
        }
      }
    }
  }
  return;
}

