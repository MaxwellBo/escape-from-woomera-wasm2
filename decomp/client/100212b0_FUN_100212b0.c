
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100212b0(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [2];
  float fStack_94;
  float fStack_90;
  int *piStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [3];
  float afStack_48 [3];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float afStack_30 [12];
  
  fVar3 = (_DAT_1005afb0 - *(float *)(param_1 + 0x964)) * _DAT_10060158;
  local_88 = fVar3 * *(float *)(param_1 + 0x34);
  local_74 = (float)(DAT_100a3aac >> 0x10 & 0xff) * _DAT_1005fa50;
  local_78 = (float)(DAT_100a3aac >> 8 & 0xff) * _DAT_1005fa50;
  local_70 = (float)(DAT_100a3aac & 0xff) * _DAT_1005fa50;
  (**(code **)(DAT_100a5138 + 0x28))(1);
  fVar4 = local_88;
  puVar5 = (undefined4 *)(param_1 + 0x97c);
  iVar8 = 0x40;
  do {
    *puVar5 = 0xbf800000;
    puVar5 = puVar5 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  piVar9 = (int *)(param_1 + 0x150);
  fStack_90 = 1.79366e-43;
  do {
    if (*piVar9 != 0) {
      piStack_8c = piVar9;
      uVar6 = (*DAT_100a50e8)(*piVar9);
      piVar1 = (int *)piVar9[1];
      (**(code **)(DAT_100a5138 + 0x2c))(uVar6,0);
      (**(code **)(DAT_100a5138 + 4))(2);
      (*DAT_100a5050)(piVar1 + 0x2d5,&fStack_60,afStack_48,0);
      fStack_a8 = (float)piVar1[0x2d2];
      fStack_a4 = (float)piVar1[0x2d3];
      fStack_a0 = (float)piVar1[0x2d4];
      (**(code **)(DAT_100a5138 + 8))(2);
      (**(code **)(DAT_100a5138 + 0x10))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0);
      FUN_100312c0(&fStack_a8,64.0,afStack_48,afStack_9c);
      FUN_100312c0(afStack_9c,64.0,&fStack_60,afStack_9c);
      fStack_94 = fStack_94 * fVar3;
      (**(code **)(DAT_100a5138 + 0x1c))(afStack_9c);
      (**(code **)(DAT_100a5138 + 0x18))(0,0);
      FUN_100312c0(&fStack_a8,64.0,afStack_48,afStack_9c);
      FUN_100312c0(afStack_9c,-64.0,&fStack_60,afStack_9c);
      fStack_94 = fStack_94 * fVar3;
      (**(code **)(DAT_100a5138 + 0x1c))(afStack_9c);
      (**(code **)(DAT_100a5138 + 0x18))(0,0x3f800000);
      FUN_100312c0(&fStack_a8,-64.0,afStack_48,afStack_9c);
      FUN_100312c0(afStack_9c,-64.0,&fStack_60,afStack_9c);
      fStack_94 = fStack_94 * fVar3;
      (**(code **)(DAT_100a5138 + 0x1c))(afStack_9c);
      (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0x3f800000);
      FUN_100312c0(&fStack_a8,-64.0,afStack_48,afStack_9c);
      FUN_100312c0(afStack_9c,64.0,&fStack_60,afStack_9c);
      fStack_94 = fStack_94 * fVar3;
      (**(code **)(DAT_100a5138 + 0x1c))(afStack_9c);
      (**(code **)(DAT_100a5138 + 0xc))();
      if (piVar1[1] != 0) {
        fStack_a0 = fStack_a0 * fVar3;
        (**(code **)(DAT_100a5138 + 4))(5);
        uVar6 = (*DAT_100a50e8)(*(undefined4 *)(param_1 + 0xc90));
        (**(code **)(DAT_100a5138 + 0x2c))(uVar6,0);
        (**(code **)(DAT_100a5138 + 0x10))(local_74,local_78,local_70,0x3e99999a);
        (**(code **)(DAT_100a5138 + 8))(2);
        (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0);
        (**(code **)(DAT_100a5138 + 0x20))
                  (fStack_a8 + _DAT_1005acc8,fStack_a4 + _DAT_1005acc8,fStack_a0 - fVar3);
        (**(code **)(DAT_100a5138 + 0x18))(0,0);
        (**(code **)(DAT_100a5138 + 0x20))
                  (fStack_a8 - _DAT_1005acc8,fStack_a4 - _DAT_1005acc8,fStack_a0 - fVar3);
        (**(code **)(DAT_100a5138 + 0x18))(0,0x3f800000);
        (**(code **)(DAT_100a5138 + 0x20))
                  (fStack_a8 - _DAT_1005acc8,fStack_a4 - _DAT_1005acc8,fVar4);
        (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0x3f800000);
        (**(code **)(DAT_100a5138 + 0x20))
                  (fStack_a8 + _DAT_1005acc8,fStack_a4 + _DAT_1005acc8,fVar4);
        (**(code **)(DAT_100a5138 + 0xc))();
        (**(code **)(DAT_100a5138 + 8))(2);
        (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0);
        (**(code **)(DAT_100a5138 + 0x20))
                  (fStack_a8 - _DAT_1005acc8,fStack_a4 + _DAT_1005acc8,fStack_a0 - fVar3);
        (**(code **)(DAT_100a5138 + 0x18))(0,0);
        (**(code **)(DAT_100a5138 + 0x20))
                  (fStack_a8 + _DAT_1005acc8,fStack_a4 - _DAT_1005acc8,fStack_a0 - fVar3);
        (**(code **)(DAT_100a5138 + 0x18))(0,0x3f800000);
        (**(code **)(DAT_100a5138 + 0x20))
                  (fStack_a8 + _DAT_1005acc8,fStack_a4 - _DAT_1005acc8,fVar4);
        (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0x3f800000);
        (**(code **)(DAT_100a5138 + 0x20))
                  (fStack_a8 - _DAT_1005acc8,fStack_a4 + _DAT_1005acc8,fVar4);
        (**(code **)(DAT_100a5138 + 0xc))();
        fVar7 = (float)(**(code **)(DAT_100a5138 + 0x30))(&fStack_a8,&fStack_6c);
        if (fVar7 == 0.0) {
          fStack_6c = (fStack_6c + _DAT_10059eb0) * (float)DAT_100a4dcc * _DAT_10059cec;
          fStack_68 = (_DAT_10059eb0 - fStack_68) * (float)DAT_100a4dd0 * _DAT_10059cec;
          fStack_a8 = fStack_a8 + _DAT_10059cf8;
          fStack_a4 = fStack_a4 + _DAT_10059cf8;
          fStack_64 = fVar7;
          (**(code **)(DAT_100a5138 + 0x30))(&fStack_a8,&fStack_84);
          fStack_84 = (fStack_84 + _DAT_10059eb0) * (float)DAT_100a4dcc * _DAT_10059cec - fStack_6c;
          fStack_80 = (_DAT_10059eb0 - fStack_80) * (float)DAT_100a4dd0 * _DAT_10059cec - fStack_68;
          fStack_7c = -fStack_64;
          iVar2 = *piVar1;
          iVar8 = param_1 + (iVar2 + -1) * 0xc;
          *(float *)(iVar8 + 0x974) = fStack_6c;
          fVar10 = FUN_100264c0(&fStack_84);
          *(float *)(param_1 + ((iVar2 + -1) * 3 + 0x25e) * 4) =
               (float)(fVar10 + (float10)fStack_68);
          *(undefined4 *)(iVar8 + 0x97c) = 0x3f800000;
          piVar9 = piStack_8c;
        }
      }
    }
    piVar9 = piVar9 + 4;
    fStack_90 = (float)((int)fStack_90 + -1);
  } while (fStack_90 != 0.0);
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(int *)(param_1 + 0x18) == 2) || (*(int *)(param_1 + 0x14) == 4)) {
      piStack_8c = piVar9;
      FUN_10040ef0(*(int *)(param_1 + 0x950),&DAT_100b6f88,(float *)&DAT_100b6764);
    }
    piStack_8c = (int *)DAT_100b6f88;
    fStack_90 = DAT_100b6f8c;
    local_88 = DAT_100b6f90;
    uVar6 = (*DAT_100a50e8)(*(undefined4 *)(param_1 + 0xc80));
    (**(code **)(DAT_100a5138 + 4))(5);
    (**(code **)(DAT_100a5138 + 0x2c))(uVar6,0);
    (**(code **)(DAT_100a5138 + 0x10))(local_74,local_78,local_70,0x3f800000);
    (*DAT_100a5050)(&DAT_100b6764,afStack_54,0,0);
    FUN_10031290(afStack_54,512.0,afStack_54);
    fStack_84 = 0.0;
    fStack_80 = 45.0;
    fStack_7c = 0.0;
    FUN_1002cdb0(&fStack_84,afStack_30);
    FUN_1002cec0(afStack_54,afStack_30,&fStack_60);
    fStack_80 = -45.0;
    FUN_1002cdb0(&fStack_84,afStack_30);
    FUN_1002cec0(afStack_54,afStack_30,&fStack_3c);
    (**(code **)(DAT_100a5138 + 8))(0);
    (**(code **)(DAT_100a5138 + 0x18))(0,0);
    (**(code **)(DAT_100a5138 + 0x20))
              (fStack_60 + (float)piStack_8c,fStack_5c + fStack_90,(fStack_58 + local_88) * fVar3);
    (**(code **)(DAT_100a5138 + 0x18))(0,0x3f800000);
    (**(code **)(DAT_100a5138 + 0x20))(piStack_8c,fStack_90,local_88 * fVar3);
    (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0x3f800000);
    (**(code **)(DAT_100a5138 + 0x20))
              (fStack_3c + (float)piStack_8c,fStack_38 + fStack_90,(fStack_34 + local_88) * fVar3);
    (**(code **)(DAT_100a5138 + 0xc))();
  }
  return;
}

