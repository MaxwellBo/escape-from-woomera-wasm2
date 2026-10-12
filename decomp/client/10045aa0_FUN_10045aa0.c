
undefined1 * __thiscall FUN_10045aa0(void *this,undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_95;
  char *local_94;
  undefined1 local_90 [4];
  int local_8c;
  int local_88;
  uint local_84;
  undefined1 local_80 [4];
  char *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_70;
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100583c3;
  local_c = ExceptionList;
  local_90[0] = local_95;
  ExceptionList = &local_c;
  local_70 = this;
  FUN_100424b0(local_90,'\0');
  local_4 = 0;
  if (local_84 < *(uint *)(param_2 + 8)) {
    FUN_100429c0(local_90,*(uint *)(param_2 + 8),'\0');
  }
  local_94 = *(char **)(param_2 + 4);
LAB_10045b08:
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = (char *)(*(int *)(param_2 + 8) + iVar2);
  }
  if (local_94 == pcVar3) {
LAB_10045e5f:
    *param_1 = local_90[0];
    FUN_100424b0(param_1,'\0');
    FUN_100422b0(param_1,local_90,0,DAT_10064d2c);
    if (local_8c != 0) {
      cVar1 = *(char *)(local_8c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_10049a73((undefined *)(local_8c + -1));
      }
      else {
        *(char *)(local_8c + -1) = cVar1 + -1;
      }
    }
    ExceptionList = local_c;
    return param_1;
  }
  cVar1 = *local_94;
  if (cVar1 != '%') {
    if (DAT_10064d2c - local_88 < 2) {
      FUN_10057251();
    }
    uVar7 = local_88 + 1;
    uVar5 = FUN_100429c0(local_90,uVar7,'\0');
    if ((char)uVar5 != '\0') {
      *(char *)(local_88 + local_8c) = cVar1;
      FUN_100429a0(local_90,uVar7);
    }
    local_94 = local_94 + 1;
    goto LAB_10045b08;
  }
  pcVar3 = local_94 + 1;
  if (iVar2 == 0) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = (char *)(*(int *)(param_2 + 8) + iVar2);
  }
  if (pcVar3 == pcVar4) goto LAB_10045e5f;
  switch(*pcVar3) {
  case 'C':
    pcVar4 = (char *)(*(int *)((int)this + 0x10) + 4);
    FUN_100424b0(local_6c,'\0');
    uVar7 = 0xffffffff;
    pcVar3 = pcVar4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_10042900(local_6c,(undefined4 *)pcVar4,~uVar7 - 1);
    local_4._0_1_ = 1;
    puVar6 = FUN_10041fb0(local_5c,local_6c);
    local_4._0_1_ = 2;
    FUN_10046c80(local_90,(int)puVar6,0,DAT_10064d2c);
    local_4._0_1_ = 1;
    FUN_100424b0(local_5c,'\x01');
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_100424b0(local_6c,'\x01');
    local_94 = local_94 + 2;
    goto LAB_10045b08;
  default:
    FUN_100424b0(local_80,'\0');
    uVar7 = 0xffffffff;
    pcVar4 = s_Recognised_format_string_instruc_1007ae90;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar5 = FUN_100429c0(local_80,uVar7,'\x01');
    if ((char)uVar5 != '\0') {
      pcVar4 = s_Recognised_format_string_instruc_1007ae90;
      pcVar9 = local_7c;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_100429a0(local_80,uVar7);
    }
    local_4._0_1_ = 3;
    puVar6 = FUN_10047350(local_4c,local_80,*pcVar3);
    local_4._0_1_ = 4;
    puVar6 = FUN_10047460(local_3c,puVar6,&DAT_1007ae8c);
    local_4._0_1_ = 5;
    FUN_10046c80(local_90,(int)puVar6,0,DAT_10064d2c);
    local_4._0_1_ = 4;
    FUN_100424b0(local_3c,'\x01');
    local_4._0_1_ = 3;
    FUN_100424b0(local_4c,'\x01');
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_7c != (char *)0x0) {
      cVar1 = local_7c[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_10049a73(local_7c + -1);
      }
      else {
        local_7c[-1] = cVar1 + -1;
      }
    }
    local_94 = local_94 + 2;
    local_7c = (char *)0x0;
    local_78 = 0;
    local_74 = 0;
    this = local_70;
    goto LAB_10045b08;
  case 'c':
    pcVar3 = (char *)(*(int *)((int)this + 0x10) + 4);
    break;
  case 'd':
    FUN_10056886(*(uint *)((int)this + 0x14),local_2c,10);
    uVar7 = 0xffffffff;
    pcVar3 = local_2c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_10046d60(local_90,(undefined4 *)local_2c,~uVar7 - 1);
    local_94 = local_94 + 2;
    goto LAB_10045b08;
  case 'i':
    if (-1 < *(int *)((int)this + 0x14)) {
      pcVar3 = (char *)FUN_100440b0(*(int *)((int)this + 0x14));
      break;
    }
LAB_10045c49:
    uVar7 = 0xffffffff;
    pcVar3 = s_<<error>>_1007aeb8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_10046d60(local_90,(undefined4 *)s_<<error>>_1007aeb8,~uVar7 - 1);
    local_94 = local_94 + 2;
    goto LAB_10045b08;
  case 'u':
    if (*(int *)((int)this + 0x14) < 0) goto LAB_10045c49;
    pcVar3 = (char *)FUN_100440a0(*(int *)((int)this + 0x14));
  }
  uVar7 = 0xffffffff;
  pcVar4 = pcVar3;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_10046d60(local_90,(undefined4 *)pcVar3,~uVar7 - 1);
  local_94 = local_94 + 2;
  goto LAB_10045b08;
}

