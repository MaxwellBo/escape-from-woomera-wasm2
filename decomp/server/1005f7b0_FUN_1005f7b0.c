
void __fastcall FUN_1005f7b0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_10121db8 + 0xe8))();
  if (iVar2 == 0) {
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x40000000;
    return;
  }
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  *(undefined4 *)(param_1[1] + 0xac) = *(undefined4 *)(param_1[1] + 0x54);
  *(undefined4 *)(param_1[1] + 0x1b0) = *(undefined4 *)(param_1[1] + 0x160);
  *(undefined4 *)(param_1[1] + 0x170) = 0;
  param_1[0x77] = 1;
  param_1[0x74] = 1;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  if ((*(byte *)(param_1[1] + 0x1a0) & 4) != 0) {
    puVar1 = (uint *)(param_1[1] + 0x1a4);
    *puVar1 = *puVar1 | 0x800000;
  }
  FUN_10004e30((int)param_1);
  FUN_1005d290((int)param_1);
  FUN_10008390((int)param_1);
  param_1[0xa7] = -1;
  param_1[0xa8] = 0;
  FUN_10019420(param_1 + 0x58,0);
  param_1[0xb7] = 0x44800000;
  param_1[0xb8] = 0x45000000;
  FUN_10060570((int)param_1);
  param_1[0x1d] = (int)CBaseMonster::MonsterInitThink;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  param_1[0x1f] = (int)CBaseMonster::MonsterUse;
  return;
}

