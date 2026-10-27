
void FUN_10037012(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  int unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 != 0) {
    uVar4 = 0;
    uVar1 = *(undefined4 *)(*(int *)(unaff_EBX + 4) + 0x208);
    uVar3 = 0x3f4ccccd;
    iVar2 = (*DAT_10121f70)(0,param_3 + -1);
    FUN_10094b20(this,uVar1,2,*(char **)(&stack0x00000010 + iVar2 * 4),param_3,uVar3,uVar4,unaff_EDI
                );
  }
  return;
}

