
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002aa40(void)

{
  double dVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *this;
  void *this_00;
  float10 fVar6;
  char *pcVar7;
  
  if (*(int *)(DAT_100acc38 + 0xd0) != 0) {
    *(uint *)(DAT_100acc38 + 200) = *(uint *)(DAT_100acc38 + 200) | 2;
    return;
  }
  pbVar2 = (byte *)(**(code **)(DAT_100acc38 + 0x4f554))(DAT_100acc38 + 0x4f3f0,&DAT_100799fc);
  iVar3 = FUN_100499e5(this,pbVar2);
  if ((iVar3 != 1) || (*(int *)(DAT_100acc38 + 0xd4) != 5)) {
    if (*(float *)(DAT_100acc38 + 0xcc) == _DAT_10059a18) {
      if ((*(int *)(DAT_100acc38 + 0xe4) < 2) || (*(int *)(DAT_100acc38 + 0xe8) == -0x13)) {
        if (*(int *)(DAT_100acc38 + 0xe0) == -1) {
          *(uint *)(DAT_100acc38 + 200) = *(uint *)(DAT_100acc38 + 200) | 2;
          return;
        }
        if ((*(byte *)(DAT_100acc38 + 200) & 2) == 0) {
          *(undefined4 *)(DAT_100acc38 + 0xe0) = 0xffffffff;
          FUN_1002a9d0();
          if (iVar3 != 1) {
            uVar4 = 0x3f800000;
            iVar3 = FUN_100272f0(*(undefined1 *)(DAT_100acc38 + 0x1f0));
            FUN_10026a40(iVar3,uVar4);
          }
          else {
            (**(code **)(DAT_100acc38 + 0x4f5b4))
                      (4,s_player_plyrjmp8_wav_100799e8,0x3f000000,0x3f4ccccd,0,100);
          }
          pbVar2 = (byte *)(**(code **)(DAT_100acc38 + 0x4f554))
                                     (DAT_100acc38 + 0x4f3f0,&DAT_100799e4);
          iVar3 = FUN_100499e5(this_00,pbVar2);
          dVar1 = _DAT_10060278;
          if ((((*(int *)(DAT_100acc38 + 0x90) != 0) ||
               ((*(uint *)(DAT_100acc38 + 0xb8) & 0x4000) != 0)) && (iVar3 == 1)) &&
             ((((*(byte *)(DAT_100acc38 + 0x45476) & 4) != 0 &&
               (_DAT_10059a18 < *(float *)(DAT_100acc38 + 0x8c))) &&
              (fVar6 = FUN_100264c0((float *)(DAT_100acc38 + 0x5c)), dVar1 = _DAT_10060278,
              (float10)_DAT_1005fa54 < fVar6)))) {
            *(undefined4 *)(DAT_100acc38 + 0xa0) = 0xc0a00000;
            iVar3 = 0x5c;
            do {
              iVar5 = iVar3 + 4;
              *(float *)(iVar3 + DAT_100acc38) =
                   *(float *)(iVar3 + -0x48 + DAT_100acc38) * _DAT_10060290 * (float)_DAT_10060288;
              iVar3 = iVar5;
              dVar1 = _DAT_10060280;
            } while (iVar5 < 100);
          }
          *(float *)(DAT_100acc38 + 100) = SQRT((float)dVar1);
          FUN_10027a30();
          *(uint *)(DAT_100acc38 + 200) = *(uint *)(DAT_100acc38 + 200) | 2;
        }
      }
      else {
        *(undefined4 *)(DAT_100acc38 + 0xe0) = 0xffffffff;
        if (*(int *)(DAT_100acc38 + 0xe8) == -3) {
          *(undefined4 *)(DAT_100acc38 + 100) = 0x42c80000;
        }
        else if (*(int *)(DAT_100acc38 + 0xe8) == -4) {
          *(undefined4 *)(DAT_100acc38 + 100) = 0x42a00000;
        }
        else {
          *(undefined4 *)(DAT_100acc38 + 100) = 0x42480000;
        }
        if (*(float *)(DAT_100acc38 + 0xac) <= _DAT_10059a18) {
          *(undefined4 *)(DAT_100acc38 + 0xac) = 0x447a0000;
          uVar4 = (**(code **)(DAT_100acc38 + 0x4f588))(0,3);
          switch(uVar4) {
          case 0:
            pcVar7 = s_player_pl_wade1_wav_100797b4;
            break;
          case 1:
            (**(code **)(DAT_100acc38 + 0x4f5b4))
                      (4,s_player_pl_wade2_wav_100797a0,0x3f800000,0x3f4ccccd,0,100);
            return;
          case 2:
            (**(code **)(DAT_100acc38 + 0x4f5b4))
                      (4,s_player_pl_wade3_wav_1007978c,0x3f800000,0x3f4ccccd,0,100);
            return;
          case 3:
            pcVar7 = s_player_pl_wade4_wav_10079778;
            break;
          default:
            goto switchD_1002ab92_default;
          }
          (**(code **)(DAT_100acc38 + 0x4f5b4))(4,pcVar7,0x3f800000,0x3f4ccccd,0,100);
          return;
        }
      }
    }
    else {
      *(float *)(DAT_100acc38 + 0xcc) =
           *(float *)(DAT_100acc38 + 0xcc) - (float)*(byte *)(DAT_100acc38 + 0x4545a);
      if (*(float *)(DAT_100acc38 + 0xcc) < _DAT_10059a18) {
        *(undefined4 *)(DAT_100acc38 + 0xcc) = 0;
        return;
      }
    }
  }
switchD_1002ab92_default:
  return;
}

