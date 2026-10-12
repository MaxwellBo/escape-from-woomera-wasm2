
void FUN_10042140(void)

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
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  uint auStack_7c [2];
  undefined1 auStack_74 [4];
  char *pcStack_70;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [32];
  undefined4 auStack_34 [2];
  undefined1 auStack_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_10058182;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_100424b0(auStack_9c,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_efw_compound_gate_guard_10077178;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_10042900(auStack_9c,(undefined4 *)s_efw_compound_gate_guard_10077178,~uVar5 - 1);
  iStack_4 = 0;
  FUN_100424b0(auStack_8c,'\0');
  iStack_4._0_1_ = 1;
  piVar3 = (int *)FUN_100426c0(auStack_54,auStack_9c,auStack_8c);
  iStack_4._0_1_ = 2;
  piVar3 = (int *)FUN_10042500(&DAT_100baee8,auStack_7c,piVar3);
  iVar2 = *piVar3;
  iStack_4._0_1_ = 1;
  FUN_10042240((int)auStack_54);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_100424b0(auStack_8c,'\x01');
  uVar5 = 0xffffffff;
  pcVar7 = s_Gate_Guard_1007ab50;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_10042900((void *)(iVar2 + 0x1c),(undefined4 *)s_Gate_Guard_1007ab50,~uVar5 - 1);
  iStack_4 = 0xffffffff;
  FUN_100424b0(auStack_9c,'\x01');
  FUN_100424b0(auStack_9c,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_efw_electrician_10076e4c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_10042900(auStack_9c,(undefined4 *)s_efw_electrician_10076e4c,~uVar5 - 1);
  iStack_4 = 3;
  FUN_100424b0(auStack_8c,'\0');
  iStack_4._0_1_ = 4;
  piVar3 = (int *)FUN_100426c0(auStack_54,auStack_9c,auStack_8c);
  iStack_4._0_1_ = 5;
  piVar3 = (int *)FUN_10042500(&DAT_100baee8,auStack_7c,piVar3);
  iVar2 = *piVar3;
  iStack_4._0_1_ = 4;
  FUN_10042240((int)auStack_54);
  iStack_4 = CONCAT31(iStack_4._1_3_,3);
  FUN_100424b0(auStack_8c,'\x01');
  uVar5 = 0xffffffff;
  pcVar7 = s_Electrician_1007ab44;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_10042900((void *)(iVar2 + 0x1c),(undefined4 *)s_Electrician_1007ab44,~uVar5 - 1);
  iStack_4 = 0xffffffff;
  FUN_100424b0(auStack_9c,'\x01');
  FUN_100424b0(auStack_9c,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_detainee_1007ab38;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_10042900(auStack_9c,(undefined4 *)s_detainee_1007ab38,~uVar5 - 1);
  iStack_4 = 6;
  FUN_100424b0(auStack_8c,'\0');
  iStack_4._0_1_ = 7;
  piVar3 = (int *)FUN_100426c0(auStack_54,auStack_9c,auStack_8c);
  iStack_4._0_1_ = 8;
  piVar3 = (int *)FUN_10042500(&DAT_100baee8,auStack_7c,piVar3);
  iVar2 = *piVar3;
  iStack_4._0_1_ = 7;
  FUN_10042240((int)auStack_54);
  iStack_4 = CONCAT31(iStack_4._1_3_,6);
  FUN_100424b0(auStack_8c,'\x01');
  uVar5 = 0xffffffff;
  pcVar7 = s_Detainee_1007ab2c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_10042900((void *)(iVar2 + 0x1c),(undefined4 *)s_Detainee_1007ab2c,~uVar5 - 1);
  iStack_4 = 0xffffffff;
  FUN_100424b0(auStack_9c,'\x01');
  FUN_100424b0(auStack_74,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_detainee_queue_1007ab1c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar4 = FUN_100429c0(auStack_74,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar7 = s_detainee_queue_1007ab1c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcStack_70 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcStack_70 = pcStack_70 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcStack_70 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcStack_70 = pcStack_70 + 1;
    }
    FUN_100429a0(auStack_74,uVar5);
  }
  iStack_4 = 9;
  FUN_100424b0(auStack_64,'\0');
  iStack_4._0_1_ = 10;
  piVar3 = (int *)FUN_100426c0(auStack_2c,auStack_74,auStack_64);
  iStack_4._0_1_ = 0xb;
  piVar3 = (int *)FUN_10042500(&DAT_100baee8,auStack_34,piVar3);
  iVar2 = *piVar3;
  iStack_4._0_1_ = 10;
  FUN_10042240((int)auStack_2c);
  iStack_4 = CONCAT31(iStack_4._1_3_,9);
  FUN_100424b0(auStack_64,'\x01');
  uVar5 = 0xffffffff;
  this = (void *)(iVar2 + 0x1c);
  pcVar7 = s_Detainee_in_queue_1007ab08;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  auStack_7c[0] = uVar5;
  uVar4 = FUN_100429c0(this,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar7 = s_Detainee_in_queue_1007ab08;
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
    FUN_100429a0(this,uVar5);
  }
  iStack_4 = 0xffffffff;
  FUN_100424b0(auStack_74,'\x01');
  ExceptionList = pvStack_c;
  return;
}

