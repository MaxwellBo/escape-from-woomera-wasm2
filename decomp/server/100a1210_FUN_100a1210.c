
bool __thiscall FUN_100a1210(void *this,int param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  bVar2 = false;
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x160)) {
    piVar6 = (int *)((int)this + 0x164);
    do {
      piVar3 = (int *)FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar6),param_1);
      if (piVar3 != (int *)0x0) {
        uVar4 = (**(code **)(*piVar3 + 0x58))();
        switch(uVar4) {
        case 0:
          bVar1 = *(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x10;
          break;
        case 1:
          bVar1 = *(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x20;
          break;
        case 2:
          if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 8) != 0) goto switchD_100a1263_default;
          goto LAB_100a12ae;
        case 3:
          bVar1 = *(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x20;
          break;
        case 4:
          bVar1 = *(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x80;
          break;
        default:
          goto switchD_100a1263_default;
        }
        if (bVar1 == 0) {
switchD_100a1263_default:
          if (*(int *)((int)this + 0x15c) == 0) {
            return false;
          }
          if (*(int *)((int)this + 0x15c) == 2) {
            return true;
          }
        }
        else {
LAB_100a12ae:
          switch(*(undefined4 *)((int)this + 0x15c)) {
          case 1:
            goto switchD_100a1304_caseD_0;
          case 3:
            goto switchD_100a1304_caseD_1;
          case 4:
            if (bVar2) {
              return false;
            }
            bVar2 = true;
            break;
          case 5:
            if (bVar2) {
              return true;
            }
            bVar2 = true;
          }
        }
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < *(int *)((int)this + 0x160));
  }
  switch(*(undefined4 *)((int)this + 0x15c)) {
  case 0:
  case 3:
switchD_100a1304_caseD_0:
    return true;
  case 4:
    return bVar2;
  case 5:
    return !bVar2;
  }
switchD_100a1304_caseD_1:
  return false;
}

