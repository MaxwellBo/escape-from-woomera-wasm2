
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100457e0(void *this,undefined4 param_1)

{
  float fVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (*DAT_10121e08)(param_1);
  (*DAT_10121e10)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),param_1);
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x42800000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0;
  FUN_100afdc0(*(int *)((int)this + 4),&uStack_c,&uStack_18);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 3;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 4;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x160) = 0x3f800000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb0) = 0x41200000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x128) =
       *(undefined4 *)(*(int *)((int)this + 4) + 0x184);
  FUN_10008190((int)this);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x138) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0xf7;
  if (*(int *)(*(int *)((int)this + 4) + 0x1cc) == 0) {
    fVar1 = (float)_DAT_100dfb80;
    *(code **)((int)this + 0x74) = CLegacyCineMonster::CineThink;
    (**(code **)(*(int *)this + 0x10))(*(float *)((int)this + 0x54) + fVar1);
  }
  return;
}

