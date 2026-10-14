
undefined4 __thiscall FUN_100168e0(void *this,undefined4 param_1,int param_2)

{
  uint *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  void *this_01;
  undefined4 uVar5;
  
  iVar2 = FUN_100170e0((int)this);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  iVar3 = *(int *)(param_2 + 0x208);
  if ((iVar3 == 0) && (iVar3 = (*DAT_10121f1c)(0), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x7c);
  }
  this_00 = (uint *)((int)this + 0xc0);
  FUN_10019420(this_00,iVar3);
  bVar1 = FUN_10019450(this_00);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (iVar2 == 2) {
      this_01 = (void *)(*(int *)(*(int *)((int)this + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98));
      FUN_10094b20(this_01,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),2,this_01,0x3f800000,
                   0x3f4ccccd,0,100);
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x20) == 0) {
        uVar5 = 0;
        iVar2 = 3;
        piVar4 = (int *)FUN_10019410(this_00);
        FUN_10098e40(this,piVar4,iVar2,uVar5);
      }
      CBaseButton::ButtonReturn(this);
      return 0;
    }
    FUN_10017260(this);
  }
  return 0;
}

