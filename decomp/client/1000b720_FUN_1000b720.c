
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000b720(void *this,float param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 unaff_retaddr;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_58;
  undefined *puStack_54;
  undefined *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_1c [3];
  float afStack_10 [2];
  undefined4 uStack_8;
  
  if (*(int *)((int)this + 0x10c) < 1) {
    if (*(int *)((int)this + 0xec) != 0) {
      (**(code **)(*(int *)this + 0x174))();
      fVar3 = FUN_10018f40();
      *(float *)((int)this + 0xf8) = (float)(fVar3 + (float10)_DAT_1005acd0);
      return;
    }
  }
  else {
    *(int *)((int)this + 0x10c) = *(int *)((int)this + 0x10c) + -1;
    iVar1 = *(int *)(*(int *)((int)this + 0xdc) + 4);
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) | 2;
    CBasePlayerAmmo::DefaultTouch(*(CBasePlayerAmmo **)((int)this + 0xdc),(CBaseEntity *)0x5);
    if (*(int *)(*(int *)((int)this + 4) + 0x114) == 1) {
      *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x314) = 200;
      *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x31c) = 0x80;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x314) = 600;
      *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x31c) = 0x100;
    }
    (**(code **)(**(int **)((int)this + 0xdc) + 0x214))();
    if (param_2 != 0) {
      FUN_10009030(afStack_10);
    }
    uStack_44 = 0;
    uStack_48 = 1;
    uStack_4c = 0x46000000;
    FUN_1000bc20(&uStack_58,unaff_retaddr,unaff_retaddr,unaff_retaddr);
    uStack_6c = 0x1000b87a;
    FUN_100083d0(&stack0xffffff9c,(undefined4 *)&stack0xffffffd8);
    FUN_100083d0(auStack_70,auStack_1c);
    puVar2 = (undefined4 *)FUN_1000a4e0(afStack_10,1.4013e-45);
    uStack_4c = *puVar2;
    uStack_48 = puVar2[1];
    uStack_8 = puVar2[2];
    uStack_44 = 0;
    puStack_50 = &DAT_1007f110;
    puStack_54 = &DAT_1007f110;
    uStack_58 = 0;
    (*DAT_1007f0bc)();
    fVar3 = FUN_10018f40();
    *(float *)((int)this + 0xfc) = (float)(fVar3 + (float10)param_1);
    *(float *)((int)this + 0xf8) = (float)(fVar3 + (float10)param_1);
    if ((*(int *)((int)this + 0x10c) == 0) &&
       (*(int *)(*(int *)((int)this + 0xdc) + 0x534 + *(int *)((int)this + 0x104) * 4) < 1)) {
      uStack_44 = 0x1000b93f;
      FUN_10002850();
    }
    uStack_44 = 0x1000b95b;
    fVar3 = FUN_10018fb0(*(int *)(*(int *)((int)this + 0xdc) + 0x308),10.0,0x41700000);
    fVar4 = FUN_10018f40();
    *(float *)((int)this + 0x100) = (float)(fVar4 + (float10)(float)fVar3);
  }
  return;
}

