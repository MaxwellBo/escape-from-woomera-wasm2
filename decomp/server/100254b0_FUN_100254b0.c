
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100254b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (0 < *(int *)(param_1[0x37] + 0x8c)) {
    if (*(float *)(*(int *)(param_1[0x37] + 4) + 0x214) != _DAT_100dd5f8) {
      (**(code **)(*param_1 + 0x188))();
    }
    iVar2 = FUN_100b4210(param_1,5,7,4.5);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      iVar2 = (*DAT_10121f70)(0,0xf);
      iVar2 = iVar2 + 0x5d;
      uVar5 = 0;
      uVar4 = 0x3f4ccccd;
      fVar3 = (float10)(*DAT_10121f74)(0x3f733333,0x3f800000);
      FUN_10094b20(this,uVar1,3,s_weapons_xbow_reload1_wav_101065ec,(float)fVar3,uVar4,uVar5,iVar2);
    }
  }
  return;
}

