
void __thiscall FUN_100367f0(void *this,int param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  int iVar7;
  int local_c;
  int local_4;
  
  bVar1 = false;
  while( true ) {
    iVar4 = -99999;
    local_c = 99999;
    local_4 = 0;
    iVar7 = 1;
    psVar6 = &DAT_100b6020;
    piVar5 = &DAT_100b5a04;
    do {
      if (((((*(char *)((int)this + iVar7 + 0x26aa8) == '\0') && (*piVar5 != 0)) &&
           (iVar4 <= *psVar6)) && (iVar2 = (*DAT_100a50c4)(iVar7), iVar2 != 0)) &&
         (((param_2 == (byte *)0x0 ||
           (uVar3 = FUN_10056910(psVar6 + 4,(byte *)(psVar6 + 4),param_2), uVar3 == 0)) &&
          ((iVar4 < *psVar6 || (psVar6[1] < local_c)))))) {
        local_c = (int)psVar6[1];
        iVar4 = (int)*psVar6;
        local_4 = iVar7;
      }
      piVar5 = piVar5 + 5;
      iVar7 = iVar7 + 1;
      psVar6 = psVar6 + 0xc;
    } while ((int)piVar5 < 0x100b5ef0);
    if (local_4 == 0) break;
    if ((!bVar1) && (param_1 != 0)) {
      bVar1 = true;
      *(int *)((int)this + *(int *)((int)this + 0x26854) * 4 + 0x26980) = param_1;
      *(int *)((int)this + 0x26854) = *(int *)((int)this + 0x26854) + 1;
    }
    *(int *)((int)this + *(int *)((int)this + 0x26854) * 4 + 0x26858) = local_4;
    *(undefined1 *)((int)this + local_4 + 0x26aa8) = 1;
    *(int *)((int)this + 0x26854) = *(int *)((int)this + 0x26854) + 1;
  }
  if (param_2 != (byte *)0x0) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0x26854) * 4 + 0x26980) = 3;
    *(int *)((int)this + 0x26854) = *(int *)((int)this + 0x26854) + 1;
  }
  return;
}

