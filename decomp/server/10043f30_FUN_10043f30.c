
void FUN_10043f30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x208);
    if ((iVar3 == 0) && (iVar3 = (*DAT_10121f1c)(0), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x7c);
    }
    iVar1 = *(int *)(*(int *)(iVar3 + 4) + 0x208);
    for (piVar4 = (int *)FUN_100aec40(0,s_grenade_1010d384); piVar4 != (int *)0x0;
        piVar4 = (int *)FUN_100aec40((int)piVar4,s_grenade_1010d384)) {
      iVar2 = piVar4[1];
      if (((*(byte *)(iVar2 + 0x1a0) & 1) != 0) && (*(int *)(iVar2 + 0x198) == iVar1)) {
        if (param_2 == 0) {
          (**(code **)(*piVar4 + 0xe4))(iVar3,iVar3,1,0);
        }
        else {
          *(undefined4 *)(iVar2 + 0x198) = 0;
        }
      }
    }
  }
  return;
}

