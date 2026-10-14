
void __thiscall FUN_10029800(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  *(uint *)(*(int *)((int)this + 4) + 0x148) = *(uint *)(*(int *)((int)this + 4) + 0x148) & 0xf0 | 1
  ;
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar1 + 8) = *param_1;
  *(undefined4 *)(iVar1 + 0xc) = param_1[1];
  *(undefined4 *)(iVar1 + 0x10) = param_1[2];
  FUN_100294e0(this,param_2);
  *(uint *)(*(int *)((int)this + 4) + 0x128) = *(uint *)(*(int *)((int)this + 4) + 0x128) & 0xfff;
  *(uint *)(*(int *)((int)this + 4) + 0x110) = *(uint *)(*(int *)((int)this + 4) + 0x110) & 0xfff;
  FUN_100298f0((int)this);
  return;
}

