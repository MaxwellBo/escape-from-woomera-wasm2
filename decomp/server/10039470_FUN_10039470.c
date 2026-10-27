
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10039470(int param_1)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  void *pvVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [3];
  float afStack_74 [3];
  undefined1 auStack_68 [12];
  float afStack_5c [3];
  float afStack_50 [3];
  float afStack_44 [3];
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [36];
  
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40) != 0) {
    if (*(int *)(param_1 + 0xc4) == 0) {
      piVar2 = FUN_1008b030();
      *(int **)(param_1 + 0xc4) = piVar2;
    }
    (*DAT_10121e58)(*(int *)(param_1 + 4) + 0x50,&local_8c,0,0);
    (*DAT_10121e58)(*(int *)(param_1 + 4) + 0x50,auStack_68,&fStack_a4,&fStack_b0);
    fVar1 = *(float *)(param_1 + 0x10c);
    FUN_10001d60(afStack_74,fStack_b0 * fVar1,fStack_ac * fVar1,fStack_a8 * fVar1);
    fVar1 = *(float *)(param_1 + 0x108);
    FUN_10001d60(afStack_80,fStack_a4 * fVar1,fStack_a0 * fVar1,fStack_9c * fVar1);
    pfVar8 = afStack_74;
    pfVar7 = &fStack_98;
    pfVar6 = afStack_80;
    pfVar5 = afStack_5c;
    pfVar3 = (float *)FUN_10002280(auStack_68,afStack_44,*(float *)(param_1 + 0x104));
    pvVar4 = (void *)FUN_1000b550((void *)(*(int *)(param_1 + 4) + 8),afStack_50,pfVar3);
    pvVar4 = (void *)FUN_1000b550(pvVar4,pfVar5,pfVar6);
    FUN_1000b550(pvVar4,pfVar7,pfVar8);
    fStack_a0 = fStack_88 * _DAT_100e185c;
    fStack_9c = fStack_84 * _DAT_100e185c;
    fStack_b0 = local_8c * _DAT_100e185c + fStack_98;
    fStack_ac = fStack_94 + fStack_a0;
    fStack_a8 = fStack_90 + fStack_9c;
    FUN_100afc60(&fStack_98,&fStack_b0,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),auStack_38);
    FUN_100afe10(*(int *)(param_1 + 0xc4),auStack_24);
  }
  return;
}

