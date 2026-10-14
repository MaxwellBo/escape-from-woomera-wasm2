
void __thiscall FUN_10049100(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  param_1[0x78] = 1;
  if (*param_2 != 0x23) {
    FUN_100057f0(param_1,param_2);
    return;
  }
  uVar1 = *(undefined4 *)(param_1[1] + 0x208);
  uVar2 = (**(code **)(*param_1 + 0x230))();
  uVar5 = 0;
  uVar4 = 0x40000000;
  fVar3 = (float10)(**(code **)(*param_1 + 0x234))();
  FUN_10094b20(PTR_s_headcrab_hc_attack1_wav_1010dd20,uVar1,1,PTR_s_headcrab_hc_attack1_wav_1010dd20
               ,(float)fVar3,uVar4,uVar5,uVar2);
  param_1[0x74] = 0x1c;
  param_1[0x1e] = (int)CHeadCrab::LeapTouch;
  return;
}

