
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10002930(CBasePlayerItem *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
  (*DAT_1007f0bc)(6,*(undefined4 *)(iVar1 + 0x208),
                  CONCAT22((short)((uint)(iVar1 + 0x50) >> 0x10),*(undefined2 *)(param_1 + 0x130)),0
                  ,iVar1 + 8,iVar1 + 0x50,0,0,*(int *)(param_1 + 0xb4) != 0,0,0,0);
  fVar2 = FUN_10018f40();
  *(float *)(param_1 + 0x100) = (float)(fVar2 + (float10)_DAT_10059ec0);
  fVar3 = FUN_10018f40();
  fVar2 = (float10)_DAT_100599f0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(float *)(param_1 + 0xfc) = (float)(fVar3 + fVar2);
  *(float *)(param_1 + 0xf8) = (float)(fVar3 + fVar2);
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

