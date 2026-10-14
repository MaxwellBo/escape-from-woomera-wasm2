
undefined4 __thiscall FUN_10019ca0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_100b2080(param_1,(byte *)s_ENTVARS_101050c8,*(int *)((int)this + 4));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_100b20a0(param_1,&DAT_101050f0,(int)this,&DAT_10104df0,0x12);
  }
  iVar1 = *(int *)((int)this + 4);
  if ((*(int *)(iVar1 + 0xb4) != 0) && (*(int *)(iVar1 + 0xb8) != 0)) {
    local_c = *(undefined4 *)(iVar1 + 0xdc);
    local_8 = *(undefined4 *)(iVar1 + 0xe0);
    local_4 = *(undefined4 *)(iVar1 + 0xe4);
    local_18 = *(undefined4 *)(iVar1 + 0xe8);
    local_14 = *(undefined4 *)(iVar1 + 0xec);
    local_10 = *(undefined4 *)(iVar1 + 0xf0);
    (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0xb8));
    (*DAT_10121e10)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),
                    *(int *)(*(int *)((int)this + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
    FUN_100afdc0(*(int *)((int)this + 4),&local_c,&local_18);
  }
  return uVar2;
}

