
void __cdecl FUN_100359b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 local_90 [4];
  char *local_8c;
  undefined1 *local_88;
  undefined1 local_80 [128];
  
  piVar1 = (int *)FUN_1001a1f0(0x10108754,param_1,param_2,param_3);
  FUN_100c8506(local_80,&DAT_10108750);
  local_88 = local_80;
  local_8c = s_iMagnitude_10108734;
  (**(code **)(*piVar1 + 0x30))(local_90);
  if (param_4 == 0) {
    *(uint *)(piVar1[1] + 0x1a0) = *(uint *)(piVar1[1] + 0x1a0) | 1;
  }
  (**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0xe4))(0,0,3,0);
  return;
}

