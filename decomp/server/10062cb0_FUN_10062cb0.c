
undefined4 __cdecl FUN_10062cb0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[0x17];
  if ((uVar1 & 0x80) != 0) {
    param_1[0x17] = uVar1 & 0xffffff7f;
    if ((uVar1 & 0x800) != 0) {
      param_1[0x17] = uVar1 & 0xfffff77f;
      (**(code **)*param_1)();
    }
    if ((param_1[0x17] & 0x400U) != 0) {
      param_1[0x17] = param_1[0x17] & 0xfffffbff;
      iVar2 = *(int *)(param_1[6] + 4);
      iVar3 = param_1[1];
      (*DAT_10121efc)(1,s_DesiredInfo__pos__f__f__f__vel___10111790,(double)*(float *)(iVar3 + 8),
                      (double)*(float *)(iVar3 + 0xc),(double)*(float *)(iVar3 + 0x10),
                      (double)*(float *)(iVar3 + 0x20),(double)*(float *)(iVar3 + 0x24),
                      (double)*(float *)(iVar3 + 0x28),(double)*(float *)(iVar2 + 8),
                      (double)*(float *)(iVar2 + 0xc),(double)*(float *)(iVar2 + 0x10),
                      (double)*(float *)(iVar2 + 0x20),(double)*(float *)(iVar2 + 0x24),
                      (double)*(float *)(iVar2 + 0x28));
    }
    if ((param_1[0x17] & 0x200U) != 0) {
      param_1[0x17] = param_1[0x17] & 0xfffffdff;
      FUN_10062c00((int)param_1);
    }
    if ((param_1[0x17] & 0x100U) != 0) {
      param_1[0x17] = param_1[0x17] & 0xfffffeff;
      (**(code **)(*param_1 + 0xdc))();
    }
    return 1;
  }
  return 0;
}

