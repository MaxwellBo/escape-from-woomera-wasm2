
void __thiscall FUN_1004bf20(void *param_1,int *param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)param_1 + 0x1e0) = 1;
  switch(*param_2) {
  case 0x13:
  case 0x14:
    *(uint *)((int)param_1 + 0x2a0) = *(uint *)((int)param_1 + 0x2a0) & 0xfffffffd;
  default:
    FUN_100057f0(param_1,param_2);
    break;
  case 0x1d:
  case 0x1f:
    FUN_100057f0(param_1,param_2);
    if (*(int *)(*(int *)((int)param_1 + 4) + 0x108) == 5) {
      *(undefined4 *)((int)param_1 + 0x1d0) = 0x33;
      return;
    }
    break;
  case 0x27:
    *(undefined4 *)((int)param_1 + 0x1d0) = 0x20;
    return;
  case 0x5d:
    break;
  case 0x5e:
    FUN_10049ed0((int)param_1);
    goto LAB_1004bf68;
  case 0x5f:
    iVar1 = FUN_10096a80(param_1);
    if (iVar1 == 0) {
      *(uint *)((int)param_1 + 0x15c) = *(uint *)((int)param_1 + 0x15c) | 0x10000000;
    }
LAB_1004bf68:
    if ((*(uint *)((int)param_1 + 0x15c) & 0x40000000) == 0) {
      *(undefined4 *)((int)param_1 + 0x1e0) = 4;
      return;
    }
  }
  return;
}

