
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002c1b0(void *this,uint *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 *puVar5;
  size_t _Count;
  int iVar6;
  float10 fVar7;
  
  if ((DAT_100a5178 != 0) && (uVar2 = FUN_1003d4f0(DAT_100a5178), (char)uVar2 == '\0')) {
    (*DAT_100a5068)(param_1);
    return;
  }
  iVar6 = 0;
  pcVar3 = (char *)&DAT_100acc4c;
  do {
    if (*pcVar3 == '\0') break;
    pcVar3 = pcVar3 + 0x100;
    iVar6 = iVar6 + 1;
  } while ((int)pcVar3 < 0x100ad14c);
  if (iVar6 == 5) {
    FUN_1002bf90();
    iVar6 = 4;
  }
  (&DAT_100ad28c)[iVar6] = 0;
  (&DAT_100ad2a4)[iVar6] = 0;
  if (((char)*param_1 == '\x02') && (0 < param_3)) {
    (*DAT_100a5044)(param_3,&DAT_100b59f0 + param_3 * 0x14);
    pcVar3 = *(char **)(&DAT_100b59f0 + param_3 * 0x14);
    if ((pcVar3 != (char *)0x0) && (puVar4 = FUN_1004aff0(param_1,pcVar3), puVar4 != (uint *)0x0)) {
      uVar2 = 0xffffffff;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      (&DAT_100ad28c)[iVar6] = (int)puVar4 + ((~uVar2 - 1) - (int)param_1);
      puVar5 = FUN_10019060(param_3);
      (&DAT_100ad2a4)[iVar6] = puVar5;
    }
  }
  _Count = param_2 - 1;
  if ((int)_Count < 0x100) {
    _Count = 0xff;
  }
  _strncpy((char *)(&DAT_100acc4c + iVar6 * 0x40),(char *)param_1,_Count);
  FUN_1002c330(iVar6);
  if (iVar6 == 0) {
    fVar7 = (float10)(*DAT_100a502c)(s__hud_saytext_time_10079a4f + 1);
    _DAT_10079a4c = (float)fVar7;
    _DAT_100ad2bc = DAT_100a3a64 + _DAT_10079a4c;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  (*DAT_100a5048)(s_misc_talk_wav_10079a6c,0x3f800000);
  iVar6 = DAT_100a4dd0 + -0x3c;
  if (DAT_100a4dd0 < 0x1e0) {
    iVar6 = DAT_100a4dd0 + -0x2d;
  }
  DAT_100ad2c0 = iVar6 + DAT_100ad2c4 * -6;
  return;
}

