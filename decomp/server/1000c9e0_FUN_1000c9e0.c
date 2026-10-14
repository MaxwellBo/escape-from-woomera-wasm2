
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_1000c9e0(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  int local_60 [10];
  undefined1 local_38 [28];
  float local_1c;
  
  iVar1 = *(int *)((int)this + 4);
  local_64 = *(float *)(iVar1 + 0x10) - _DAT_100de9b8;
  local_68 = *(undefined4 *)(iVar1 + 0xc);
  local_6c = *(undefined4 *)(iVar1 + 8);
  FUN_100afc60((undefined4 *)(iVar1 + 8),&local_6c,1,*(undefined4 *)(iVar1 + 0x208),local_38);
  local_70 = ABS(*(float *)(*(int *)((int)this + 4) + 0x10) - local_1c);
  if (param_1 != (float *)0x0) {
    *param_1 = local_70;
  }
  iVar1 = *(int *)((int)this + 4);
  local_74 = *(float *)(iVar1 + 0xc) - _DAT_100de45c;
  local_78 = *(float *)(iVar1 + 8) - _DAT_100de45c;
  local_80 = *(float *)(iVar1 + 0xc) + _DAT_100de45c;
  local_84 = *(float *)(iVar1 + 8) + _DAT_100de45c;
  local_7c = *(undefined4 *)(iVar1 + 0x10);
  local_70 = *(float *)(iVar1 + 0x10) - local_70;
  iVar1 = FUN_100ae980(local_60,10,&local_78,&local_84,0x28);
  if ((iVar1 != 0) && (iVar3 = 0, 0 < iVar1)) {
    piVar4 = local_60;
    do {
      if ((void *)*piVar4 != this) {
        iVar2 = (**(code **)(*(int *)this + 0x130))((void *)*piVar4);
        if ((0 < iVar2) && (*(int *)(*(int *)(*piVar4 + 4) + 0x170) == 0)) {
          return local_60[iVar3];
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

