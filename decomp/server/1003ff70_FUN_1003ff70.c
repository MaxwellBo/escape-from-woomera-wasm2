
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_1003ff70(void *this,float param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [48];
  int local_8;
  
  FUN_100af200(*(int *)((int)this + 4) + 0x50);
  iVar1 = *(int *)((int)this + 4);
  local_74 = *(float *)(iVar1 + 8);
  local_70 = *(float *)(iVar1 + 0xc);
  local_6c = *(float *)(iVar1 + 0x10) + _DAT_100ddb10;
  local_4c = param_1 * *(float *)(DAT_10122044 + 0x38) * _DAT_100e1374;
  local_48 = param_1 * *(float *)(DAT_10122044 + 0x3c) * _DAT_100e1374;
  local_64 = param_1 * *(float *)(DAT_10122044 + 0x2c);
  local_60 = param_1 * *(float *)(DAT_10122044 + 0x30);
  local_58 = local_70 + local_64;
  local_54 = local_60 + local_6c;
  local_44 = (param_1 * *(float *)(DAT_10122044 + 0x28) + local_74) -
             param_1 * *(float *)(DAT_10122044 + 0x34) * _DAT_100e1374;
  local_40 = local_58 - local_4c;
  local_3c = local_54 - local_48;
  FUN_100afc90(&local_74,&local_44,0,3,*(undefined4 *)(iVar1 + 0x208),local_38);
  if (local_8 != 0) {
    piVar2 = *(int **)(local_8 + 0x7c);
    if (0 < param_2) {
      (**(code **)(*piVar2 + 0x60))
                (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 4),(float)param_2,
                 param_3);
    }
    return piVar2;
  }
  return (int *)0x0;
}

