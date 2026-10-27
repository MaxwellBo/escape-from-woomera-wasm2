
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000e2c0(int *param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  int iVar8;
  
  if (param_1[0x2b] == 0) {
    FUN_1000e410(param_1);
  }
  else if (param_1[0x2b] == 1) {
    (**(code **)(*param_1 + 0x17c))(3,1,0);
    iVar8 = *(int *)(*(int *)(param_1[0x37] + 4) + 0x208);
    piVar2 = (int *)HUD_GetUserEntity();
    do {
      if (piVar2 == (int *)0x0) {
        param_1[0x2b] = 2;
        fVar7 = FUN_10018f40();
        param_1[0x3e] = (int)(float)(fVar7 + (float10)_DAT_100599f0);
        fVar7 = FUN_10018f40();
        param_1[0x3f] = (int)(float)(fVar7 + (float10)_DAT_100599f0);
        fVar7 = FUN_10018f40();
        param_1[0x40] = (int)(float)(fVar7 + (float10)_DAT_100599f0);
        return;
      }
      pcVar5 = s_monster_satchel_1007767c;
      pbVar3 = (byte *)(*(int *)(DAT_1007f7f8 + 0x98) + *(int *)piVar2[1]);
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1000e357:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1000e35c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1000e357;
        pbVar3 = pbVar3 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_1000e35c:
      if ((iVar4 == 0) && (((int *)piVar2[1])[0x66] == iVar8)) {
        (**(code **)(*piVar2 + 0xe4))(param_1[0x37],param_1[0x37],1,0);
        param_1[0x2b] = 2;
      }
      piVar2 = (int *)HUD_GetUserEntity();
    } while( true );
  }
  return;
}

