
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000bf00(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  (**(code **)(*param_1 + 0x18c))();
  iVar1 = *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
  if (0 < iVar1) {
    (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                    CONCAT22((short)((uint)iVar1 >> 0x10),(short)param_1[0x4b]),0,&DAT_1007f110,
                    &DAT_1007f110,0,0,1,0,0,0);
    *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) =
         *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) + -1;
    *(undefined4 *)(param_1[0x37] + 0x314) = 600;
    *(undefined4 *)(param_1[0x37] + 0x31c) = 0x80;
    CBasePlayerAmmo::DefaultTouch((CBasePlayerAmmo *)param_1[0x37],(CBaseEntity *)0x5);
    fVar2 = FUN_10018f40();
    fVar3 = (float10)_DAT_10059ea8;
    param_1[0x3f] = (int)(float)(fVar2 + fVar3);
    param_1[0x3e] = (int)(float)(fVar2 + fVar3);
    fVar3 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
    fVar2 = FUN_10018f40();
    param_1[0x40] = (int)(float)(fVar2 + (float10)(float)fVar3);
  }
  return;
}

