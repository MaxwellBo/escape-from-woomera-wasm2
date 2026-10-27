
int __thiscall FUN_10026270(void *this,byte *param_1,int *param_2,int param_3)

{
  uint uVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (byte *)0x0) {
    (*DAT_10121efc)(1,s__s_set_to_unnamed_schedule__10107354,
                    **(int **)((int)this + 4) + *(int *)(DAT_10122044 + 0x98));
  }
  else {
    iVar2 = 0;
    piVar3 = param_2;
    if (0 < param_3) {
      do {
        if (*(byte **)(*piVar3 + 0x10) == (byte *)0x0) {
          (*DAT_10121efc)(1,s_Unnamed_schedule__10107340);
          this = extraout_ECX;
        }
        else {
          uVar1 = FUN_100d8b20(this,param_1,*(byte **)(*piVar3 + 0x10));
          this = extraout_ECX_00;
          if (uVar1 == 0) {
            return param_2[iVar2];
          }
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < param_3);
      return 0;
    }
  }
  return 0;
}

