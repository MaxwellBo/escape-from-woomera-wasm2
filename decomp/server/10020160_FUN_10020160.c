
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10020160(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [16];
  float fStack_2c;
  int iStack_c;
  
  iVar1 = param_2[1];
  if ((*(byte *)(iVar1 + 0x1a4) & 0x80) != 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0x1c0) != 3) {
    if (*(int *)(iVar1 + 0x1c0) == 3) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x1c0) != 3) goto LAB_100201b5;
  }
  if (*(int *)(iVar1 + 0x1c0) == 0) {
    return 0;
  }
LAB_100201b5:
  fStack_50 = *(float *)(iVar2 + 8) + *(float *)(iVar2 + 0x174);
  fStack_4c = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 0xc);
  fStack_54 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0x10);
  fStack_48 = fStack_54;
  (**(code **)(*param_2 + 0xfc))(auStack_44);
  FUN_100afc20(&fStack_54,&stack0xffffffa0,1,1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
               auStack_3c);
  if ((fStack_2c != (float)_DAT_100dd628) && (iStack_c != *(int *)(param_2[1] + 0x208))) {
    return 0;
  }
  return 1;
}

