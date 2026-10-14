
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNihilanthHVR::DissipateThink(void) */

void __thiscall CNihilanthHVR::DissipateThink(CNihilanthHVR *this)

{
  bool bVar1;
  undefined3 extraout_var;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  
                    /* 0x6a900  75  ?DissipateThink@CNihilanthHVR@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if ((float)_DAT_100e08f0 < *(float *)(*(int *)(this + 4) + 0x144)) {
    FUN_100b0ef0((int)this);
  }
  *(float *)(*(int *)(this + 4) + 0x14c) = *(float *)(*(int *)(this + 4) + 0x14c) - _DAT_100de4ac;
  *(float *)(*(int *)(this + 4) + 0x144) =
       *(float *)(*(int *)(this + 4) + 0x144) + (float)_DAT_100dfb80;
  bVar1 = FUN_10019450((uint *)(this + 0x168));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_100b0ef0((int)this);
  }
  else {
    pfVar2 = (float *)FUN_10001d60(&stack0xfffffff0,0,0,0x45800000);
    iVar3 = FUN_10019460((uint *)(this + 0x168));
    iVar3 = *(int *)(iVar3 + 4);
    FUN_1006aa60(this,*pfVar2 + *(float *)(iVar3 + 8),pfVar2[1] + *(float *)(iVar3 + 0xc),
                 pfVar2[2] + *(float *)(iVar3 + 0x10));
  }
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(0x1c);
  uVar4 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  (*DAT_10121ed0)(uVar4);
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x14c));
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xc0);
  (*DAT_10121ec8)(0x40);
  (*DAT_10121ec8)(2);
  (*DAT_10121edc)(0);
  (*DAT_10121ec4)();
  return;
}

