
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10013420(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int iVar3;
  int unaff_EBP;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  int local_8;
  int local_4;
  
  local_10 = DAT_100a4dd0 / 2;
  local_14 = 8;
  local_18 = 8;
  local_8 = param_1;
  if (*(int **)(param_1 + 0x177e4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x177e4) + 8))(&local_14,&local_18);
  }
  piVar4 = (int *)(param_1 + 0x19004);
  local_4 = 7;
  do {
    if ((piVar4[1] == -1) || ((int *)piVar4[-2] == (int *)0x0)) {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x24))(0);
      }
      if ((int *)piVar4[-1] != (int *)0x0) {
        (**(code **)(*(int *)piVar4[-1] + 0x24))(0);
      }
      if ((int *)piVar4[-2] != (int *)0x0) {
        (**(code **)(*(int *)piVar4[-2] + 0x24))(0);
      }
    }
    else {
      puVar10 = local_c;
      piVar9 = &local_1c;
      (**(code **)(*(int *)piVar4[-2] + 0x214))(piVar9);
      iVar1 = (DAT_100a4dcc * 2) / 3;
      if (iVar1 < unaff_EBP) {
        unaff_EBP = iVar1;
      }
      iVar1 = unaff_EBP + 6 + local_1c;
      iVar3 = unaff_EBX;
      if (unaff_EBX < local_14) {
        iVar3 = local_14;
      }
      iVar3 = iVar3 + 4;
      iVar5 = (DAT_100a4dcc - iVar1) + -8;
      iVar8 = local_18;
      (**(code **)(*(int *)piVar4[-1] + 0x10))(iVar5,local_18,iVar1,iVar3);
      iVar7 = unaff_EBP;
      (**(code **)(*(int *)piVar4[-2] + 0x10))(2,(iVar3 - unaff_EBP) / 2,piVar9,unaff_EBP);
      iVar1 = iVar5 + 4;
      if ((int *)*piVar4 == (int *)0x0) {
        (**(code **)(_DAT_00000000 + 0x24))(0);
      }
      else {
        (**(code **)(*(int *)*piVar4 + 0x1fc))(*(undefined4 *)(puVar10 + 0x177e4));
        (**(code **)(*(int *)*piVar4 + 0x24))(1);
        (**(code **)(*(int *)*piVar4 + 0x10))(iVar1,(iVar3 - iVar8) / 2,iVar5,iVar7);
      }
      local_10 = local_10 + 2 + iVar3;
      param_1 = local_8;
    }
    piVar4 = piVar4 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if ((((*(int *)(param_1 + 0x177e8) == 0) || (*(int *)(param_1 + 0x177ec) == 0)) ||
      (*(int **)(param_1 + 0x177f0) == (int *)0x0)) ||
     ((*(char *)(param_1 + 0x177f4) == '\0' && (*(char *)(param_1 + 0x177f5) == '\0')))) {
    (**(code **)(**(int **)(param_1 + 0x177f0) + 0x24))(0);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x177f0) + 0x40))(**(undefined4 **)(param_1 + 0x20));
  (**(code **)(**(int **)(param_1 + 0x177f0) + 0x24))(1);
  if (*(char *)(param_1 + 0x177f5) != '\0') {
    fVar6 = (float10)(*DAT_100a502c)(s_voice_clientdebug_100779dc);
    if (fVar6 != (float10)_DAT_10059a18) {
      uVar2 = *(undefined4 *)(param_1 + 0x177ec);
      iVar1 = **(int **)(param_1 + 0x177f0);
      goto LAB_10013645;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x177e8);
  iVar1 = **(int **)(param_1 + 0x177f0);
LAB_10013645:
  (**(code **)(iVar1 + 0x1fc))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x177e8) + 8))(&local_10,&local_14);
  iVar3 = DAT_100a4dcc - local_18;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x17734) + 0xc))();
  (**(code **)**(undefined4 **)(param_1 + 0x177f0))(iVar3 + -10,iVar1 - local_1c);
  return;
}

