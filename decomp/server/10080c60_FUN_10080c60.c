
int __thiscall FUN_10080c60(void *param_1,undefined4 param_2,byte *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *this;
  void *this_00;
  int unaff_EBP;
  
  if (param_3 != (byte *)0x0) {
    iVar1 = (**(code **)(*DAT_10121db8 + 0xa0))(param_1,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_10080dd0(this,param_3);
      if ((-1 < iVar1) && (iVar1 < 0x20)) {
        iVar2 = *(int *)((int)param_1 + iVar1 * 4 + 0x534);
        param_4 = param_4 - iVar2;
        if (param_4 <= unaff_EBP) {
          unaff_EBP = param_4;
        }
        if (unaff_EBP < 1) {
          return iVar1;
        }
        *(int *)((int)param_1 + iVar1 * 4 + 0x534) = iVar2 + unaff_EBP;
        if (DAT_101248c8 != 0) {
          (*DAT_10121ec0)(1,DAT_101248c8,0,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
          iVar2 = FUN_10080dd0(this_00,param_3);
          (*DAT_10121ec8)(iVar2);
          (*DAT_10121ec8)(unaff_EBP);
          (*DAT_10121ec4)();
        }
        FUN_1007c980(param_1);
        return iVar1;
      }
    }
  }
  return -1;
}

