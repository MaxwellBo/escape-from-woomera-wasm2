
void __thiscall FUN_100c4f30(void *this,int *param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  int iVar2;
  
  FUN_100c46a0(this,param_1);
  uVar1 = FUN_100c5b80();
  if (CONCAT31(extraout_var,uVar1) == 0) {
    iVar2 = (**(code **)(*param_1 + 0xcc))();
    if ((iVar2 != 0) && (param_1 != (int *)0x0)) {
      FUN_100c81d0((int)param_1,0x3d);
    }
  }
  FUN_100c3500(s_PLIERS_1011cbcc,0);
  FUN_100c3500(s_PLIERS_GOT_PLIERS_1011cbb8,1);
  FUN_100c3500(s_ELECTRICIAN_1011cbac,0);
  return;
}

