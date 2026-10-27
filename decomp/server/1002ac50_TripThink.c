
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CLightning::TripThink(void) */

void __thiscall CLightning::TripThink(CLightning *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  
                    /* 0x2ac50  264  ?TripThink@CLightning@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if (*(float *)(*(int *)(this + 4) + 0x1e0) != _DAT_100dd5f8) {
    puVar6 = &stack0xffffffc4;
    uVar5 = 0;
    iVar4 = 0;
    iVar1 = FUN_10029570((int)this);
    iVar2 = FUN_10029530((int)this);
    FUN_100afc60(iVar2,iVar1,iVar4,uVar5,puVar6);
    FUN_1002ab00(this,(int)&stack0xffffffc4);
  }
  if (*(int *)(*(int *)(this + 4) + 0x1c8) != 0) {
    puVar6 = &stack0xffffffc4;
    uVar5 = 0;
    iVar4 = 0;
    *(undefined4 *)(DAT_10122044 + 0x84) = 1;
    iVar1 = FUN_10029570((int)this);
    iVar2 = FUN_10029530((int)this);
    FUN_100afc60(iVar2,iVar1,iVar4,uVar5,puVar6);
    piVar3 = (int *)FUN_1002a9d0(this,(int)&stack0xffffffc4);
    if (piVar3 == (int *)0x0) {
      *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) & 0xfff7ffff;
    }
    else if ((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x80000) == 0) {
      FUN_10098c10((uint *)(*(int *)(*(int *)(this + 4) + 0x1c8) + *(int *)(DAT_10122044 + 0x98)),
                   piVar3,this,3,0);
      *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) | 0x80000;
      return;
    }
  }
  return;
}

