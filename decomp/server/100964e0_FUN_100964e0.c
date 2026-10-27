
void __thiscall FUN_100964e0(void *this,void *param_1)

{
  uint *this_00;
  void *pvVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *this_01;
  void *pvVar3;
  undefined3 extraout_var_00;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pvVar1 = param_1;
  bVar2 = FUN_10019450((uint *)((int)this + 0x308));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    if (param_1 == (void *)0x0) {
      (*DAT_10121efc)(1,s_ERROR__SquadMakeEnemy_____pEnemy_10117394);
      return;
    }
    param_1 = (void *)FUN_10019410((uint *)((int)this + 0x308));
    if (param_1 == (void *)0x0) {
      param_1 = this;
    }
    iVar6 = 0;
    puVar5 = (uint *)((int)param_1 + 0x310);
    do {
      this_01 = param_1;
      if (iVar6 < 4) {
        this_01 = (void *)FUN_10019410(puVar5);
      }
      if (this_01 != (void *)0x0) {
        this_00 = (uint *)((int)this_01 + 0x160);
        pvVar3 = (void *)FUN_10019410(this_00);
        if ((pvVar3 != pvVar1) && ((*(byte *)((int)this_01 + 0x15c) & 0x10) == 0)) {
          bVar2 = FUN_10019450(this_00);
          if (CONCAT31(extraout_var_00,bVar2) != 0) {
            puVar7 = (undefined4 *)((int)this_01 + 0x2a8);
            iVar4 = FUN_10019410(this_00);
            FUN_1005e010(this_01,iVar4,puVar7);
          }
          FUN_10019420(this_00,(int)pvVar1);
          iVar4 = *(int *)((int)pvVar1 + 4);
          *(undefined4 *)((int)this_01 + 0x2a8) = *(undefined4 *)(iVar4 + 8);
          *(undefined4 *)((int)this_01 + 0x2ac) = *(undefined4 *)(iVar4 + 0xc);
          *(undefined4 *)((int)this_01 + 0x2b0) = *(undefined4 *)(iVar4 + 0x10);
          *(uint *)((int)this_01 + 0x15c) = *(uint *)((int)this_01 + 0x15c) | 0x10000;
        }
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar6 < 5);
  }
  return;
}

