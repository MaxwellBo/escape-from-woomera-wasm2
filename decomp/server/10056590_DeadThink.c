
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CLeech::DeadThink(void) */

void __thiscall CLeech::DeadThink(CLeech *this)

{
  int iVar1;
  undefined1 auStack_3c [16];
  float fStack_2c;
  
                    /* 0x56590  60  ?DeadThink@CLeech@@QAEXXZ */
  if (*(int *)(this + 0xd4) != 0) {
    if (*(int *)(this + 0x1cc) == 0x26) {
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0;
      return;
    }
    if ((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x200) != 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
      (**(code **)(*(int *)this + 0x1a8))(0x26);
    }
  }
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  iVar1 = *(int *)(this + 4);
  if ((*(float *)(iVar1 + 0x20) != _DAT_100dd5f8) || (*(float *)(iVar1 + 0x24) != _DAT_100dd5f8)) {
    FUN_100afc60(iVar1 + 8,&stack0xffffffb8,2,*(undefined4 *)(iVar1 + 0x208),auStack_3c);
    if (fStack_2c != (float)_DAT_100dd628) {
      *(undefined4 *)(*(int *)(this + 4) + 0x20) = 0;
      *(undefined4 *)(*(int *)(this + 4) + 0x24) = 0;
    }
  }
  return;
}

