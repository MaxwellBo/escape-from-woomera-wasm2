
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008280(void *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_40;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [4];
  
  iVar3 = *(int *)(*(int *)((int)param_1 + 0xdc) + 4);
  local_1c = *(float *)(iVar3 + 0x70) + *(float *)(iVar3 + 0x7c);
  local_20 = *(float *)(iVar3 + 0x6c) + *(float *)(iVar3 + 0x78);
  local_24 = *(float *)(iVar3 + 0x68) + *(float *)(iVar3 + 0x74);
  CBasePlayerItem::AttemptToMaterialize((CBasePlayerItem *)&local_24);
  local_18 = DAT_1007f7f8[10];
  local_14 = DAT_1007f7f8[0xb];
  local_10[0] = DAT_1007f7f8[0xc];
  (**(code **)(**(int **)((int)param_1 + 0xdc) + 0x214))();
  fVar1 = *DAT_1007f7f8;
  fVar2 = *(float *)(*(int *)((int)param_1 + 0xdc) + 0x68c);
  fVar4 = FUN_10007ab0();
  if ((float10)(fVar1 - fVar2) <= fVar4) {
    FUN_10007ab0();
  }
  if (*(int *)((int)param_1 + 0xb0) != 3) {
    CBasePlayerAmmo::DefaultTouch(*(CBasePlayerAmmo **)((int)param_1 + 0xdc),(CBaseEntity *)0x5);
  }
  uStack_40 = 0x1000838b;
  fVar4 = FUN_10018fb0(*(int *)(*(int *)((int)param_1 + 0xdc) + 0x308),0.3,0x3f4ccccd);
  *(float *)(*(int *)((int)param_1 + 0xdc) + 0x694) = (float)(fVar4 + (float10)*DAT_1007f7f8);
  uStack_48 = 0x100083b5;
  FUN_100083d0(&uStack_40,&local_1c);
  FUN_100083d0(auStack_4c,local_10);
  FUN_100083f0(param_1);
  return;
}

