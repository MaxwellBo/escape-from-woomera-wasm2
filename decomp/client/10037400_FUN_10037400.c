
void __fastcall FUN_10037400(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char acStack_900 [256];
  undefined1 auStack_800 [1024];
  undefined1 auStack_400 [1024];
  
  if (DAT_100a4fe4 == 0) {
    puVar3 = FUN_10012170();
    cVar1 = FUN_100133d0((int)puVar3);
    if (cVar1 == '\0') {
      puVar3 = FUN_10012170();
      FUN_10013390((int)puVar3);
      (**(code **)(*(int *)(param_1 + 0x266d0) + 0x24))(0);
      return;
    }
    if ((((-1 < *(int *)(param_1 + 0x8fc)) &&
         (iVar7 = *(int *)(param_1 + 0x2679c + *(int *)(param_1 + 0x8fc) * 4), 0 < iVar7)) &&
        ((undefined4 *)(&DAT_100b59f0 + iVar7 * 0x14) != (undefined4 *)0x0)) &&
       ((pcVar6 = *(char **)(&DAT_100b59f0 + iVar7 * 0x14), pcVar6 != (char *)0x0 &&
        (*pcVar6 != '\0')))) {
      iVar8 = iVar7;
      puVar3 = FUN_10012170();
      bVar2 = FUN_100137a0(puVar3,iVar8);
      if (bVar2) {
        puVar3 = FUN_10012170();
        FUN_10013810(puVar3,iVar7);
        pbVar4 = FUN_10030c20(s__Unmuted_10079fcc);
        FUN_100499f0(auStack_800,pbVar4);
        FUN_100499f0(acStack_900,(byte *)s__c____s_10079fc0);
      }
      else {
        puVar3 = FUN_10012170();
        FUN_10013810(puVar3,iVar7);
        pbVar4 = FUN_10030c20(s__Muted_10079fb8);
        FUN_100499f0(auStack_400,pbVar4);
        pbVar4 = FUN_10030c20(s__No_longer_hear_that_player_10079f9c);
        FUN_100499f0(auStack_800,pbVar4);
        FUN_100499f0(acStack_900,(byte *)s__c____s__s_10079f90);
      }
      uVar5 = 0xffffffff;
      pcVar6 = acStack_900;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_10030ce0(0,~uVar5,acStack_900);
    }
  }
  return;
}

