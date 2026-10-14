
undefined4 __thiscall FUN_100b3d00(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100b3ba0(this,param_1);
  *(uint *)(*(int *)(param_1 + 4) + 0x168) =
       *(uint *)(*(int *)(param_1 + 4) + 0x168) |
       1 << ((byte)*(undefined4 *)((int)this + 0xe4) & 0x1f);
  if (*(int *)((int)this + 0x104) == 0) {
    iVar2 = FUN_10080dd0((void *)(*(int *)((int)this + 0xe4) * 5),
                         (byte *)(&DAT_10131e20)[*(int *)((int)this + 0xe4) * 0xb]);
    *(int *)((int)this + 0x104) = iVar2;
    iVar2 = FUN_10080dd0((void *)(*(int *)((int)this + 0xe4) * 5),
                         (byte *)(&DAT_10131e28)[*(int *)((int)this + 0xe4) * 0xb]);
    *(int *)((int)this + 0x108) = iVar2;
  }
  if (iVar1 != 0) {
    uVar3 = (**(code **)(*(int *)this + 0x170))();
    return uVar3;
  }
  return 0;
}

