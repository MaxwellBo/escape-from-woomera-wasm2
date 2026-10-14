
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10080190(void *this,undefined4 param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *this_00;
  int iVar6;
  void *this_01;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [48];
  int iStack_40;
  undefined1 local_38 [16];
  float local_28;
  
  if (_DAT_101323b4 != (float)_DAT_100de1e8) {
    switch(param_1) {
    case 0x4c:
      if (DAT_1012485c == 0) {
        DAT_1012485c = 1;
        (*DAT_10121efc)(1,s_You_must_now_restart_to_use_Grun_101150c0);
        return;
      }
      local_78 = *(undefined4 *)(*(int *)((int)this + 4) + 0x78);
      local_7c = 0;
      local_74 = 0;
      FUN_100af200(&local_7c);
      iVar6 = *(int *)((int)this + 4);
      local_c4 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddaf4;
      local_c0 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddaf4;
      local_80 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddaf4 + *(float *)(iVar6 + 0x10);
      local_84 = local_c0 + *(float *)(iVar6 + 0xc);
      local_88 = local_c4 + *(float *)(iVar6 + 8);
      FUN_1001a1f0(0x10101a08,&local_88,(undefined4 *)(iVar6 + 0x50),0);
      return;
    case 0x5a:
      puVar1 = (uint *)(*DAT_10121ef0)(s_sohl_impulsetarget_1010c3bc);
      if (puVar1 != (uint *)0x0) {
        FUN_10098c10(puVar1,this,this,3,0);
        return;
      }
      break;
    case 0x5b:
      puVar1 = (uint *)(*DAT_10121ef0)(s_sohl_impulsetarget_1010c3bc);
      if (puVar1 != (uint *)0x0) {
        FUN_10098c10(puVar1,this,this,1,0);
        return;
      }
      break;
    case 0x5c:
      puVar1 = (uint *)(*DAT_10121ef0)(s_sohl_impulsetarget_1010c3bc);
      if (puVar1 != (uint *)0x0) {
        FUN_10098c10(puVar1,this,this,0,0);
        return;
      }
      break;
    case 0x65:
      DAT_10124850 = 1;
      FUN_1007f800(this,0x1010fa24);
      FUN_1007f800(this,0x10108be0);
      FUN_1007f800(this,0x10111c64);
      FUN_1007f800(this,0x1010337c);
      FUN_1007f800(this,0x10108bc0);
      FUN_1007f800(this,0x10108b84);
      FUN_1007f800(this,0x10108b74);
      FUN_1007f800(this,0x10108bb0);
      FUN_1007f800(this,0x10108ba4);
      FUN_1007f800(this,0x10108b94);
      FUN_1007f800(this,0x10108b08);
      FUN_1007f800(this,0x10108af8);
      FUN_1007f800(this,0x10103390);
      FUN_1007f800(this,0x10108b48);
      FUN_1007f800(this,0x10108b64);
      FUN_1007f800(this,0x10108b54);
      FUN_1007f800(this,0x101150b4);
      FUN_1007f800(this,0x101150a4);
      FUN_1007f800(this,0x10108b1c);
      FUN_1007f800(this,0x10108b3c);
      FUN_1007f800(this,0x10108b2c);
      FUN_1007f800(this,0x10108ae8);
      FUN_1007f800(this,0x10108ad8);
      FUN_1007f800(this,0x10101b10);
      DAT_10124850 = 0;
      return;
    case 0x66:
      FUN_1001e0f0(*(int *)((int)this + 4),1,1);
      return;
    case 0x67:
      piVar2 = (int *)FUN_1007f900((int)this);
      if ((piVar2 != (int *)0x0) &&
         (piVar2 = (int *)(**(code **)(*piVar2 + 0x74))(), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x1ac))();
        return;
      }
      break;
    case 0x68:
      FUN_100b5930((int *)&DAT_101323a8);
      return;
    case 0x69:
      if (*(int *)((int)this + 0x4e8) != 0) {
        (*DAT_10121efc)(1,s_Player_is_audible_10115090);
        *(undefined4 *)((int)this + 0x4e8) = 0;
        return;
      }
      (*DAT_10121efc)(1,s_Player_is_silent_1011507c);
      *(undefined4 *)((int)this + 0x4e8) = 1;
      return;
    case 0x6a:
      piVar2 = (int *)FUN_1007f900((int)this);
      if (piVar2 != (int *)0x0) {
        (*DAT_10121efc)(1,s_Classname___s_1011506c,*(int *)(DAT_10122044 + 0x98) + *(int *)piVar2[1]
                       );
        if (*(int *)(piVar2[1] + 0x1cc) == 0) {
          (*DAT_10121efc)(1,s___TargetName__No_Targetname_10115038);
        }
        else {
          (*DAT_10121efc)(1,s___Targetname___s_10115058,
                          *(int *)(DAT_10122044 + 0x98) + *(int *)(piVar2[1] + 0x1cc));
        }
        (*DAT_10121efc)(1,s_Model___s_1011502c,
                        *(int *)(piVar2[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
        if (*(int *)(piVar2[1] + 4) != 0) {
          (*DAT_10121efc)(1,s_Globalname___s_1011501c,
                          *(int *)(DAT_10122044 + 0x98) + *(int *)(piVar2[1] + 4));
        }
        uVar3 = (**(code **)(*piVar2 + 0x58))();
        pcVar4 = FUN_100b1120(uVar3);
        (*DAT_10121efc)(1,s_State___s_10115010,pcVar4);
        return;
      }
      break;
    case 0x6b:
      iVar5 = (*DAT_10121f28)(0);
      iVar6 = *(int *)((int)this + 4);
      fStack_a4 = *(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0x10);
      fStack_a8 = *(float *)(iVar6 + 0x178) + *(float *)(iVar6 + 0xc);
      fStack_ac = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
      local_b4 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddaf0;
      local_b0 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddaf0;
      local_c4 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddaf0 + fStack_ac;
      local_c0 = local_b4 + fStack_a8;
      local_bc = local_b0 + fStack_a4;
      FUN_100afc60(&fStack_ac,&local_c4,1,*(undefined4 *)(iVar6 + 0x208),auStack_70);
      if (iStack_40 != 0) {
        iVar5 = iStack_40;
      }
      iVar6 = (*DAT_10121e98)(iVar5,&fStack_ac,&local_c4);
      if (iVar6 != 0) {
        (*DAT_10121efc)(1,s_Texture___s_10115000,iVar6);
        return;
      }
      break;
    case 0xc3:
      FUN_1001a1f0(0x101133dc,(undefined4 *)(*(int *)((int)this + 4) + 8),
                   (undefined4 *)(*(int *)((int)this + 4) + 0x50),0);
      return;
    case 0xc4:
      FUN_1001a1f0(0x101133c8,(undefined4 *)(*(int *)((int)this + 4) + 8),
                   (undefined4 *)(*(int *)((int)this + 4) + 0x50),0);
      return;
    case 0xc5:
      FUN_1001a1f0(0x10114fec,(undefined4 *)(*(int *)((int)this + 4) + 8),
                   (undefined4 *)(*(int *)((int)this + 4) + 0x50),0);
      return;
    case 199:
      iVar6 = FUN_1006c400(&DAT_10122780,(float *)(*(int *)((int)this + 4) + 8),7);
      (*DAT_10121efc)(1,&DAT_101130d4,iVar6);
      iVar6 = FUN_1006c400(&DAT_10122780,(float *)(*(int *)((int)this + 4) + 8),7);
      FUN_1006ca10(&DAT_10122780,iVar6);
      return;
    case 0xca:
      FUN_100af200(*(int *)((int)this + 4) + 0x74);
      iVar6 = *(int *)((int)this + 4);
      local_c0 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddaf4;
      local_bc = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddaf4;
      local_b4 = *(float *)(iVar6 + 0x178) + *(float *)(iVar6 + 0xc);
      local_b0 = *(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0x10);
      local_a0 = *(float *)(iVar6 + 0x174) + *(float *)(iVar6 + 8) +
                 *(float *)(DAT_10122044 + 0x28) * _DAT_100ddaf4;
      local_9c = local_b4 + local_c0;
      local_98 = local_b0 + local_bc;
      local_8c = *(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0x10);
      local_90 = *(float *)(iVar6 + 0x178) + *(float *)(iVar6 + 0xc);
      local_94 = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
      FUN_100afc60(&local_94,&local_a0,1,*(undefined4 *)(iVar6 + 0x208),local_38);
      if (local_28 != (float)_DAT_100dd628) {
        iVar6 = (*DAT_10121e5c)();
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar6 + 0x80;
        }
        iVar5 = *(int *)(iVar6 + 0x208);
        if ((iVar5 == 0) || (this_01 = *(void **)(iVar5 + 0x7c), this_01 == (void *)0x0)) {
          this_00 = (undefined4 *)(*DAT_10121f04)(iVar5,0xb8);
          if (this_00 != (undefined4 *)0x0) {
            *this_00 = &PTR_FUN_100eea60;
            this_00[1] = iVar6;
            FUN_1007f6d0(this_00,*(int *)((int)this + 4));
            return;
          }
          this_01 = (void *)0x0;
          iRam00000004 = iVar6;
        }
        FUN_1007f6d0(this_01,*(int *)((int)this + 4));
        return;
      }
      break;
    case 0xcb:
      iVar6 = FUN_1007f900((int)this);
      if ((iVar6 != 0) && (*(float *)(*(int *)(iVar6 + 4) + 0x16c) != _DAT_100dd5f8)) {
        *(code **)(iVar6 + 0x74) = CBaseEntity::SUB_Remove;
      }
    }
  }
  return;
}

