
void __fastcall FUN_10014960(CBaseEntity *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x1d8) == 2) {
    uVar1 = *(uint *)(param_1 + 0x15c);
    if ((uVar1 & 0x100000) == 0) {
      if ((uVar1 & 0x10000) != 0) {
        if (*(int *)(param_1 + 0x308) != 0) {
          iVar2 = *(int *)param_1;
          uVar4 = FUN_10019410((uint *)(param_1 + 0x160));
          iVar2 = (**(code **)(iVar2 + 0x130))(uVar4);
          if (iVar2 == 2) {
            *(undefined4 *)(param_1 + 0x308) = 0;
            (**(code **)(*(int *)param_1 + 0x184))(0x2d);
            return;
          }
        }
        (**(code **)(*(int *)param_1 + 0x184))(3);
        return;
      }
      if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 0x400) != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x18);
          return;
        }
        if ((uVar1 & 0x800) != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x16);
          return;
        }
        if ((uVar1 & 0x2000) != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x17);
          return;
        }
        (**(code **)(*(int *)param_1 + 0x184))(0xc);
        return;
      }
      iVar2 = (**(code **)(*(int *)param_1 + 0x1e8))();
      if (iVar2 != 0) {
        iVar3 = (**(code **)(*(int *)param_1 + 0x148))(iVar2);
        if (iVar3 != 0) {
          iVar2 = (**(code **)(*(int *)param_1 + 0x10c))(iVar2);
          if (iVar2 != 0) goto LAB_10014ab2;
        }
        (**(code **)(*(int *)param_1 + 0x184))(0x2f);
        return;
      }
LAB_10014ab2:
      (**(code **)(*(int *)param_1 + 0x184))(0x2e);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x1d8) == 3) {
    uVar1 = *(uint *)(param_1 + 0x15c);
    if ((uVar1 & 0x300) != 0) {
      (**(code **)(*(int *)param_1 + 0x184))(0x2b);
      return;
    }
    if ((uVar1 & 0x40) != 0) {
      iVar2 = (**(code **)(*(int *)param_1 + 0x1e8))();
      if (iVar2 != 0) {
        iVar3 = (**(code **)(*(int *)param_1 + 0x148))(iVar2);
        if (iVar3 != 0) {
          iVar2 = (**(code **)(*(int *)param_1 + 0x10c))(iVar2);
          if (iVar2 != 0) goto LAB_100149d3;
        }
        (**(code **)(*(int *)param_1 + 0x184))(0x2f);
        return;
      }
LAB_100149d3:
      (**(code **)(*(int *)param_1 + 0x184))(0x2e);
      return;
    }
    if ((uVar1 & 0x40000) != 0) {
      iVar2 = (**(code **)(*(int *)param_1 + 0x1e8))();
      if (iVar2 != 0) {
        (**(code **)(*(int *)param_1 + 0x184))(0x30);
        return;
      }
    }
  }
  FUN_10006c50(param_1);
  return;
}

