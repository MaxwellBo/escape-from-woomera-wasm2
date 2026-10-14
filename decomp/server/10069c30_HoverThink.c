
/* public: void __thiscall CNihilanthHVR::HoverThink(void) */

void __thiscall CNihilanthHVR::HoverThink(CNihilanthHVR *this)

{
  bool bVar1;
  undefined3 extraout_var;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_10 [16];
  
                    /* 0x69c30  120  ?HoverThink@CNihilanthHVR@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  bVar1 = FUN_10019450((uint *)(this + 0x168));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_100b0ef0((int)this);
  }
  else {
    pfVar2 = (float *)FUN_10001d60(auStack_10,0,0,0x43700000);
    iVar3 = FUN_10019460((uint *)(this + 0x168));
    iVar3 = *(int *)(iVar3 + 4);
    FUN_1006aa60(this,*pfVar2 + *(float *)(iVar3 + 8),pfVar2[1] + *(float *)(iVar3 + 0xc),
                 pfVar2[2] + *(float *)(iVar3 + 0x10));
  }
  (*DAT_10121f70)(0,99);
  iVar3 = *(int *)(this + 4);
  lVar4 = __ftol();
  *(float *)(iVar3 + 0x130) = (float)(((int)lVar4 + 1) % *(int *)(this + 0x324));
  return;
}

