
void FUN_100b86b0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *this;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_48 [2];
  undefined1 local_40 [4];
  char *local_3c;
  undefined1 local_30 [16];
  undefined1 local_20 [32];
  
  FUN_100bacf0(local_40,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_efw_compound_gate_guard_1010318c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_100bba70(local_40,(undefined4 *)s_efw_compound_gate_guard_1010318c,~uVar5 - 1);
  FUN_100bacf0(local_30,'\0');
  piVar3 = (int *)FUN_100baf70(local_20,local_40,local_30);
  piVar3 = (int *)FUN_100badb0(&DAT_10132418,local_48,piVar3);
  iVar2 = *piVar3;
  FUN_100ba8f0((int)local_20);
  FUN_100bacf0(local_30,'\x01');
  uVar5 = 0xffffffff;
  pcVar7 = s_Gate_Guard_1011c3a8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_100bba70((void *)(iVar2 + 0x1c),(undefined4 *)s_Gate_Guard_1011c3a8,~uVar5 - 1);
  FUN_100bacf0(local_40,'\x01');
  FUN_100bacf0(local_40,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_efw_electrician_101031bc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_100bba70(local_40,(undefined4 *)s_efw_electrician_101031bc,~uVar5 - 1);
  FUN_100bacf0(local_30,'\0');
  piVar3 = (int *)FUN_100baf70(local_20,local_40,local_30);
  piVar3 = (int *)FUN_100badb0(&DAT_10132418,local_48,piVar3);
  iVar2 = *piVar3;
  FUN_100ba8f0((int)local_20);
  FUN_100bacf0(local_30,'\x01');
  uVar5 = 0xffffffff;
  pcVar7 = s_Electrician_1011c39c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_100bba70((void *)(iVar2 + 0x1c),(undefined4 *)s_Electrician_1011c39c,~uVar5 - 1);
  FUN_100bacf0(local_40,'\x01');
  FUN_100bacf0(local_40,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_detainee_1011c390;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_100bba70(local_40,(undefined4 *)s_detainee_1011c390,~uVar5 - 1);
  FUN_100bacf0(local_30,'\0');
  piVar3 = (int *)FUN_100baf70(local_20,local_40,local_30);
  piVar3 = (int *)FUN_100badb0(&DAT_10132418,local_48,piVar3);
  iVar2 = *piVar3;
  FUN_100ba8f0((int)local_20);
  FUN_100bacf0(local_30,'\x01');
  uVar5 = 0xffffffff;
  pcVar7 = s_Detainee_1011c384;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_100bba70((void *)(iVar2 + 0x1c),(undefined4 *)s_Detainee_1011c384,~uVar5 - 1);
  FUN_100bacf0(local_40,'\x01');
  FUN_100bacf0(local_40,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_detainee_queue_1011c374;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar4 = FUN_100bbb30(local_40,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar7 = s_detainee_queue_1011c374;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_3c = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      local_3c = local_3c + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_3c = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_3c = local_3c + 1;
    }
    FUN_100bbb10(local_40,uVar5);
  }
  FUN_100bacf0(local_30,'\0');
  piVar3 = (int *)FUN_100baf70(local_20,local_40,local_30);
  piVar3 = (int *)FUN_100badb0(&DAT_10132418,local_48,piVar3);
  iVar2 = *piVar3;
  FUN_100ba8f0((int)local_20);
  FUN_100bacf0(local_30,'\x01');
  uVar5 = 0xffffffff;
  this = (void *)(iVar2 + 0x1c);
  pcVar7 = s_Detainee_in_queue_1011c360;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar4 = FUN_100bbb30(this,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar7 = s_Detainee_in_queue_1011c360;
    pcVar8 = *(char **)(iVar2 + 0x20);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_100bbb10(this,uVar5);
  }
  FUN_100bacf0(local_40,'\x01');
  return;
}

