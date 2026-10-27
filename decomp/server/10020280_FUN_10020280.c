
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10020280(int *param_1)

{
  undefined4 unaff_retaddr;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [16];
  float fStack_2c;
  
  (**(code **)(*param_1 + 0xfc))(auStack_44);
  FUN_100afc20(&stack0xffffffac,unaff_retaddr,1,1,*(undefined4 *)(param_1[1] + 0x208),auStack_3c);
  if (fStack_2c != (float)_DAT_100dd628) {
    return 0;
  }
  return 1;
}

