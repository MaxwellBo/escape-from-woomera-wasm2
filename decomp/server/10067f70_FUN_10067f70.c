
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10067f70(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  void *this;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  iVar5 = 0;
  puVar4 = (uint *)(param_1 + 0x5bc);
  while( true ) {
    bVar1 = FUN_10019450(puVar4);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      piVar2 = (int *)FUN_10019460(puVar4);
      iVar3 = (**(code **)(*piVar2 + 0xb8))();
      if (iVar3 == 0) {
        if (*(int *)(*(int *)(param_1 + 4) + 0x148) == 0) {
          piVar2 = (int *)FUN_10019460(puVar4);
          piVar2 = (int *)(**(code **)(*piVar2 + 0x74))();
          (**(code **)(*piVar2 + 0x210))();
        }
        FUN_10019420(puVar4,0);
      }
    }
    bVar1 = FUN_10019450(puVar4);
    if (CONCAT31(extraout_var_00,bVar1) == 0) break;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 2;
    if (2 < iVar5) {
      return;
    }
  }
  iVar3 = (*DAT_10121f70)(0,1);
  if (iVar3 == 0) {
    iVar3 = FUN_1006c400(&DAT_10122780,(float *)&stack0x00000004,2);
    if (iVar3 == -1) goto LAB_10068145;
    uStack_50 = *(undefined4 *)(DAT_1012278c + iVar3 * 0x58);
    puVar7 = (undefined4 *)(DAT_1012278c + iVar3 * 0x58);
    uStack_4c = puVar7[1];
    fStack_48 = (float)puVar7[2] + _DAT_100ddac8;
    uStack_44 = uStack_50;
    uStack_40 = uStack_4c;
    fStack_3c = fStack_48;
    FUN_100afc90(&uStack_44,&uStack_50,0,2,0,auStack_38);
    if (iStack_34 != 0) goto LAB_10068145;
    iVar3 = *(int *)(param_1 + 4);
    pcVar6 = s_monster_alien_controller_1011242c;
  }
  else {
    iVar3 = FUN_1006c400(&DAT_10122780,(float *)&stack0x00000004,5);
    if (iVar3 == -1) goto LAB_10068145;
    uStack_50 = *(undefined4 *)(DAT_1012278c + iVar3 * 0x58);
    puVar7 = (undefined4 *)(DAT_1012278c + iVar3 * 0x58);
    uStack_4c = puVar7[1];
    fStack_48 = (float)puVar7[2] + _DAT_100e8200;
    uStack_44 = uStack_50;
    uStack_40 = uStack_4c;
    fStack_3c = fStack_48;
    FUN_100afc90(&uStack_50,&uStack_44,0,1,0,auStack_38);
    if (iStack_34 != 0) goto LAB_10068145;
    iVar3 = *(int *)(param_1 + 4);
    pcVar6 = s_monster_alien_slave_1010f98c;
  }
  iVar3 = FUN_1001a1f0((int)pcVar6,puVar7,(undefined4 *)(iVar3 + 0x50),0);
  FUN_10019420((void *)(param_1 + 0x5bc + iVar5 * 8),iVar3);
LAB_10068145:
  puVar4 = (uint *)(param_1 + 0x5bc + iVar5 * 8);
  bVar1 = FUN_10019450(puVar4);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    iVar5 = FUN_10019460(puVar4);
    FUN_10094b20(this,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x208),1,
                 s_debris_beamstart7_wav_10108454,0x3f800000,0x3f4ccccd,0,100);
  }
  return;
}

