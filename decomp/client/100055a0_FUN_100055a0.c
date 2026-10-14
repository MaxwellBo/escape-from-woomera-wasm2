
void FUN_100055a0(int param_1)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = *(undefined4 *)(param_1 + 8);
  uStack_8 = *(undefined4 *)(param_1 + 0xc);
  uStack_4 = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(DAT_100a5140 + 4))
            (*(undefined4 *)(param_1 + 4),&uStack_c,1,s_ambience_pulsemachine_wav_10076834,
             0x3f800000,0x3f4ccccd,-(*(int *)(param_1 + 0x40) != 0) & 0x80,
             *(undefined4 *)(param_1 + 0x38));
  return;
}

