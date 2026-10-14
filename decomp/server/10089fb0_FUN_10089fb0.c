
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10089fb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 auStack_c [3];
  
  (**(code **)(*param_1 + 0x178))();
  FUN_10081540((void *)param_1[0x37],auStack_c);
  uVar4 = 0;
  if ((float)param_1[0x48] != _DAT_100dd5f8) {
    fVar5 = FUN_100ae400();
    if ((float10)(float)param_1[0x48] <= fVar5) {
      uVar2 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      fVar5 = (float10)(*DAT_10121f74)(0x3f4ccccd,0x3f666666);
      FUN_10094b20((void *)(float)fVar5,uVar2,1,s_weapons_357_reload1_wav_101153b0,
                   (void *)(float)fVar5,0x3f4ccccd,0,100);
      param_1[0x48] = 0;
    }
  }
  fVar5 = FUN_100ae400();
  if ((float10)(float)param_1[0x40] <= fVar5) {
    fVar5 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
    if ((float10)_DAT_100dd648 < fVar5) {
      if ((float10)_DAT_100df298 < fVar5) {
        if ((float10)_DAT_100ea5c8 < fVar5) {
          uVar4 = 1;
          param_1[0x40] = 0x40b55555;
        }
        else {
          uVar4 = 7;
          param_1[0x40] = 0x403bbbbc;
        }
      }
      else {
        uVar4 = 6;
        param_1[0x40] = 0x40000000;
      }
    }
    else {
      param_1[0x40] = 0x40155555;
    }
    uVar2 = (**(code **)(*DAT_10121db8 + 0x18))();
    iVar1 = *param_1;
    iVar3 = (**(code **)(iVar1 + 0x19c))(uVar2);
    (**(code **)(iVar1 + 0x17c))(uVar4,iVar3 != 0);
  }
  return;
}

