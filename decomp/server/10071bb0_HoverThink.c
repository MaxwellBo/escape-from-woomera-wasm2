
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall COsprey::HoverThink(void) */

void __thiscall COsprey::HoverThink(COsprey *this)

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  COsprey *pCVar4;
  int iVar5;
  
                    /* 0x71bb0  121  ?HoverThink@COsprey@@QAEXXZ */
  iVar5 = 0;
  pCVar4 = this + 0x55c;
  do {
    bVar2 = FUN_10019450((uint *)pCVar4);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      iVar3 = FUN_10019460((uint *)pCVar4);
      if (_DAT_100dd5f8 < *(float *)(*(int *)(iVar3 + 4) + 0x160)) {
        iVar3 = FUN_10019460((uint *)pCVar4);
        if ((*(uint *)(*(int *)(iVar3 + 4) + 0x1a4) & 0x200) == 0) break;
      }
    }
    iVar5 = iVar5 + 1;
    pCVar4 = pCVar4 + 8;
  } while (iVar5 < 4);
  if (iVar5 == 4) {
    uVar1 = *DAT_10122044;
    *(code **)(this + 0x74) = FlyThink;
    *(undefined4 *)(this + 0x354) = uVar1;
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_100af210((float *)(*(int *)(this + 4) + 0x50));
  FUN_10072da0((int)this);
  return;
}

