
void FUN_10005fe0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = *(undefined4 *)(param_1 + 8);
  uStack_8 = *(undefined4 *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  uStack_4 = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(DAT_100a5140 + 4))
            (iVar2,&uStack_c,1,s_weapons_cbar_miss1_wav_10076264,0x3f800000,0x3f4ccccd,0,100);
  bVar1 = FUN_1001a780(iVar2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(DAT_100a5140 + 0x40))(4,1);
    iVar2 = DAT_1007eeac % 3;
    DAT_1007eeac = DAT_1007eeac + 1;
    if (iVar2 == 0) {
      (**(code **)(DAT_100a5140 + 0x40))(4,1);
    }
    else {
      if (iVar2 == 1) {
        (**(code **)(DAT_100a5140 + 0x40))(5,1);
        return;
      }
      if (iVar2 == 2) {
        (**(code **)(DAT_100a5140 + 0x40))(7,1);
        return;
      }
    }
  }
  return;
}

