
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEnvSpark::SparkThink(void) */

void __thiscall CEnvSpark::SparkThink(CEnvSpark *this)

{
  int iVar1;
  float10 fVar2;
  
                    /* 0x18840  210  ?SparkThink@CEnvSpark@@QAEXXZ */
  FUN_10016e20(*(int *)(this + 4),(float *)(*(int *)(this + 4) + 8));
  if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x10) != 0) {
    *(undefined4 *)(this + 0x74) = 0;
    return;
  }
  iVar1 = *(int *)this;
  fVar2 = (float10)(*DAT_10121f74)(0,*(undefined4 *)(this + 0xb8));
  (**(code **)(iVar1 + 8))((float)(fVar2 + (float10)_DAT_100dfb80));
  return;
}

