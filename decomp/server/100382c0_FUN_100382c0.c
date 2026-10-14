
void __thiscall
FUN_100382c0(void *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0xcc))(), iVar1 == 0)) {
    if (((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 0x80) != 0) &&
       (*(code **)((int)param_1 + 0x7c) != (code *)0x0)) {
      (**(code **)((int)param_1 + 0x7c))(param_2,param_3,param_4,param_5);
    }
    return;
  }
  if ((*(uint *)(*(int *)((int)param_1 + 4) + 0x1a0) & 0x200) != 0) {
    return;
  }
  iVar1 = param_2[1];
  if (((*(float *)(iVar1 + 0x20) == DAT_10121dd8) && (*(float *)(iVar1 + 0x24) == DAT_10121ddc)) &&
     (*(float *)(iVar1 + 0x28) == DAT_10121de0)) {
    return;
  }
  FUN_100383d0(param_1,param_2,0);
  return;
}

