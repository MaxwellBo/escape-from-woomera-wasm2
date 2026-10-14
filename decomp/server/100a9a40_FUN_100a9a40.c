
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a9a40(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *_Source;
  size_t _Count;
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1[1] + 0x1d0) != 0) {
    iVar1 = FUN_1001a140(param_4,*(uint *)(param_1[1] + 0x1a0) & 0x80000);
    if (iVar1 != 0) {
      if ((*(uint *)(param_1[1] + 0x1a0) & 0x80000) == 0) {
        _Count = 0x100;
        _Source = (char *)(*DAT_10121ef0)(*(int *)(param_1[1] + 0x1d0) +
                                          *(int *)(DAT_10122044 + 0x98));
        _strncpy((char *)(param_1 + 0x2e),_Source,_Count);
        FUN_100c8506(auStack_100,(byte *)s__s___s__10119e10);
        *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) | 0x80000;
        if (_DAT_100dd5f8 <= *(float *)(param_1[1] + 0x1bc)) {
          (**(code **)(*param_1 + 8))(*(float *)(param_1[1] + 0x1bc));
        }
      }
      else {
        FUN_100c8506(auStack_100,(byte *)s__s___s__10119e10);
        *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) & 0xfff7ffff;
      }
      (*DAT_10121ea4)(auStack_100);
    }
  }
  return;
}

