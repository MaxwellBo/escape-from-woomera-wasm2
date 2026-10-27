
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CApache::FlyTouch(class CBaseEntity *) */

void __thiscall CApache::FlyTouch(CApache *this,CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  undefined4 local_38 [9];
  float local_14;
  float local_10;
  float local_c;
  
                    /* 0x9ed0  110  ?FlyTouch@CApache@@AAEXPAVCBaseEntity@@@Z */
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == 4) {
    FUN_100afcf0(local_38);
    iVar1 = *(int *)(this + 4);
    pfVar3 = (float *)(iVar1 + 0x20);
    fVar2 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                 *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) + *pfVar3 * *pfVar3) +
            _DAT_100de484;
    *pfVar3 = local_14 * fVar2 + *pfVar3;
    *(float *)(iVar1 + 0x24) = local_10 * fVar2 + *(float *)(iVar1 + 0x24);
    *(float *)(iVar1 + 0x28) = fVar2 * local_c + *(float *)(iVar1 + 0x28);
  }
  return;
}

