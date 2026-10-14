
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10031a50(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int iStack_78;
  int iStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  undefined4 auStack_24 [9];
  
  iStack_78 = 0;
  iStack_74 = 0;
  iVar1 = param_1[1];
  if (_DAT_100dd5f8 < *(float *)(iVar1 + 0x164)) {
    do {
      if (*(float *)(iVar1 + 0x164) * _DAT_100ddad4 <= (float)iStack_78) break;
      fVar3 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
      fVar4 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
      fVar5 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
      fStack_60 = (float)fVar5;
      fStack_68 = (float)fVar3;
      fStack_64 = (float)fVar4;
      fVar3 = FUN_1000a9b0(&fStack_68);
      if (fVar3 == (float10)_DAT_100dd5f8) {
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0x3f800000;
      }
      else {
        fVar3 = (float10)_DAT_100dd618 / fVar3;
        FUN_10001d60(&uStack_5c,(float)(fVar3 * (float10)fStack_68),
                     (float)((float10)fStack_64 * fVar3),(float)((float10)fStack_60 * fVar3));
      }
      FUN_10002280(&uStack_5c,&fStack_50,*(float *)(param_1[1] + 0x160));
      iVar1 = param_1[1];
      fStack_3c = fStack_48 + *(float *)(iVar1 + 0x10);
      fStack_40 = fStack_4c + *(float *)(iVar1 + 0xc);
      fStack_44 = fStack_50 + *(float *)(iVar1 + 8);
      FUN_100afc60((float *)(iVar1 + 8),&fStack_44,1,0,auStack_38);
      if (fStack_28 != (float)_DAT_100dd628) {
        iStack_74 = iStack_74 + 1;
        piVar2 = FUN_100295c0(0x10102c0c,200);
        FUN_10029700(piVar2,(undefined4 *)(param_1[1] + 8),auStack_24);
        *(undefined4 *)(piVar2[1] + 0x150) = 0x43450000;
        *(undefined4 *)(piVar2[1] + 0x154) = 0x43730000;
        *(undefined4 *)(piVar2[1] + 0x158) = 0x43290000;
        *(undefined4 *)(piVar2[1] + 0x114) = 0x41;
        *(undefined4 *)(piVar2[1] + 0x14c) = 0x43160000;
        *(undefined4 *)(piVar2[1] + 0x144) = 0x41900000;
        *(undefined4 *)(piVar2[1] + 0x134) = 0x420c0000;
        piVar2[0x1d] = (int)CBaseEntity::SUB_Remove;
        (**(code **)(*piVar2 + 8))(0x3f800000);
      }
      iStack_78 = iStack_78 + 1;
      iVar1 = param_1[1];
    } while ((float)iStack_74 < *(float *)(iVar1 + 0x164));
  }
  FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),4,
               s_debris_beamstart2_wav_1010846c,0x3f800000,0x3f4ccccd,0,100);
  piVar2 = FUN_1002ca80(0x10108498,(undefined4 *)(param_1[1] + 8),1);
  piVar2[0x1d] = (int)CSprite::AnimateUntilDead;
  *(undefined4 *)(piVar2[1] + 0x138) = 0x41200000;
  *(float *)(piVar2[1] + 0x1e4) = (float)piVar2[0x2f] * _DAT_100dd610 + *DAT_10122044;
  (**(code **)(*piVar2 + 8))(0);
  *(undefined4 *)(piVar2[1] + 0x148) = 3;
  *(undefined4 *)(piVar2[1] + 0x150) = 0x429a0000;
  *(undefined4 *)(piVar2[1] + 0x154) = 0x43520000;
  *(undefined4 *)(piVar2[1] + 0x158) = 0x43020000;
  *(undefined4 *)(piVar2[1] + 0x14c) = 0x437f0000;
  *(undefined4 *)(piVar2[1] + 0x15c) = 0xe;
  piVar2 = FUN_1002ca80(0x10108484,(undefined4 *)(param_1[1] + 8),1);
  piVar2[0x1d] = (int)CSprite::AnimateUntilDead;
  *(undefined4 *)(piVar2[1] + 0x138) = 0x41200000;
  *(float *)(piVar2[1] + 0x1e4) = (float)piVar2[0x2f] * _DAT_100dd610 + *DAT_10122044;
  (**(code **)(*piVar2 + 8))(0);
  *(undefined4 *)(piVar2[1] + 0x148) = 3;
  *(undefined4 *)(piVar2[1] + 0x150) = 0x43380000;
  *(undefined4 *)(piVar2[1] + 0x154) = 0x437a0000;
  *(undefined4 *)(piVar2[1] + 0x158) = 0x43560000;
  *(undefined4 *)(piVar2[1] + 0x14c) = 0x437f0000;
  *(undefined4 *)(piVar2[1] + 0x15c) = 0xe;
  (**(code **)(*param_1 + 8))(0x3f000000);
  return;
}

