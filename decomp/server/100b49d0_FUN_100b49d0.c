
void __thiscall FUN_100b49d0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if ((((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x200) != 0) &&
      (iVar2 = (**(code **)(*param_2 + 0xcc))(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*param_2 + 0xb8))(), iVar2 != 0)) {
    piVar5 = (int *)(param_1 + 0xd0);
    iVar2 = 0x20;
    do {
      if (*piVar5 != 0) {
        iVar4 = *param_2;
        uVar3 = FUN_100b2ad0(*piVar5);
        (**(code **)(iVar4 + 0x90))(piVar5[0x20],*(int *)(DAT_10122044 + 0x98) + *piVar5,uVar3);
        *piVar5 = 0;
        piVar5[0x20] = 0;
      }
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar5 = (int *)(param_1 + 0xb8);
    iVar2 = 6;
    do {
      iVar4 = *piVar5;
      while (iVar4 != 0) {
        piVar1 = (int *)*piVar5;
        *piVar5 = piVar1[0x38];
        iVar4 = (**(code **)(*param_2 + 0x88))(piVar1);
        if (iVar4 != 0) {
          (**(code **)(*piVar1 + 0x14c))(param_2);
        }
        iVar4 = *piVar5;
      }
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_10094b20((void *)param_2[1],*(undefined4 *)(param_2[1] + 0x208),3,
                 s_items_gunpickup2_wav_1010fab8,0x3f800000,0x3f4ccccd,0,100);
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_100b0ef0(param_1);
  }
  return;
}

