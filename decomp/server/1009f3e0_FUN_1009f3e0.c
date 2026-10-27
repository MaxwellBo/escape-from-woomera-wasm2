
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009f3e0(void *this,int *param_1,undefined4 param_2,int param_3,float param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined3 extraout_var;
  char *pcVar5;
  float10 fVar6;
  double dVar7;
  
  bVar4 = FUN_100b0030(*(int *)((int)this + 0xcc),param_1);
  if (CONCAT31(extraout_var,bVar4) == 0) {
    iVar2 = *(int *)((int)this + 4);
    if (*(int *)((int)this + 0xd0) == 0) {
      if ((*(byte *)(iVar2 + 0x1a0) & 2) == 0) {
        return;
      }
      (*DAT_10121efc)(1,s_DEBUG__trigger_relay___s__wasn_t_1011905c,
                      *(int *)(iVar2 + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                      *(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xcc));
      return;
    }
    if ((*(uint *)(iVar2 + 0x1a0) & 0x80000000) == 0) {
      param_3 = *(int *)((int)this + 200);
      iVar2 = *(int *)(DAT_10122044 + 0x98);
    }
    else {
      iVar2 = *(int *)(DAT_10122044 + 0x98);
    }
    FUN_10098c10((uint *)(iVar2 + *(int *)((int)this + 0xd0)),param_1,this,param_3,0);
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) != 0) {
      (*DAT_10121efc)(1,s_DEBUG__trigger_relay___s__locked_101190a0,
                      *(int *)(*(int *)((int)this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                      *(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xcc));
    }
    uVar3 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
    goto joined_r0x1009f762;
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) != 0) {
    pcVar5 = FUN_100b10d0(param_3);
    (*DAT_10121efc)(1,s_DEBUG__trigger_relay___s__was_se_10119034,
                    *(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)((int)this + 4) + 0x1cc),pcVar5
                   );
    if (param_1 == (int *)0x0) {
      (*DAT_10121efc)(1);
    }
    else {
      (*DAT_10121efc)();
    }
  }
  iVar2 = *(int *)((int)this + 4);
  if ((*(int *)(iVar2 + 0x1c8) == 0) && (*(int *)((int)this + 0xbc) == 0)) {
    if ((*(byte *)(iVar2 + 0x1a0) & 2) == 0) {
      return;
    }
    (*DAT_10121efc)(1,&DAT_101047b8);
    return;
  }
  if (*(int *)(iVar2 + 0x1d4) != 0) {
    fVar6 = FUN_100588f0(DAT_10122044,(int)param_1,
                         (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar2 + 0x1d4)));
    param_4 = (float)fVar6;
  }
  iVar2 = *(int *)((int)this + 200);
  if (iVar2 == 5) {
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) != 0) {
      if (*(float *)((int)this + 0xb8) == _DAT_100dd5f8) {
        pcVar5 = FUN_100b10d0(param_3);
        (*DAT_10121efc)(1,s___sending__s_same__now__10118fd8,pcVar5);
      }
      else {
        dVar7 = (double)*(float *)((int)this + 0xb8);
        pcVar5 = FUN_100b10d0(param_3);
        (*DAT_10121efc)(1,s___will_send__s_same__in__f_secon_10118ff4,pcVar5,dVar7);
      }
    }
  }
  else {
    bVar1 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
    if (iVar2 == 2) {
      if ((bVar1 & 2) != 0) {
        if (*(float *)((int)this + 0xb8) != _DAT_100dd5f8) {
          (*DAT_10121efc)(1,s___will_send_ratio__f_in__f_secon_10118fb0,(double)param_4,
                          (double)*(float *)((int)this + 0xb8));
          param_3 = *(int *)((int)this + 200);
          goto LAB_1009f74f;
        }
        (*DAT_10121efc)(1,s___sending_ratio__f_now__10118f94,(double)param_4);
      }
      param_3 = *(int *)((int)this + 200);
    }
    else {
      if ((bVar1 & 2) != 0) {
        if (*(float *)((int)this + 0xb8) == _DAT_100dd5f8) {
          pcVar5 = FUN_100b10d0(iVar2);
          (*DAT_10121efc)(1,s___sending__s_now__10118f60,pcVar5);
        }
        else {
          dVar7 = (double)*(float *)((int)this + 0xb8);
          pcVar5 = FUN_100b10d0(iVar2);
          (*DAT_10121efc)(1,s___will_send__s_in__f_seconds__10118f74,pcVar5,dVar7);
        }
      }
      param_3 = *(int *)((int)this + 200);
      param_4 = 0.0;
    }
  }
LAB_1009f74f:
  FUN_10098e40(this,param_1,param_3,param_4);
  uVar3 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
joined_r0x1009f762:
  if ((uVar3 & 1) != 0) {
    if ((uVar3 & 2) != 0) {
      (*DAT_10121efc)(1);
    }
    FUN_100b0ef0((int)this);
  }
  return;
}

