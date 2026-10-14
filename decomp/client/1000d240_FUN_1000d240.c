
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000d240(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 auStack_c [3];
  
  (**(code **)(*param_1 + 0x178))();
  FUN_10009030(auStack_c);
  if ((float)param_1[0x48] != _DAT_10059a18) {
    fVar5 = FUN_10018f40();
    if ((float10)(float)param_1[0x48] <= fVar5) {
      fVar5 = (float10)(*DAT_1007f03c)(0x3f4ccccd,0x3f666666);
      CBasePlayerItem::AttemptToMaterialize((CBasePlayerItem *)(float)fVar5);
      param_1[0x48] = 0;
    }
  }
  fVar5 = FUN_10018f40();
  if ((float10)(float)param_1[0x40] <= fVar5) {
    fVar5 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
    if ((float10)_DAT_100599f0 < fVar5) {
      if ((float10)_DAT_1005d770 < fVar5) {
        if ((float10)_DAT_1005d768 < fVar5) {
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
      uVar4 = 0;
      param_1[0x40] = 0x40155555;
    }
    bVar2 = FUN_1000a1d0();
    iVar1 = *param_1;
    iVar3 = (**(code **)(iVar1 + 0x19c))(bVar2);
    (**(code **)(iVar1 + 0x17c))(uVar4,iVar3 != 0);
  }
  return;
}

