
void __thiscall FUN_1009bde0(void *this,int param_1)

{
  uint *this_00;
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  undefined3 extraout_var_00;
  float10 fVar4;
  
  this_00 = (uint *)((int)this + 0x168);
  bVar1 = FUN_10019450(this_00);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)FUN_10019460(this_00);
    iVar3 = (**(code **)(*piVar2 + 0xcc))();
    if (iVar3 != 0) {
      if ((*(byte *)((int)this + 0x2a0) & 1) == 0) {
        iVar3 = *(int *)this;
        fVar4 = (float10)(*DAT_10121f74)(0x40333333,0x404ccccd,0x3f800000,0x40000000);
        (**(code **)(iVar3 + 0x198))(*(undefined4 *)((int)this + 0x328),(float)fVar4);
        *(uint *)((int)this + 0x37c) = *this_00;
        *(undefined4 *)((int)this + 0x380) = *(undefined4 *)((int)this + 0x16c);
      }
      if (*(int *)((int)this + 0x26c) == 1) {
        FUN_1005d290((int)this);
      }
      FUN_10019420(this_00,0);
      if (param_1 != 0) {
        FUN_10004e30((int)this);
      }
      bVar1 = FUN_10019450((uint *)((int)this + 0x160));
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        *(undefined4 *)((int)this + 0x1dc) = 2;
      }
    }
  }
  return;
}

