
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008940(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = FUN_10018f40();
  *(float *)(param_1[0x37] + 700) = (float)(fVar2 + (float10)_DAT_100599f0);
  if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) == 0) {
    iVar1 = *(int *)(param_1[0x37] + 4);
    *(uint *)(iVar1 + 0x168) = *(uint *)(iVar1 + 0x168) & 0xffffefff;
    param_1[0x1d] = (int)CBasePlayerItem::AttemptToMaterialize;
    (**(code **)(*param_1 + 8))(0x3dcccccd);
  }
  else {
    (**(code **)(*param_1 + 0x17c))(6,1,0);
  }
  CBasePlayerItem::AttemptToMaterialize((CBasePlayerItem *)param_1[0x37]);
  return;
}

