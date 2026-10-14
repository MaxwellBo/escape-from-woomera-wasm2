
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1005f990(int *param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_10008100(param_1,0x1c);
  if (iVar2 != -1) {
    param_1[0xae] = param_1[0xae] | 0x800;
  }
  iVar2 = FUN_10008100(param_1,0x1d);
  if (iVar2 != -1) {
    param_1[0xae] = param_1[0xae] | 0x1000;
  }
  iVar2 = FUN_10008100(param_1,0x1e);
  if (iVar2 != -1) {
    param_1[0xae] = param_1[0xae] | 0x2000;
  }
  iVar2 = FUN_10008100(param_1,0x1f);
  if (iVar2 != -1) {
    param_1[0xae] = param_1[0xae] | 0x4000;
  }
  iVar2 = param_1[1];
  if ((*(int *)(iVar2 + 0x108) == 5) || ((*(uint *)(iVar2 + 0x1a0) & 0x80000000) != 0)) {
    *(uint *)(iVar2 + 0x1a4) = *(uint *)(iVar2 + 0x1a4) & 0xfffffdff;
  }
  else {
    *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + _DAT_100dd618;
    (*DAT_10121e70)(*(undefined4 *)(param_1[1] + 0x208));
    iVar2 = (*DAT_10121e74)(*(undefined4 *)(param_1[1] + 0x208),0,0,0);
    if ((iVar2 == 0) && (piVar1 = (int *)param_1[1], (*(byte *)(piVar1 + 0x68) & 0x80) == 0)) {
      (*DAT_10121efc)(1,s__s___s__stuck_in_wall__level_des_101112dc,
                      *(int *)(DAT_10122044 + 0x98) + *piVar1,
                      piVar1[0x73] + *(int *)(DAT_10122044 + 0x98));
      *(undefined4 *)(param_1[1] + 0x118) = 1;
    }
  }
  if (*(int *)(param_1[1] + 0x1c8) != 0) {
    iVar2 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1c8)));
    FUN_1005f8e0(param_1,iVar2);
  }
  iVar2 = *param_1;
  param_1[0x1d] = (int)CBaseMonster::CallMonsterThink;
  fVar3 = (float10)(*DAT_10121f74)(0x3dcccccd,0x3ecccccd);
  (**(code **)(iVar2 + 0x10))((float)(fVar3 + (float10)(float)param_1[0x15]));
  return;
}

