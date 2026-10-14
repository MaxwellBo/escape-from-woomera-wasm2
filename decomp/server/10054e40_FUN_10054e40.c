
void __fastcall FUN_10054e40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  switch(*(undefined4 *)(param_1 + 0xb8)) {
  case 0x2a:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_antidote_1010fa40;
    break;
  case 0x2b:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_security_1010fa30;
    break;
  case 0x2c:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_battery_10108be0;
    break;
  case 0x2d:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_suit_1010fa24;
    break;
  default:
    goto switchD_10054e51_default;
  }
  iVar2 = FUN_1001a1f0((int)pcVar3,puVar1,puVar4,0);
  if (iVar2 == 0) {
switchD_10054e51_default:
    (*DAT_10121efc)(1,s_unable_to_create_world_item__d_1010fa04,*(undefined4 *)(param_1 + 0xb8));
  }
  else {
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1c8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c8);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1cc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1cc);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1a0) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a0);
  }
  (*DAT_10121e60)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  return;
}

