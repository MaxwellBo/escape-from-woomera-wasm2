
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10017f80(int *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float unaff_retaddr;
  
  iVar1 = param_1[0x57];
  if (iVar1 == 0) {
    param_1[0x58] = -param_1[0x58];
  }
  param_1[0x57] = 1;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  if ((param_1[0x58] < 1) || (unaff_retaddr < (float)_DAT_100dd628)) {
    if ((-1 < param_1[0x58]) || (_DAT_100dd5f8 < unaff_retaddr)) {
      if (iVar1 == 0) {
        FUN_10017da0((int)param_1);
      }
      if (*(float *)(param_1[1] + 0x100) <= (float)param_1[0x15]) {
        (**(code **)(*param_1 + 0x10))((float)param_1[0x15] + (float)_DAT_100dfb80);
      }
      else {
        (**(code **)(*param_1 + 8))(0x3dcccccd);
      }
      iVar1 = param_1[1];
      fVar2 = (float)param_1[0x58] * *(float *)(iVar1 + 0x1f8);
      *(float *)(iVar1 + 0x5c) = fVar2 * *(float *)(iVar1 + 0x44);
      *(float *)(iVar1 + 0x60) = fVar2 * *(float *)(iVar1 + 0x48);
      *(float *)(iVar1 + 100) = fVar2 * *(float *)(iVar1 + 0x4c);
      param_1[0x1d] = (int)CMomentaryRotButton::Off;
      return;
    }
    iVar1 = param_1[1];
    *(undefined4 *)(iVar1 + 0x5c) = DAT_10121dd8;
    *(undefined4 *)(iVar1 + 0x60) = DAT_10121ddc;
    piVar3 = param_1 + 0x5a;
    *(undefined4 *)(iVar1 + 100) = DAT_10121de0;
  }
  else {
    iVar1 = param_1[1];
    *(undefined4 *)(iVar1 + 0x5c) = DAT_10121dd8;
    *(undefined4 *)(iVar1 + 0x60) = DAT_10121ddc;
    piVar3 = param_1 + 0x5d;
    *(undefined4 *)(iVar1 + 100) = DAT_10121de0;
  }
  iVar1 = param_1[1];
  *(int *)(iVar1 + 0x50) = *piVar3;
  *(int *)(iVar1 + 0x54) = piVar3[1];
  *(int *)(iVar1 + 0x58) = piVar3[2];
  return;
}

