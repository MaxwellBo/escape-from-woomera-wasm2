
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1007c350(void *this,undefined4 param_1)

{
  uint *this_00;
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  float10 fVar5;
  
  if (*(int **)((int)this + 0x528) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x528) + 0x134))(0);
  }
  (**(code **)(*DAT_10121db8 + 0x6c))(this,param_1,DAT_1012484c);
  this_00 = (uint *)((int)this + 0x4dc);
  bVar1 = FUN_10019450(this_00);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)FUN_10019460(this_00);
    (**(code **)(*piVar2 + 0xe4))(this,this,0,0);
    FUN_10019420(this_00,0);
  }
  iVar3 = FUN_10095f90(*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
  puVar4 = (undefined4 *)FUN_10095f40(iVar3);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_10095b40(puVar4);
  }
  FUN_1007c580(this,4);
  *(undefined4 *)((int)this + 0x648) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb4) = DAT_10121dcc;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x170) = 1;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 6;
  *(uint *)(*(int *)((int)this + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0xfffffdff;
  iVar3 = *(int *)((int)this + 4);
  if (*(float *)(iVar3 + 0x28) < _DAT_100dd63c) {
    fVar5 = (float10)(*DAT_10121f74)(0,0x43960000);
    *(float *)(iVar3 + 0x28) = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x28));
  }
  FUN_1007e210(this,(byte *)0x0,0,0);
  *(undefined4 *)((int)this + 0x4f8) = 0;
  (*DAT_10121ec0)(1,DAT_10124888,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
  (*DAT_10121ec8)(*(undefined4 *)((int)this + 0x4f8));
  (*DAT_10121ec4)();
  (*DAT_10121ec0)(1,DAT_10124884,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec4)();
  *(undefined4 *)((int)this + 0x50c) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x214) = 0;
  (*DAT_10121ec0)(1,DAT_101248e4,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
  (*DAT_10121ec8)(0);
  (*DAT_10121ec4)();
  if (((_DAT_100de4e0 <= *(float *)(*(int *)((int)this + 4) + 0x160)) || (unaff_ESI == 1)) &&
     (unaff_ESI != 2)) {
    (**(code **)(*(int *)this + 0x218))();
    *(undefined4 *)(*(int *)((int)this + 4) + 0x50) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x58) = 0;
    *(code **)((int)this + 0x74) = CBasePlayer::PlayerDeathThink;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 0;
  (**(code **)(*(int *)this + 0x200))();
  *(uint *)(*(int *)((int)this + 4) + 0x118) = *(uint *)(*(int *)((int)this + 4) + 0x118) | 0x80;
  return;
}

