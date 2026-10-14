
void __fastcall FUN_1000cf80(int *param_1)

{
  CBasePlayerItem *this;
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_50;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  char *pcStack_3c;
  float fStack_24;
  float fStack_20;
  float afStack_1c [3];
  undefined4 auStack_10 [4];
  
  this = *(CBasePlayerItem **)(param_1[0x37] + 4);
  if ((*(int *)(this + 0x1c0) == 3) && (-0x11 < *(int *)(this + 0x1c4))) {
    (**(code **)(*param_1 + 0x174))();
    param_1[0x3e] = 0x3e19999a;
    return;
  }
  if (0 < param_1[0x43]) {
    *(undefined4 *)(param_1[0x37] + 0x314) = 1000;
    *(undefined4 *)(param_1[0x37] + 0x31c) = 0x200;
    param_1[0x43] = param_1[0x43] + -1;
    *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) =
         *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) | 2;
    CBasePlayerAmmo::DefaultTouch((CBasePlayerAmmo *)param_1[0x37],(CBaseEntity *)0x5);
    iVar1 = *(int *)(param_1[0x37] + 4);
    afStack_1c[0] = *(float *)(iVar1 + 0x70) + *(float *)(iVar1 + 0x7c);
    fStack_20 = *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x78);
    fStack_24 = *(float *)(iVar1 + 0x68) + *(float *)(iVar1 + 0x74);
    CBasePlayerItem::AttemptToMaterialize((CBasePlayerItem *)&fStack_24);
    (**(code **)(*(int *)param_1[0x37] + 0x214))();
    FUN_10009030(afStack_1c);
    pcStack_3c = (char *)0x0;
    uStack_40 = 3;
    uStack_44 = 0x46000000;
    FUN_1000bc20(&uStack_50,0x3c0f0846,0x3c0f0846,0x3c0f0846);
    uStack_64 = 0x1000d0fc;
    FUN_100083d0(&stack0xffffffa4,afStack_1c);
    FUN_100083d0(auStack_68,auStack_10);
    puVar2 = (undefined4 *)FUN_1000a4e0((float *)&stack0xffffffd8,1.4013e-45);
    uStack_44 = *puVar2;
    pcStack_3c = (char *)0x0;
    uStack_40 = puVar2[1];
    fStack_20 = (float)puVar2[2];
    puStack_48 = &DAT_1007f110;
    puStack_4c = &DAT_1007f110;
    uStack_50 = 0;
    (*DAT_1007f0bc)();
    if ((param_1[0x43] == 0) && (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) < 1)) {
      pcStack_3c = (char *)0x1000d193;
      FUN_10002850();
    }
    param_1[0x3e] = 0x3f400000;
    pcStack_3c = (char *)0x1000d1b9;
    fVar3 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
    param_1[0x40] = (int)(float)fVar3;
    return;
  }
  if (param_1[0x3b] == 0) {
    (**(code **)(*param_1 + 0x18c))();
    return;
  }
  uStack_44 = *(undefined4 *)(this + 0x208);
  pcStack_3c = s_weapons_357_cock1_wav_10076374;
  uStack_40 = 1;
  puStack_48 = (undefined *)0x1000cffe;
  CBasePlayerItem::AttemptToMaterialize(this);
  param_1[0x3e] = 0x3e19999a;
  return;
}

