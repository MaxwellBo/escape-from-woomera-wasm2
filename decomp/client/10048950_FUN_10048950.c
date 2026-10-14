
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10048950(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  
  (*DAT_100a503c)(s_efw_pause_0_1007ba48);
  (**(code **)(*param_1 + 0x24))(0);
  param_1[0x33] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*DAT_100a5178 + 0x4c))(param_1);
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar3 - 1;
  uVar3 = FUN_10042fe0();
  if (uVar3 < uVar4) {
    FUN_10057251();
  }
  if (((DAT_100baf04 == (char *)0x0) || (cVar1 = DAT_100baf04[-1], cVar1 == '\0')) || (cVar1 == -1))
  {
    if (uVar4 == 0) {
      FUN_100424b0(&DAT_100baf00,'\x01');
      goto LAB_10048a40;
    }
    if ((0x1f < DAT_100baf0c) || (DAT_100baf0c < uVar4)) {
      FUN_100424b0(&DAT_100baf00,'\x01');
      goto LAB_10048a08;
    }
  }
  else {
    if (uVar4 == 0) {
      DAT_100baf04[-1] = cVar1 + -1;
      FUN_100424b0(&DAT_100baf00,'\0');
      goto LAB_10048a40;
    }
LAB_10048a08:
    FUN_10042ff0(uVar4);
  }
  pcVar5 = s_;
  pcVar6 = DAT_100baf04;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  DAT_100baf08 = uVar4;
  DAT_100baf04[uVar4] = '\0';
LAB_10048a40:
  fVar7 = FUN_10044870();
  _DAT_100bc9f4 = (float)fVar7;
  puVar2 = (undefined4 *)param_1[0x36];
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = &DAT_10064d30;
  }
  (*DAT_100a503c)(puVar2);
  return;
}

