
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10018400(void *this,float param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  float local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  float *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10 [4];
  
  pfVar6 = (float *)((int)this + 4);
  local_38 = 0;
  local_24 = this;
  do {
    iVar7 = local_38;
    if (pfVar6[-1] != 0.0) {
      local_50 = (float)_DAT_10077fec + DAT_100a3a64;
      if (*pfVar6 < local_50) {
        local_50 = *pfVar6;
      }
      *pfVar6 = local_50;
      local_28 = pfVar6;
      if (param_1 < local_50) {
        fVar2 = pfVar6[-1];
        if (fVar2 == 1.4013e-45) {
          piVar3 = (int *)FUN_10016ac0(&DAT_100a0ea8,(int)pfVar6[2],local_10);
          local_44 = DAT_100a3aac >> 0x10 & 0xff;
          local_48 = DAT_100a3aac >> 8 & 0xff;
          local_4c = DAT_100a3aac & 0xff;
          __ftol();
          FUN_1001e790(&local_44,&local_48,&local_4c);
          iVar4 = DAT_100a4dcc;
          iVar1 = DAT_100a4dcc + -0x18;
          iVar7 = ((-0x10 - DAT_100a3a38) * 2 - (DAT_100a3a38 + 5) * iVar7) + DAT_100a4dd0;
          if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
            (*DAT_100a5000)(*piVar3,local_44,local_48,local_4c);
            (*DAT_100a500c)(0,iVar1,iVar7,local_10);
          }
          FUN_1001e880(iVar4 + -0x22,iVar7,iVar4 + -0x7c,pfVar6[1],local_44,local_48,local_4c);
          iVar7 = local_38;
        }
        else if (fVar2 == 2.8026e-45) {
          iVar1 = (int)pfVar6[2] * 0x148;
          if (&DAT_100a0ea8 + (int)pfVar6[2] * 0x52 == (undefined4 *)0x0) {
            return 1;
          }
          local_3c = (uint)DAT_100a3aac._2_1_;
          local_40 = DAT_100a3aac >> 8 & 0xff;
          local_50 = (float)(DAT_100a3aac & 0xff);
          iVar4 = FUN_10015ed0(&DAT_100a0ea8,(int)(&DAT_100a0ea8 + (int)pfVar6[2] * 0x52));
          if (iVar4 == 0) {
            local_3c = 0xff;
            local_40 = 0x10;
            local_50 = 2.24208e-44;
          }
          __ftol();
          FUN_1001e790(&local_3c,&local_40,&local_50);
          iVar4 = ((-0x10 - DAT_100a3a38) * 2 - (DAT_100a3a38 + 5) * iVar7) + DAT_100a4dd0;
          iVar7 = (*(int *)(&DAT_100a0f68 + iVar1) - *(int *)(&DAT_100a0f6c + iVar1)) + DAT_100a4dcc
          ;
          (*DAT_100a5000)(*(undefined4 *)(&DAT_100a0f64 + iVar1),local_3c,local_40,local_50);
          (*DAT_100a500c)(0,iVar7,iVar4,&DAT_100a0f68 + iVar1);
          pfVar6 = local_28;
          iVar7 = local_38;
        }
        else if ((fVar2 == 4.2039e-45) && (pfVar6[2] != 0.0)) {
          piVar3 = (int *)((int)pfVar6[2] * 0x10 + DAT_100a3ab4);
          local_20 = *piVar3;
          local_1c = piVar3[1];
          local_18 = piVar3[2];
          local_14 = piVar3[3];
          local_2c = (uint)DAT_100a3aac._2_1_;
          local_30 = DAT_100a3aac >> 8 & 0xff;
          local_34 = DAT_100a3aac & 0xff;
          __ftol();
          FUN_1001e790(&local_2c,&local_30,&local_34);
          iVar4 = ((-0x10 - DAT_100a3a38) * 2 - (DAT_100a3a38 + 5) * iVar7) + DAT_100a4dd0;
          iVar1 = (DAT_100a4dcc - local_1c) + -10 + local_20;
          if ((int)pfVar6[2] < 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(DAT_100a3ab0 + (int)pfVar6[2] * 4);
          }
          (*DAT_100a5000)(uVar5,local_2c,local_30,local_34);
          (*DAT_100a500c)(0,iVar1,iVar4,&local_20);
        }
      }
      else {
        pfVar6[-1] = 0.0;
        *pfVar6 = 0.0;
        pfVar6[1] = 0.0;
        pfVar6[2] = 0.0;
        FUN_100183e0(local_24);
      }
    }
    local_38 = iVar7 + 1;
    pfVar6 = pfVar6 + 4;
  } while (local_38 < 0xc);
  return 1;
}

