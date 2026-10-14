
void __thiscall FUN_10029880(void *this,uint param_1,uint param_2)

{
  *(uint *)(*(int *)((int)this + 4) + 0x148) = *(uint *)(*(int *)((int)this + 4) + 0x148) & 0xf0 | 2
  ;
  FUN_10029490(this,param_1);
  FUN_100294e0(this,param_2);
  *(uint *)(*(int *)((int)this + 4) + 0x128) = *(uint *)(*(int *)((int)this + 4) + 0x128) & 0xfff;
  *(uint *)(*(int *)((int)this + 4) + 0x110) = *(uint *)(*(int *)((int)this + 4) + 0x110) & 0xfff;
  FUN_100298f0((int)this);
  return;
}

