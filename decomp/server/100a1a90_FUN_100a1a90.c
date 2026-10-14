
void __thiscall FUN_100a1a90(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar2),param_1);
    iVar2 = 1;
    for (; piVar1 != (int *)0x0;
        piVar1 = (int *)FUN_100af060((int)piVar1,
                                     (byte *)(*(int *)(DAT_10122044 + 0x98) +
                                             *(int *)(*(int *)((int)this + 4) + 0x1c8)),param_1)) {
      FUN_100a1b30(this,piVar1,iVar2,param_1);
      iVar2 = 0;
    }
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x40) != 0) {
    *(code **)((int)this + 0x74) = CBaseEntity::SUB_Remove;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  return;
}

