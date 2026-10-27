
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CAmbientGeneric::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CAmbientGeneric::ToggleUse
          (CAmbientGeneric *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  
                    /* 0x92e70  250
                       ?ToggleUse@CAmbientGeneric@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar3 = *(int *)(this + 4);
  pcVar4 = (char *)(*(int *)(iVar3 + 0x1d4) + *(int *)(DAT_10122044 + 0x98));
  if (param_3 != 3) {
    if (*(int *)(this + 0x120) != 0) {
      if (param_3 == 1) {
        return;
      }
      if (*(int *)(this + 0x120) != 0) goto LAB_10092eba;
    }
    if (param_3 == 0) {
      return;
    }
  }
LAB_10092eba:
  if (param_3 == 2) {
    if (*(int *)(this + 0x120) != 0) {
      lVar5 = __ftol();
      uVar2 = (undefined4)lVar5;
      this_00 = *(void **)(this + 0x128);
      *(undefined4 *)(this + 0xf8) = uVar2;
      if (this_00 == (void *)0x0) {
        FUN_100af2c0(*(undefined4 *)(iVar3 + 0x208),(undefined4 *)(iVar3 + 8),pcVar4,0,0,0x80,uVar2)
        ;
        return;
      }
      FUN_10094b20(this_00,this_00,*(undefined4 *)(this + 300),pcVar4,0,0,0x80,uVar2);
      return;
    }
  }
  else if (*(int *)(this + 0x120) != 0) {
    iVar1 = *(int *)(this + 0xf0);
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0x120) = 0;
      *(uint *)(iVar3 + 0x1a0) = *(uint *)(iVar3 + 0x1a0) | 0x10;
      if ((*(int *)(this + 0x100) == 0) && (*(int *)(this + 0x110) == 0)) {
        if (*(int *)(this + 0x128) == 0) {
          FUN_100af2c0(*(undefined4 *)(*(int *)(this + 4) + 0x208),
                       (undefined4 *)(*(int *)(this + 4) + 8),pcVar4,0,0,0x20,0);
          return;
        }
        FUN_10094b20(*(void **)(this + 300),*(int *)(this + 0x128),*(void **)(this + 300),pcVar4,0,0
                     ,0x20,100);
        return;
      }
      *(undefined4 *)(this + 200) = 0;
      *(undefined4 *)(this + 0xd8) = 0;
      *(undefined4 *)(this + 0xdc) = *(undefined4 *)(this + 0x110);
      *(int *)(this + 0xcc) = *(int *)(this + 0x100);
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      return;
    }
    if (iVar1 < *(int *)(this + 0xf4)) {
      return;
    }
    *(undefined4 *)(this + 200) = *(undefined4 *)(this + 0xfc);
    *(undefined4 *)(this + 0xcc) = 0;
    iVar3 = *(int *)(this + 0xf4) + 1;
    *(int *)(this + 0xf4) = iVar3;
    iVar3 = ((0xff - *(int *)(this + 0xc4)) / iVar1) * iVar3 + *(int *)(this + 0xc4);
    *(int *)(this + 0xc0) = iVar3;
    if (0xff < iVar3) {
      *(undefined4 *)(this + 0xc0) = 0xff;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      return;
    }
    goto LAB_1009313e;
  }
  if (*(int *)(this + 0x124) == 0) {
    if (*(int *)(this + 0x128) == 0) {
      FUN_100af2c0(*(undefined4 *)(iVar3 + 0x208),(undefined4 *)(iVar3 + 8),pcVar4,0,0,0x20,0);
    }
    else {
      FUN_10094b20(*(void **)(this + 300),*(int *)(this + 0x128),*(void **)(this + 300),pcVar4,0,0,
                   0x20,100);
    }
  }
  else {
    *(undefined4 *)(this + 0x120) = 1;
  }
  FUN_10092c10((int)this);
  if (*(int *)(this + 0x128) == 0) {
    FUN_100af2c0(*(undefined4 *)(*(int *)(this + 4) + 0x208),(undefined4 *)(*(int *)(this + 4) + 8),
                 pcVar4,(float)*(int *)(this + 0x108) * (float)_DAT_100dfb88,
                 *(undefined4 *)(this + 0xb8),0,*(undefined4 *)(this + 0xf8));
  }
  else {
    FUN_10094b20(*(void **)(this + 300),*(int *)(this + 0x128),*(void **)(this + 300),pcVar4,
                 (float)*(int *)(this + 0x108) * (float)_DAT_100dfb88,*(undefined4 *)(this + 0xb8),0
                 ,*(undefined4 *)(this + 0xf8));
  }
LAB_1009313e:
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

