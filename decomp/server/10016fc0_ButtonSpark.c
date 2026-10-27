
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseButton::ButtonSpark(void) */

void __thiscall CBaseButton::ButtonSpark(CBaseButton *this)

{
  int iVar1;
  float10 fVar2;
  
                    /* 0x16fc0  30  ?ButtonSpark@CBaseButton@@QAEXXZ */
  iVar1 = *(int *)this;
  *(code **)(this + 0x74) = ButtonSpark;
  fVar2 = (float10)(*DAT_10121f74)(0,0x3fc00000);
  (**(code **)(iVar1 + 8))((float)(fVar2 + (float10)_DAT_100dfb80));
  FUN_10016e20(*(int *)(this + 4),(float *)(*(int *)(this + 4) + 0xdc));
  return;
}

