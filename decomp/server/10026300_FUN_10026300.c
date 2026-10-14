
undefined ** __thiscall FUN_10026300(void *this,undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  switch(param_1) {
  case 1:
    iVar2 = (*DAT_10121f70)(0,0xe);
    if ((iVar2 == 0) && (iVar2 = (**(code **)(*(int *)this + 0x1dc))(), iVar2 != 0)) {
      return &PTR_DAT_101068d0;
    }
    break;
  case 2:
    return &PTR_DAT_10106828;
  case 3:
    return &PTR_DAT_10106908;
  default:
    (*DAT_10121efc)(1,s_GetScheduleOfType___No_CASE_for_S_10107374,param_1);
    break;
  case 5:
    return &PTR_DAT_10106938;
  case 6:
    return &PTR_DAT_10106970;
  case 8:
    return &PTR_DAT_101069a8;
  case 9:
    return &PTR_DAT_10106a20;
  case 10:
    return &PTR_DAT_10106a80;
  case 0xb:
    return &PTR_DAT_10106a50;
  case 0xc:
    return &PTR_DAT_10106c58;
  case 0xd:
  case 0x29:
    return &PTR_DAT_101067b8;
  case 0xe:
    return &PTR_DAT_10106d40;
  case 0x11:
    return &PTR_DAT_10106ce0;
  case 0x12:
    return &PTR_DAT_10107060;
  case 0x13:
    return &PTR_DAT_10107008;
  case 0x14:
    return &PTR_DAT_10106fc0;
  case 0x15:
    return &PTR_DAT_10106f78;
  case 0x16:
    return &PTR_DAT_10106b90;
  case 0x17:
    return &PTR_DAT_10106bc0;
  case 0x18:
    return &PTR_DAT_10106b30;
  case 0x19:
    return &PTR_DAT_10106b60;
  case 0x1a:
    return &PTR_DAT_10106bf0;
  case 0x1b:
    return &PTR_DAT_10106c20;
  case 0x1c:
    return &PTR_DAT_10106ab0;
  case 0x1d:
    return &PTR_DAT_10106ad8;
  case 0x1e:
    return &PTR_DAT_10106b00;
  case 0x20:
    return &PTR_DAT_10106858;
  case 0x21:
    return &PTR_DAT_10106d10;
  case 0x22:
    return &PTR_DAT_10106800;
  case 0x26:
    return &PTR_DAT_10106d78;
  case 0x27:
    return &PTR_DAT_10106db0;
  case 0x28:
    if (*(int *)((int)this + 0x2fc) == 0) {
      (*DAT_10121efc)(2,s_Script_failed_for__s_10101d28,
                      **(int **)((int)this + 4) + *(int *)(DAT_10122044 + 0x98));
      FUN_10090540(this);
      ppuVar1 = (undefined **)(**(code **)(*(int *)this + 0x184))(1);
      return ppuVar1;
    }
    switch(*(undefined4 *)(*(int *)((int)this + 0x2fc) + 0x324)) {
    case 0:
      return &PTR_DAT_10106f08;
    case 1:
      return &PTR_DAT_10106e70;
    case 2:
      return &PTR_DAT_10106ed0;
    default:
      return (undefined **)0x0;
    case 4:
    case 6:
      return &PTR_DAT_10106e10;
    case 5:
      return &PTR_DAT_10106f50;
    }
  }
  return &PTR_DAT_101067e8;
}

