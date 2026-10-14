
/* public: void __thiscall CBaseDelay::DelayThink(void) */

void __thiscall CBaseDelay::DelayThink(CBaseDelay *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* 0x990f0  64  ?DelayThink@CBaseDelay@@QAEXXZ */
  uVar3 = 0;
  iVar2 = *(int *)(*(int *)(this + 4) + 0x180);
  piVar1 = (int *)FUN_10019410((uint *)(this + 0xc0));
  FUN_10098e40(this,piVar1,iVar2,uVar3);
  (*DAT_10121e60)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  return;
}

