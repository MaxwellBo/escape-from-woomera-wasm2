
void __fastcall FUN_1000ce30(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  bVar1 = FUN_1000a1d0();
  if (bVar1) {
    *(undefined4 *)(param_1[1] + 0x114) = 1;
  }
  else {
    *(undefined4 *)(param_1[1] + 0x114) = 0;
  }
  uVar3 = *(undefined4 *)(param_1[1] + 0x114);
  uVar2 = (**(code **)(*param_1 + 0x19c))();
  FUN_1000a3e0(param_1,s_models_v_357_mdl_10077588,s_models_p_357_mdl_10077574,5,s_python_1007759c,
               uVar2,uVar3);
  return;
}

