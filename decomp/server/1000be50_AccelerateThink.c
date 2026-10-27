
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CApacheHVR::AccelerateThink(void) */

void __thiscall CApacheHVR::AccelerateThink(CApacheHVR *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  float local_8;
  float local_4;
  
                    /* 0xbe50  2  ?AccelerateThink@CApacheHVR@@AAEXXZ */
  iVar1 = *(int *)(this + 4);
  if ((((_DAT_100de774 <= *(float *)(iVar1 + 8)) && (*(float *)(iVar1 + 8) <= _DAT_100de488)) &&
      (_DAT_100de774 <= *(float *)(iVar1 + 0xc))) &&
     (((*(float *)(iVar1 + 0xc) <= _DAT_100de488 && (_DAT_100de774 <= *(float *)(iVar1 + 0x10))) &&
      (*(float *)(iVar1 + 0x10) <= _DAT_100de488)))) {
    if (SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
             *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
             *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) < _DAT_100de770) {
      local_8 = *(float *)(this + 0x314) * _DAT_100de484;
      local_4 = *(float *)(this + 0x318) * _DAT_100de484;
      *(float *)(iVar1 + 0x20) = *(float *)(this + 0x310) * _DAT_100de484 + *(float *)(iVar1 + 0x20)
      ;
      *(float *)(iVar1 + 0x24) = local_8 + *(float *)(iVar1 + 0x24);
      *(float *)(iVar1 + 0x28) = local_4 + *(float *)(iVar1 + 0x28);
    }
    puVar2 = (undefined4 *)FUN_100ae830(&local_c,*(int *)(this + 4) + 0x20);
    iVar1 = *(int *)(this + 4);
    *(undefined4 *)(iVar1 + 0x50) = *puVar2;
    *(undefined4 *)(iVar1 + 0x54) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x58) = puVar2[2];
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  FUN_100b0ef0((int)this);
  return;
}

