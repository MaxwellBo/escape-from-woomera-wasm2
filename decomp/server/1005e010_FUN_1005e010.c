
void __thiscall FUN_1005e010(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  uint *puVar5;
  
  if (param_1 != 0) {
    iVar4 = 0;
    puVar5 = (uint *)((int)this + 0x170);
    while (iVar3 = FUN_10019410(puVar5), iVar3 != param_1) {
      bVar2 = FUN_10019450(puVar5);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        if (3 < iVar4) {
          return;
        }
        FUN_10019420((void *)((int)this + iVar4 * 8 + 0x170),param_1);
        puVar1 = (undefined4 *)((int)this + iVar4 * 0xc + 400);
        *puVar1 = *param_2;
        puVar1[1] = param_2[1];
        puVar1[2] = param_2[2];
        return;
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
      if (3 < iVar4) {
        return;
      }
    }
  }
  return;
}

