
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSpeaker::SpeakerThink(void) */

void __thiscall CSpeaker::SpeakerThink(CSpeaker *this)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  float10 fVar5;
  
                    /* 0x95730  212  ?SpeakerThink@CSpeaker@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  pbVar2 = (byte *)(*(float *)(iVar1 + 0x160) * (float)_DAT_100dfb80);
  if (*DAT_10122044 <= _DAT_10131064) {
    iVar1 = *(int *)this;
    fVar5 = (float10)(*DAT_10121f74)(0x40a00000,0x41200000);
    (**(code **)(iVar1 + 0x10))((float)(fVar5 + (float10)_DAT_10131064));
    return;
  }
  if (*(int *)(this + 0xb8) == 0) {
    pbVar4 = (byte *)(*(int *)(iVar1 + 0x1d4) + (int)DAT_10122044[0x26]);
  }
  else {
    pbVar4 = pbVar2;
    switch(*(int *)(this + 0xb8)) {
    case 1:
      pbVar4 = (byte *)s_C1A0__1011718c;
      break;
    case 2:
      pbVar4 = (byte *)s_C1A1__10117184;
      break;
    case 3:
      pbVar4 = (byte *)s_C1A2__1011717c;
      break;
    case 4:
      pbVar4 = (byte *)s_C1A3__10117174;
      break;
    case 5:
      pbVar4 = (byte *)s_C1A4__1011716c;
      break;
    case 6:
      pbVar4 = (byte *)s_C2A1__10117164;
      break;
    case 7:
      pbVar4 = (byte *)s_C2A2__1011715c;
      break;
    case 8:
      pbVar4 = (byte *)s_C2A3__10117154;
      break;
    case 9:
      pbVar4 = (byte *)s_C2A4__1011714c;
      break;
    case 10:
      pbVar4 = (byte *)s_C2A5__10117144;
      break;
    case 0xb:
      pbVar4 = (byte *)s_C3A1__1011713c;
      break;
    case 0xc:
      pbVar4 = (byte *)s_C3A2__10117134;
    }
  }
  if (*pbVar4 != 0x21) {
    uVar3 = FUN_100945d0(*(undefined4 *)(iVar1 + 0x208),pbVar4);
    if ((int)uVar3 < 0) {
      (*DAT_10121efc)(1,s_Level_Design_Error__SPEAKER_has_b_101170f4,pbVar4);
    }
    iVar1 = *(int *)this;
    fVar5 = (float10)(*DAT_10121f74)(0x41700000,0x43070000);
    (**(code **)(iVar1 + 8))((float)fVar5);
    _DAT_10131064 = *DAT_10122044 + _DAT_100dd5d8;
    return;
  }
  FUN_100af2c0(*(undefined4 *)(iVar1 + 0x208),(undefined4 *)(iVar1 + 8),(char *)pbVar4,pbVar2,
               0x3e99999a,0,100);
  FUN_10019680((int)this);
  return;
}

