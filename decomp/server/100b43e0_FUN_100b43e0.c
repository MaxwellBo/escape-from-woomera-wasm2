
int * __fastcall FUN_100b43e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined1 auStack_c [12];
  
  *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) | 0x80;
  param_1[0x1e] = 0;
  uVar2 = (**(code **)(*DAT_10121db8 + 0xb0))(auStack_c,param_1);
  FUN_100afe10((int)param_1,uVar2);
  iVar1 = *param_1;
  param_1[0x1d] = (int)CBasePlayerAmmo::Materialize;
  fVar3 = (float10)(**(code **)(*DAT_10121db8 + 0xac))(param_1);
  (**(code **)(iVar1 + 0x10))((float)fVar3);
  return param_1;
}

