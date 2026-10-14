
void __thiscall FUN_100202c0(void *this,char param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 0x950);
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  *(undefined4 *)((int)this + 0x950) = 0;
  FUN_1003dda0(DAT_100a5178);
  iVar4 = iVar3;
  while( true ) {
    iVar4 = iVar4 + (-(uint)(param_1 != '\0') & 0xfffffffe) + 1;
    if (iVar4 < 0x41) {
      if (iVar4 < 1) {
        iVar4 = 0x40;
      }
    }
    else {
      iVar4 = 1;
    }
    piVar1 = (int *)(*DAT_100a50c4)(iVar4);
    uVar2 = FUN_10020820(piVar1);
    if ((char)uVar2 != '\0') break;
    if (iVar4 == iVar3) {
LAB_10020335:
      if (*(int *)((int)this + 0x950) == 0) {
        (*DAT_100a5090)(s_No_observer_targets__10078c18);
        return;
      }
      if (*(int *)((int)this + 0x14) != 3) {
        DAT_100b6728 = 0;
        DAT_100b672c = *(int *)((int)this + 0x950);
      }
      (*DAT_100a5090)(s_Now_Tracking__s_10078c30,
                      *(undefined4 *)(&DAT_100b59f0 + *(int *)((int)this + 0x950) * 0x14));
      return;
    }
  }
  *(int *)((int)this + 0x950) = iVar4;
  goto LAB_10020335;
}

