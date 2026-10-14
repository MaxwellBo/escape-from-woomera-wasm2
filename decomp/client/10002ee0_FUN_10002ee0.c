
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10002ee0(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  char *pcVar7;
  
  iVar1 = param_1 + 0x14;
  (**(code **)(DAT_100a513c + 0x20))(iVar1);
  iVar4 = (*DAT_100a5100)(0,0x7fff);
  if (0x3ffe < iVar4) goto switchD_10002f1f_default;
  switch(iVar4 % 5) {
  case 0:
    (**(code **)(DAT_100a5140 + 4))
              (0xffffffff,iVar1,0,s_weapons_ric1_wav_10076728,0x3f800000,0x3f4ccccd,0,100);
    break;
  case 1:
    pcVar7 = s_weapons_ric2_wav_10076714;
    goto LAB_10002fb7;
  case 2:
    (**(code **)(DAT_100a5140 + 4))
              (0xffffffff,iVar1,0,s_weapons_ric3_wav_10076700,0x3f800000,0x3f4ccccd,0,100);
    break;
  case 3:
    (**(code **)(DAT_100a5140 + 4))
              (0xffffffff,iVar1,0,s_weapons_ric4_wav_100766ec,0x3f800000,0x3f4ccccd,0,100);
    break;
  case 4:
    pcVar7 = s_weapons_ric5_wav_100766d8;
LAB_10002fb7:
    (**(code **)(DAT_100a5140 + 4))(0xffffffff,iVar1,0,pcVar7,0x3f800000,0x3f4ccccd,0,100);
  }
switchD_10002f1f_default:
  iVar4 = (**(code **)(DAT_100a5140 + 0x24))(*(undefined4 *)(param_1 + 0x30));
  if ((((param_2 != (char *)0x0) && (*param_2 != '\0')) && (iVar4 != 0)) &&
     (((*(int *)(iVar4 + 0x60) == 4 || (*(int *)(iVar4 + 0x7c) == 0xd)) &&
      (fVar6 = (float10)(*DAT_100a502c)(s_r_decals_100766cc), fVar6 != (float10)_DAT_10059a18)))) {
    puVar2 = (undefined4 *)(DAT_100a513c + 0xd4);
    puVar3 = (undefined4 *)(DAT_100a513c + 0xcc);
    uVar5 = (**(code **)(DAT_100a5140 + 0x20))(param_1,0,iVar1,0);
    uVar5 = (**(code **)(DAT_100a513c + 0xd0))(param_2,uVar5);
    uVar5 = (*(code *)*puVar3)(uVar5);
    (*(code *)*puVar2)(uVar5);
  }
  return;
}

