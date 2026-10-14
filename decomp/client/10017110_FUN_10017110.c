
undefined4 FUN_10017110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char local_148 [128];
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  undefined4 local_a8;
  
  FUN_10026030(param_3,param_2);
  pcVar2 = FUN_10026180();
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar7 + -uVar4;
  pcVar7 = local_148;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_c8 = FUN_10026050();
  local_c0 = FUN_10026090();
  if (local_c0 == 0xff) {
    local_c0 = 0xffffffff;
  }
  local_c4 = FUN_10026050();
  local_bc = FUN_10026090();
  if (local_bc == 0xff) {
    local_bc = 0xffffffff;
  }
  local_b8 = FUN_10026050();
  local_b4 = FUN_10026050();
  iVar3 = FUN_10026050();
  local_ac = iVar3;
  local_b0 = FUN_10026090();
  local_a8 = 0;
  pcVar2 = local_148;
  puVar8 = &DAT_100a0ea8 + iVar3 * 0x52;
  for (iVar6 = 0x52; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar8 = puVar8 + 1;
  }
  FUN_10015f40((int)(&DAT_100a0ea8 + iVar3 * 0x52));
  return 1;
}

