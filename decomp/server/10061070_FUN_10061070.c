
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10061070(int *param_1)

{
  byte bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (param_1[0xb9] == 0) {
    return 0;
  }
  switch(param_1[0xb9]) {
  case 1:
    bVar4 = FUN_10019450((uint *)(param_1 + 0x58));
    if (CONCAT31(extraout_var,bVar4) == 0) {
      return 0;
    }
    piVar2 = (int *)FUN_10019460((uint *)(param_1 + 0x58));
    iVar3 = (**(code **)(*piVar2 + 0xcc))();
    if (iVar3 == 0) {
      return 0;
    }
    bVar4 = (*(byte *)(param_1 + 0x57) & 0x10) == 0;
    goto LAB_100610b8;
  case 2:
    if ((param_1[0x57] & 0x300U) == 0) {
      return 0;
    }
    goto LAB_100611a2;
  case 3:
    iVar3 = (**(code **)(*param_1 + 0xb8))();
    if ((iVar3 != 0) &&
       (*(float *)(param_1[1] + 0x160) <= *(float *)(param_1[1] + 0x1b0) * _DAT_100dd614))
    goto LAB_100611a2;
    break;
  case 4:
    if (*(int *)(param_1[1] + 0x170) != 0) goto LAB_100611a2;
    break;
  case 7:
    if (((param_1[0x57] & 0x20000U) != 0) && ((*(byte *)(param_1 + 0xa3) & 2) != 0))
    goto LAB_100611a2;
    break;
  case 8:
    if ((param_1[0x57] & 0x20000U) == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0xa3) & 4;
    goto joined_r0x1006119c;
  case 9:
    if ((param_1[0x57] & 0x20000U) == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0xa3) & 1;
joined_r0x1006119c:
    if (bVar1 == 0) {
      return 0;
    }
    goto LAB_100611a2;
  case 10:
    bVar4 = (param_1[0x57] & 0x200000U) == 0;
LAB_100610b8:
    if (!bVar4) {
LAB_100611a2:
      (*DAT_10121efc)(2,s_AI_Trigger_Fire_Target_1011159c);
      FUN_10098c10((uint *)(param_1[0xba] + *(int *)(DAT_10122044 + 0x98)),param_1,param_1,3,0);
      param_1[0xb9] = 0;
      return 1;
    }
    break;
  case 0xb:
    if (((((param_1[0x57] & 0x200000U) != 0) && (iVar3 = param_1[0x76], iVar3 != 2)) && (iVar3 != 5)
        ) && (iVar3 != 6)) goto LAB_100611a2;
  }
  return 0;
}

