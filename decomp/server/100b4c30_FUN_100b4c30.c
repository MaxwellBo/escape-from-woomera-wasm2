
int __thiscall FUN_100b4c30(void *this,int param_1,byte *param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 1;
  piVar5 = (int *)((int)this + 0xd4);
  do {
    if (*piVar5 == 0) {
      if (iVar4 < 0x20) {
        if (param_4 != (int *)0x0) {
          *param_4 = iVar4;
        }
        *(int *)((int)this + iVar4 * 4 + 0xd0) = (int)param_2 - *(int *)((int)DAT_10122044 + 0x98);
        *(int *)((int)this + iVar4 * 4 + 0x150) = param_1;
        return iVar4;
      }
      break;
    }
    uVar2 = FUN_100d8b20(DAT_10122044,param_2,(byte *)(*(int *)((int)DAT_10122044 + 0x98) + *piVar5)
                        );
    if (uVar2 == 0) {
      if (param_4 != (int *)0x0) {
        *param_4 = iVar4;
      }
      iVar1 = *(int *)((int)this + iVar4 * 4 + 0x150);
      iVar3 = param_3 - iVar1;
      if (param_1 < iVar3) {
        iVar3 = param_1;
      }
      if ((param_1 != 0) && (iVar3 < 1)) {
        return -1;
      }
      *(int *)((int)this + iVar4 * 4 + 0x150) = iVar1 + iVar3;
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0x20);
  (*DAT_10121efc)(1,s_out_of_named_ammo_slots_1011badc);
  return iVar4;
}

