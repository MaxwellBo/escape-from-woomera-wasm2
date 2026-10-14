
void __fastcall FUN_10092c10(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  lVar6 = __ftol();
  *(int *)(param_1 + 0xd0) = (int)lVar6;
  if (100 < (int)lVar6) {
    *(undefined4 *)(param_1 + 0xd0) = 100;
  }
  if (*(int *)(param_1 + 0xd0) < 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xbc);
  if ((iVar1 != 0) && (iVar1 < 0x1c)) {
    pcVar4 = s_models_p_shotgun_mdl_10116290 + iVar1 * 100 + 0x14;
    puVar5 = (undefined4 *)(param_1 + 0xbc);
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar5 = puVar5 + 1;
    }
    if (0 < *(int *)(param_1 + 0xcc)) {
      *(int *)(param_1 + 0xcc) = (0x65 - *(int *)(param_1 + 0xcc)) * 0x40;
    }
    if (0 < *(int *)(param_1 + 200)) {
      *(int *)(param_1 + 200) = (0x65 - *(int *)(param_1 + 200)) * 0x40;
    }
    *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) * 10;
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) * 10;
    if (0 < *(int *)(param_1 + 0xd8)) {
      *(int *)(param_1 + 0xd8) = (0x65 - *(int *)(param_1 + 0xd8)) * 0x40;
    }
    if (0 < *(int *)(param_1 + 0xdc)) {
      *(int *)(param_1 + 0xdc) = (0x65 - *(int *)(param_1 + 0xdc)) * 0x40;
    }
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) << 8;
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xcc);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0x10c);
  if (*(int *)(param_1 + 0x10c) == 0) {
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xd0);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xd4);
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xc0);
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xc4);
  }
  if (*(int *)(param_1 + 0xf8) == 0) {
    *(undefined4 *)(param_1 + 0xf8) = 100;
  }
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x108) << 8;
  *(undefined4 *)(param_1 + 0x118) = 0;
  uVar3 = (int)*(uint *)(param_1 + 0xe4) >> 0x1f;
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0xf8) << 8;
  *(uint *)(param_1 + 0xe4) = (*(uint *)(param_1 + 0xe4) ^ uVar3) - uVar3;
  *(undefined4 *)(param_1 + 0xf4) = 1;
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (iVar2 = (0xff - *(int *)(param_1 + 0xc4)) / *(int *)(param_1 + 0xf0) +
              *(int *)(param_1 + 0xc4), *(int *)(param_1 + 0xc0) = iVar2, 0xff < iVar2)) {
    *(undefined4 *)(param_1 + 0xc0) = 0xff;
  }
  if ((((iVar1 != 0) || (*(int *)(param_1 + 0x100) != 0)) ||
      ((*(int *)(param_1 + 0xe0) != 0 && (*(int *)(param_1 + 0xe8) != 0)))) &&
     (*(int *)(param_1 + 0xf8) == 100)) {
    *(undefined4 *)(param_1 + 0xf8) = 0x65;
  }
  return;
}

