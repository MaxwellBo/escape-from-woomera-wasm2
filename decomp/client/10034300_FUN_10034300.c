
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10034300(void)

{
  int *piVar1;
  BorderLayout *this;
  undefined4 uVar2;
  undefined4 *this_00;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_100342f0();
  (**(code **)(*piVar1 + 300))(0x80,0x80,0,0);
  this = operator_new(8);
  if (this == (BorderLayout *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = vgui::BorderLayout::BorderLayout(this,0);
  }
  (**(code **)(*piVar1 + 0xb4))(uVar2);
  if (DAT_100a5178 != (void *)0x0) {
    FUN_10039860(DAT_100a5178);
    return;
  }
  this_00 = FUN_10039590(0xad0);
  if (this_00 != (undefined4 *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x1c))();
    iVar4 = (**(code **)(*piVar1 + 0x18))();
    DAT_100a5178 = FUN_100395c0(this_00,0,0,iVar4,iVar3);
    (**(code **)(*(int *)DAT_100a5178 + 0x40))(piVar1);
    return;
  }
  DAT_100a5178 = (Panel *)0x0;
  (**(code **)(_DAT_00000000 + 0x40))(piVar1);
  return;
}

