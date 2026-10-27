
void __fastcall FUN_100b7230(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *this;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)((int)param_1 + 0xdc) == 1) {
    FUN_100b6750(param_1,0x1e);
    fVar4 = (float10)(*DAT_10121f74)(0x3f800000,0x3fb33333);
    *(float *)(*(int *)((int)param_1 + 4) + 0x138) = (float)fVar4;
    uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    uVar2 = (*DAT_10121f70)(0x5f,0x69);
    uVar7 = 0;
    uVar6 = 0x3f4ccccd;
    uVar5 = 0x3f800000;
    iVar3 = (*DAT_10121f70)(0,1);
    FUN_10094b20(this,uVar1,1,(&PTR_s_zombie_claw_miss1_wav_1011c12c)[iVar3],uVar5,uVar6,uVar7,uVar2
                );
  }
  return;
}

