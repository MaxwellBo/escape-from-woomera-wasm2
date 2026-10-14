
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1002a540(int *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_a0 [12];
  undefined4 uStack_70;
  int *piStack_6c;
  int iStack_68;
  float *pfStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  float local_50;
  float local_4c;
  float local_48;
  int local_44 [4];
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_50 = *param_2 + *(float *)(DAT_100acc38 + 0x38);
  iStack_68 = DAT_100acc38 + 0x38;
  iStack_5c = 0xffffffff;
  uStack_60 = 0;
  local_4c = *(float *)(DAT_100acc38 + 0x3c) + param_2[1];
  local_48 = *(float *)(DAT_100acc38 + 0x40) + param_2[2];
  pfStack_64 = &local_50;
  piStack_6c = local_44;
  uStack_70 = 0x1002a583;
  piVar1 = (int *)(**(code **)(DAT_100acc38 + 0x4f580))();
  piVar3 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  *(undefined4 *)(DAT_100acc38 + 0x38) = uStack_30;
  *(undefined4 *)(DAT_100acc38 + 0x3c) = uStack_2c;
  *(undefined4 *)(DAT_100acc38 + 0x40) = uStack_28;
  if ((fStack_34 < (float)_DAT_10059a10) && (local_44[0] == 0)) {
    iStack_5c = DAT_100acc38 + 0x5c;
    piVar1 = local_44;
    piVar3 = aiStack_a0;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_10027780();
  }
  piVar1 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *piVar1;
    piVar1 = piVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

