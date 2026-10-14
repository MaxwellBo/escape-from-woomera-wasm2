
void __fastcall FUN_100315e0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBP;
  int unaff_ESI;
  int *apiStack_38 [2];
  int iStack_30;
  int *piStack_2c;
  int *local_14;
  int local_10 [4];
  
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    piVar3 = (int *)param_1[0x97];
  }
  else {
    piVar3 = (int *)param_1[0x96];
  }
  piVar1 = param_1 + 0x32;
  local_10[1] = 0;
  local_10[0] = 0;
  local_14 = piVar1;
  if (piVar3 != (int *)0x0) {
    piStack_2c = local_10 + 1;
    iStack_30 = (int)local_10;
    apiStack_38[1] = (int *)0x10031634;
    (**(code **)(*piVar3 + 8))();
  }
  iStack_30 = 0x1003163f;
  piStack_2c = piVar3;
  (**(code **)(param_1[0x66] + 0x1fc))();
  iStack_30 = local_10[0];
  apiStack_38[1] = local_14;
  apiStack_38[0] = (int *)0x10031650;
  (**(code **)(param_1[0x66] + 8))();
  apiStack_38[0] = local_10;
  (**(code **)(*piVar1 + 0xc))(&local_14);
  (**(code **)(*piVar1 + 0x21c))(3);
  uVar2 = (uint)((char)param_1[0x31] == '\0');
  (*(code *)**(undefined4 **)(&iStack_30)[uVar2])
            (0,(local_10[(uint)(unaff_ESI <= unaff_EBP) * 2 + -5] - local_10[uVar2 * 2 + -5]) / 2);
  (**(code **)*apiStack_38[uVar2 == 0])
            ((&iStack_30)[uVar2 * 2] + 5,
             (local_10[(uint)(unaff_ESI <= unaff_EBP) * 2 + -5] -
             (int)(&piStack_2c)[(uint)(uVar2 == 0) * 2]) / 2);
  piVar3 = apiStack_38[1];
  if ((int)apiStack_38[1] <= (int)piStack_2c) {
    piVar3 = piStack_2c;
  }
  (**(code **)(*param_1 + 8))(iStack_30 + 5 + (int)apiStack_38[0],piVar3);
  (**(code **)(*param_1 + 0x30))();
  return;
}

