
void __fastcall FUN_1002eb90(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  int *this;
  int *extraout_ECX;
  undefined4 unaff_EBX;
  int iVar4;
  byte *pbVar5;
  float fVar6;
  int iVar7;
  undefined4 unaff_retaddr;
  float *pfVar8;
  int iVar9;
  float fStack_50;
  undefined4 uStack_40;
  int *piStack_1c;
  
  if (*(int *)(param_1[0x11] + 0xa4) <= *(int *)(param_1[0xc] + 0x2dc)) {
    *(undefined4 *)(param_1[0xc] + 0x2dc) = 0;
  }
  fVar6 = (float)(*(int *)(param_1[0xc] + 0x2dc) * 0xb0 + *(int *)(param_1[0x11] + 0xa8) +
                 param_1[0x11]);
  fStack_50 = fVar6;
  (**(code **)(*param_1 + 0x2c))();
  uVar1 = (**(code **)(*param_1 + 0x10))(unaff_retaddr,fVar6);
  (**(code **)(*param_1 + 0x44))
            (&DAT_100b12f8,&DAT_100ad8c8,fVar6,uVar1,(float)(double)CONCAT44(uStack_40,unaff_EBX));
  iVar4 = param_1[0x11];
  iVar7 = 0;
  iVar9 = 0;
  if (0 < *(int *)(iVar4 + 0x8c)) {
    this = (int *)(*(int *)(iVar4 + 0x90) + iVar4 + 0x20);
    pfVar8 = (float *)&DAT_100ad8c8;
    piStack_1c = this;
    do {
      iVar4 = 0;
      if (0 < param_1[0x17]) {
        pbVar5 = (byte *)(param_1 + 0x18);
        do {
          uVar2 = FUN_10056910(this,(byte *)(piStack_1c + -8),pbVar5);
          if (uVar2 == 0) {
            FUN_1002d360(param_1 + iVar4 * 0xc + 0x418,(undefined4 *)(param_1[0x102a] + iVar7));
            FUN_1002d360(param_1 + iVar4 * 0xc + 0xa18,(undefined4 *)(param_1[0x102b] + iVar7));
            break;
          }
          iVar4 = iVar4 + 1;
          pbVar5 = pbVar5 + 0x20;
          this = extraout_ECX;
        } while (iVar4 < param_1[0x17]);
      }
      if (param_1[0x17] <= iVar4) {
        FUN_1002d280(pfVar8,&fStack_50);
        if (*piStack_1c == -1) {
          iVar4 = (*DAT_100b2198)();
          if (iVar4 == 0) {
            pfVar3 = (float *)param_1[0x1029];
          }
          else {
            pfVar3 = (float *)param_1[0x1028];
          }
          FUN_1002cf20(pfVar3,&fStack_50,(float *)(iVar7 + param_1[0x102a]));
          FUN_1002cf20((float *)param_1[0x1028],&fStack_50,(float *)(param_1[0x102b] + iVar7));
          (**(code **)(*param_1 + 0x30))(param_1[0xc],iVar7 + param_1[0x102a]);
        }
        else {
          FUN_1002cf20((float *)(*piStack_1c * 0x30 + param_1[0x102a]),&fStack_50,
                       (float *)(iVar7 + param_1[0x102a]));
          FUN_1002cf20((float *)(*piStack_1c * 0x30 + param_1[0x102b]),&fStack_50,
                       (float *)(iVar7 + param_1[0x102b]));
        }
      }
      piStack_1c = piStack_1c + 0x1c;
      pfVar8 = pfVar8 + 4;
      iVar9 = iVar9 + 1;
      this = *(int **)(param_1[0x11] + 0x8c);
      iVar7 = iVar7 + 0x30;
    } while (iVar9 < (int)this);
  }
  return;
}

