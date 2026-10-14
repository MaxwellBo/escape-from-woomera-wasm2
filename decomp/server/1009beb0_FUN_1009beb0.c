
void __thiscall FUN_1009beb0(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  float10 fVar3;
  
  if (*(int *)((int)this + 0x2fc) != 0) {
    FUN_100901d0(*(int *)((int)this + 0x2fc));
  }
  bVar2 = FUN_10019450((uint *)((int)this + 0x160));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    *(undefined4 *)((int)this + 0x1dc) = 3;
  }
  FUN_10019420((undefined4 *)((int)this + 0x168),param_1);
  iVar1 = *(int *)this;
  fVar3 = (float10)(*DAT_10121f74)(0x40333333,0x404ccccd,0x3f800000,0x40000000);
  (**(code **)(iVar1 + 0x198))(*(undefined4 *)((int)this + 0x324),(float)fVar3);
  *(undefined4 *)((int)this + 0x37c) = *(undefined4 *)((int)this + 0x168);
  *(undefined4 *)((int)this + 0x380) = *(undefined4 *)((int)this + 0x16c);
  *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) & 0xefffffff;
  FUN_10004e30((int)this);
  return;
}

