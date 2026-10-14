
void __fastcall FUN_10048620(CBaseEntity *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1d8);
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      if ((*(uint *)(param_1 + 0x15c) & 0x100000) == 0) {
        iVar2 = *(int *)(param_1 + 4);
        if (*(int *)(iVar2 + 0x108) == 6) {
          if ((*(uint *)(iVar2 + 0x1a4) & 0x200) != 0) {
            *(undefined4 *)(iVar2 + 0x108) = 4;
            (**(code **)(*(int *)param_1 + 0x184))(0x2e);
            return;
          }
          (**(code **)(*(int *)param_1 + 0x184))(0x2c);
          return;
        }
        if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
          iVar2 = (**(code **)(*(int *)param_1 + 0x1e4))();
          if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x20) != 0)) {
            (**(code **)(*(int *)param_1 + 0x184))(0x13);
            return;
          }
        }
        uVar1 = *(uint *)(param_1 + 0x15c);
        if ((uVar1 & 0x100) != 0) {
          *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + 1;
        }
        if ((uVar1 & 0x200) != 0) {
          *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + 1;
        }
        if ((uVar1 & 0x800) != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x16);
          return;
        }
        if ((uVar1 & 0x1000) != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x19);
          return;
        }
        if (((uVar1 & 0x10) != 0) && ((uVar1 & 0x80000) != 0)) {
          *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + 1;
          (**(code **)(*(int *)param_1 + 0x184))(0x2b);
          return;
        }
        if ((uVar1 & 0x400) != 0) {
          *(undefined4 *)(param_1 + 0x338) = 0;
          (**(code **)(*(int *)param_1 + 0x184))(0x18);
          return;
        }
        if ((uVar1 & 0x10) != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(10);
          return;
        }
        if ((uVar1 & 0x10000) != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x12);
          return;
        }
        (**(code **)(*(int *)param_1 + 0x184))(8);
        return;
      }
      goto LAB_1004863a;
    }
    if (iVar2 != 3) goto LAB_1004863a;
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0x1e4))();
    if (iVar2 != 0) {
      if ((*(uint *)(iVar2 + 0xc) & 0x20) != 0) {
        (**(code **)(*(int *)param_1 + 0x184))(0x13);
        return;
      }
      if ((*(uint *)(iVar2 + 0xc) & 1) != 0) {
        (**(code **)(*(int *)param_1 + 0x184))(9);
        return;
      }
    }
  }
LAB_1004863a:
  FUN_10006c50(param_1);
  return;
}

