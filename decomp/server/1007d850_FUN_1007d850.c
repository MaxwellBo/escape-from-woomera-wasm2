
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007d850(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 4);
  if ((((*(uint *)(iVar1 + 0x1a4) & 0x800) == 0) &&
      (((*(int *)(iVar1 + 0x1c0) < 2 || (*(int *)(iVar1 + 0x1c4) == -0x13)) &&
       ((*(byte *)((int)param_1 + 0x330) & 2) != 0)))) &&
     (((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0 && (*(int *)(iVar1 + 0x19c) != 0)))) {
    FUN_100af200(iVar1 + 0x50);
    FUN_1007c580(param_1,2);
    if ((*(int *)((int)param_1 + 0x4ec) != 0) &&
       (((iVar1 = *(int *)((int)param_1 + 4), (*(byte *)(iVar1 + 0x180) & 4) != 0 &&
         (0 < *(int *)(iVar1 + 0x22c))) &&
        (_DAT_100ddaf8 <
         SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
              *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
              *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)))))) {
      FUN_1007c580(param_1,3);
    }
    iVar1 = *(int *)((int)param_1 + 4);
    iVar2 = *(int *)(iVar1 + 0x19c);
    if (((iVar2 != 0) && (iVar2 != -0x80)) && ((*(byte *)(iVar2 + 0x224) & 4) != 0)) {
      *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) + *(float *)(iVar1 + 0x2c);
      *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x30) + *(float *)(iVar1 + 0x24);
      *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x34) + *(float *)(iVar1 + 0x28);
    }
  }
  return;
}

