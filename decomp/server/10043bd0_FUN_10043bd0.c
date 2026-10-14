
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl
FUN_10043bd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,float param_7,float param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0x7c), piVar3 == (int *)0x0)) {
    piVar3 = (int *)(*DAT_10121f04)(iVar1,0x30c);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      FUN_10002f30(piVar3);
      *piVar3 = (int)&PTR_FUN_100dd65c;
      FUN_10002ec0(piVar3 + 100,0xc,4,FUN_1001bbd0);
      FUN_10002ec0(piVar3 + 0x7b,0x10,8,FUN_10002f10);
      *piVar3 = (int)&PTR_FUN_100e5cb4;
    }
    piVar3[1] = iVar2;
  }
  (**(code **)(*piVar3 + 0x28))();
  FUN_100afe10((int)piVar3,&param_2);
  iVar2 = piVar3[1];
  *(undefined4 *)(iVar2 + 0x20) = param_5;
  *(undefined4 *)(iVar2 + 0x24) = param_6;
  *(float *)(iVar2 + 0x28) = param_7;
  puVar4 = (undefined4 *)FUN_100ae830(&param_5,piVar3[1] + 0x20);
  iVar2 = piVar3[1];
  *(undefined4 *)(iVar2 + 0x50) = *puVar4;
  *(undefined4 *)(iVar2 + 0x54) = puVar4[1];
  *(undefined4 *)(iVar2 + 0x58) = puVar4[2];
  *(undefined4 *)(piVar3[1] + 0x198) = *(undefined4 *)(param_1 + 0x208);
  piVar3[0x1e] = (int)CGrenade::BounceTouch;
  *(float *)(piVar3[1] + 0x1e4) = param_8 + *DAT_10122044;
  piVar3[0x1d] = (int)CGrenade::TumbleThink;
  (**(code **)(*piVar3 + 8))(0x3dcccccd);
  if (param_7 < (float)_DAT_100dfb80) {
    (**(code **)(*piVar3 + 8))(0);
    iVar2 = piVar3[1];
    param_4 = 0;
    param_5 = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    param_6 = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  uVar5 = (*DAT_10121f70)(3,6);
  *(undefined4 *)(piVar3[1] + 0x128) = uVar5;
  *(undefined4 *)(piVar3[1] + 0x138) = 0x3f800000;
  *(undefined4 *)(piVar3[1] + 0x11c) = 0x3f000000;
  *(undefined4 *)(piVar3[1] + 0x120) = 0x3f4ccccd;
  (*DAT_10121e10)(*(undefined4 *)(piVar3[1] + 0x208),s_models_w_grenade_mdl_1010d38c);
  *(undefined4 *)(piVar3[1] + 0x1e0) = 0x42c80000;
  return piVar3;
}

