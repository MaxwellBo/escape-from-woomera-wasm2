
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10024840(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float fStack_1c;
  float local_c;
  float fStack_8;
  
  (*DAT_100a5078)(&local_c);
  if (DAT_100a9a68 != 1) {
    FUN_10024500();
    DAT_100a9a68 = 1;
  }
  if (((DAT_100a99f0 != 0) && (*(float *)(DAT_100a99e8 + 0xc) != _DAT_10059a18)) &&
     (iVar4 = FUN_100247e0(), iVar4 == 1)) {
    if ((DAT_100a9808 & 1) == 0) {
      fStack_1c = 1.0;
    }
    else {
      fStack_1c = *(float *)(DAT_100a980c + 0xc);
    }
    fVar2 = fStack_1c * param_1;
    iVar4 = 0;
    do {
      fVar5 = (float10)**(uint **)((int)&DAT_100a99cc + iVar4) - (float10)_DAT_100601a8;
      fVar1 = (float)fVar5;
      if ((*(float *)(DAT_100a9a24 + 0xc) != (float)_DAT_1005d2a8) &&
         (*(int *)((int)&DAT_100a99b4 + iVar4) == 4)) {
        __ftol();
        fVar5 = (float10)FUN_1004b2a0();
        fVar5 = fVar5 * (float10)_DAT_10060190;
        if ((float10)_DAT_10060188 < fVar5) {
          fVar5 = (float10)_DAT_10060180;
        }
        if (fVar1 <= (float)_DAT_1005d2a8) {
          fVar5 = -fVar5;
        }
      }
      fVar1 = (float)(fVar5 * (float10)_DAT_10060178);
      switch(*(undefined4 *)((int)&DAT_100a99b4 + iVar4)) {
      case 1:
        if ((*(float *)(DAT_100a9a50 + 0xc) == (float)_DAT_1005d2a8) && ((DAT_100a9910 & 1) != 0)) {
          fVar3 = fVar1;
          if (fVar1 <= _DAT_10059a18) {
            fVar3 = -fVar1;
          }
          if (fVar3 <= *(float *)(DAT_100a9aa4 + 0xc)) {
            if (*(float *)(DAT_100a9858 + 0xc) != (float)_DAT_1005d2a8) break;
          }
          else if ((float)_DAT_1005d2a8 <= *(float *)(DAT_100a97f8 + 0xc)) {
            local_c = fVar1 * *(float *)(DAT_100a9ac0 + 0xc) * *(float *)(DAT_100a9978 + 0xc) *
                      fVar2 + local_c;
          }
          else {
            local_c = local_c - fVar1 * *(float *)(DAT_100a9ac0 + 0xc) *
                                *(float *)(DAT_100a9978 + 0xc) * fVar2;
          }
LAB_10024c75:
          FUN_1003fdd0();
        }
        else {
          fVar3 = fVar1;
          if (fVar1 <= _DAT_10059a18) {
            fVar3 = -fVar1;
          }
          if (*(float *)(DAT_100a9a4c + 0xc) < fVar3) {
            *(float *)(param_2 + 0x10) =
                 fVar1 * *(float *)(DAT_100a9a54 + 0xc) * *(float *)(DAT_100a9840 + 0xc) * fStack_1c
                 + *(float *)(param_2 + 0x10);
          }
        }
        break;
      case 2:
        if ((DAT_100a9910 & 1) != 0) {
          fVar3 = fVar1;
          if (fVar1 <= _DAT_10059a18) {
            fVar3 = -fVar1;
          }
          if (fVar3 <= *(float *)(DAT_100a9aa4 + 0xc)) {
            if (*(float *)(DAT_100a9858 + 0xc) != (float)_DAT_1005d2a8) break;
          }
          else if (*(int *)((int)&DAT_100a999c + iVar4) == 0) {
            local_c = fVar1 * *(float *)(DAT_100a9ac0 + 0xc) * *(float *)(DAT_100a9978 + 0xc) *
                      fVar2 + local_c;
          }
          else {
            local_c = fVar1 * *(float *)(DAT_100a9ac0 + 0xc) * fStack_1c * (float)_DAT_10060168 +
                      local_c;
          }
          goto LAB_10024c75;
        }
        break;
      case 3:
        fVar3 = fVar1;
        if (fVar1 <= _DAT_10059a18) {
          fVar3 = -fVar1;
        }
        if (*(float *)(DAT_100a9a6c + 0xc) < fVar3) {
          *(float *)(param_2 + 0x14) =
               fVar1 * *(float *)(DAT_100a9a44 + 0xc) * *(float *)(DAT_100a9934 + 0xc) * fStack_1c +
               *(float *)(param_2 + 0x14);
        }
        break;
      case 4:
        if (((DAT_100a9920 & 1) == 0) &&
           ((*(float *)(DAT_100a9870 + 0xc) == _DAT_10059a18 || ((DAT_100a9910 & 1) == 0)))) {
          fVar3 = fVar1;
          if (fVar1 <= _DAT_10059a18) {
            fVar3 = -fVar1;
          }
          if (*(float *)(DAT_100a9a58 + 0xc) < fVar3) {
            if (*(int *)((int)&DAT_100a999c + iVar4) == 0) {
              fStack_8 = fVar1 * *(float *)(DAT_100a9a48 + 0xc) * *(float *)(DAT_100a986c + 0xc) *
                         fVar2 + fStack_8;
            }
            else {
              fStack_8 = fVar1 * *(float *)(DAT_100a9a48 + 0xc) * fStack_1c * (float)_DAT_10060168 +
                         fStack_8;
            }
          }
        }
        else {
          fVar3 = fVar1;
          if (fVar1 <= _DAT_10059a18) {
            fVar3 = -fVar1;
          }
          if (*(float *)(DAT_100a9a6c + 0xc) < fVar3) {
            *(float *)(param_2 + 0x14) =
                 *(float *)(param_2 + 0x14) -
                 fVar1 * *(float *)(DAT_100a9a44 + 0xc) * *(float *)(DAT_100a9934 + 0xc) * fStack_1c
            ;
          }
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x18);
    if (*(float *)(DAT_100a983c + 0xc) < local_c) {
      local_c = *(float *)(DAT_100a983c + 0xc);
    }
    if (local_c < -*(float *)(DAT_100a9884 + 0xc)) {
      local_c = -*(float *)(DAT_100a9884 + 0xc);
    }
    (*DAT_100a507c)(&local_c);
  }
  return;
}

