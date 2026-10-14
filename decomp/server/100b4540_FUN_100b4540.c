
void * __thiscall FUN_100b4540(void *this,void *param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined3 extraout_var_00;
  
  iVar1 = *(int *)((int)this + 0xe4);
  pvVar3 = param_1;
  if ((&DAT_10131e20)[iVar1 * 0xb] != 0) {
    bVar2 = FUN_100b3f30(param_1,*(int *)((int)this + 0x11c),(&DAT_10131e20)[iVar1 * 0xb],
                         *(int *)(&DAT_10131e34 + iVar1 * 0x2c),(&DAT_10131e24)[iVar1 * 0xb]);
    *(undefined4 *)((int)this + 0x11c) = 0;
    pvVar3 = (void *)CONCAT31(extraout_var,bVar2);
  }
  if ((&DAT_10131e28)[*(int *)((int)this + 0xe4) * 0xb] != 0) {
    bVar2 = FUN_100b4000(param_1,0,(&DAT_10131e28)[*(int *)((int)this + 0xe4) * 0xb],
                         (&DAT_10131e2c)[*(int *)((int)this + 0xe4) * 0xb]);
    pvVar3 = (void *)CONCAT31(extraout_var_00,bVar2);
  }
  return pvVar3;
}

