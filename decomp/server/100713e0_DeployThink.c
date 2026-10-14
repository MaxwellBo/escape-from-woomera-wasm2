
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall COsprey::DeployThink(void) */

void __thiscall COsprey::DeployThink(COsprey *this)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  void *pvVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  float *pfVar9;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [20];
  undefined4 local_24 [9];
  
                    /* 0x713e0  67  ?DeployThink@COsprey@@QAEXXZ */
  FUN_100af210((float *)(*(int *)(this + 4) + 0x50));
  local_74 = *(float *)(DAT_10122044 + 0x28);
  local_70 = *(float *)(DAT_10122044 + 0x2c);
  local_6c = *(float *)(DAT_10122044 + 0x30);
  local_80 = *(float *)(DAT_10122044 + 0x40);
  local_7c = *(float *)(DAT_10122044 + 0x44);
  local_78 = *(float *)(DAT_10122044 + 0x48);
  local_a4 = *(float *)(DAT_10122044 + 0x34);
  local_a0 = *(float *)(DAT_10122044 + 0x38);
  local_9c = *(float *)(DAT_10122044 + 0x3c);
  iVar1 = *(int *)(this + 4);
  uVar8 = *(undefined4 *)(iVar1 + 0x208);
  FUN_10001d60(&local_98,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
               *(float *)(iVar1 + 0x10) - _DAT_100de488);
  FUN_100afc60(*(int *)(this + 4) + 8,&local_98,1,uVar8,local_38);
  FUN_10095d30(0x20,local_24,400,0.3);
  FUN_10001d60(&local_5c,local_a4 * _DAT_100ed938,local_a0 * _DAT_100ed938,local_9c * _DAT_100ed938)
  ;
  FUN_10001d60(&local_50,local_80 * _DAT_100dd61c,local_7c * _DAT_100dd61c,local_78 * _DAT_100dd61c)
  ;
  FUN_10001d60(&local_68,local_74 * _DAT_100ddac8,local_70 * _DAT_100ddac8,local_6c * _DAT_100ddac8)
  ;
  iVar1 = *(int *)(this + 4);
  FUN_10001d60(&local_44,local_68 + *(float *)(iVar1 + 8),local_64 + *(float *)(iVar1 + 0xc),
               local_60 + *(float *)(iVar1 + 0x10));
  FUN_10001d60(&local_98,local_50 + local_44,local_4c + local_40,local_48 + local_3c);
  FUN_10001d60(&local_8c,local_5c + local_98,local_58 + local_94,local_54 + local_90);
  local_a8 = local_84;
  local_b0 = local_8c;
  local_ac = local_88;
  piVar2 = FUN_10071960(this,local_8c,local_88,local_84);
  FUN_10019420(this + 0x55c,(int)piVar2);
  FUN_10001d60(&local_50,local_a4 * _DAT_100ed938,local_a0 * _DAT_100ed938,local_9c * _DAT_100ed938)
  ;
  FUN_10001d60(&local_5c,local_80 * _DAT_100dd61c,local_7c * _DAT_100dd61c,local_78 * _DAT_100dd61c)
  ;
  FUN_10001d60(&local_98,local_74 * _DAT_100ed934,local_70 * _DAT_100ed934,local_6c * _DAT_100ed934)
  ;
  iVar1 = *(int *)(this + 4);
  FUN_10001d60(&local_44,local_98 + *(float *)(iVar1 + 8),local_94 + *(float *)(iVar1 + 0xc),
               local_90 + *(float *)(iVar1 + 0x10));
  FUN_10001d60(&local_68,local_5c + local_44,local_58 + local_40,local_54 + local_3c);
  FUN_10001d60(&local_8c,local_50 + local_68,local_4c + local_64,local_48 + local_60);
  local_ac = local_88;
  local_b0 = local_8c;
  local_a8 = local_84;
  piVar2 = FUN_10071960(this,local_8c,local_88,local_84);
  FUN_10019420(this + 0x564,(int)piVar2);
  FUN_10001d60(&local_98,local_a4 * _DAT_100ed938,local_a0 * _DAT_100ed938,local_9c * _DAT_100ed938)
  ;
  pfVar9 = &local_98;
  pfVar7 = &local_5c;
  pfVar3 = (float *)FUN_10002280(&local_80,&local_44,-100.0);
  pfVar6 = &local_50;
  pfVar4 = (float *)FUN_10002280(&local_74,&local_68,32.0);
  pvVar5 = (void *)FUN_1000b550((void *)(*(int *)(this + 4) + 8),&local_8c,pfVar4);
  pvVar5 = (void *)FUN_1000b550(pvVar5,pfVar6,pfVar3);
  uVar8 = 0x100717e9;
  pfVar6 = (float *)FUN_1000b550(pvVar5,pfVar7,pfVar9);
  local_b0 = *pfVar6;
  local_ac = pfVar6[1];
  local_a8 = pfVar6[2];
  FUN_10003850(&stack0xffffff3c,&local_b0);
  piVar2 = FUN_10071960(this,uVar8,(float)pfVar7,(float)pfVar9);
  FUN_10019420(this + 0x56c,(int)piVar2);
  pfVar6 = (float *)FUN_10002280(&local_a4,&local_98,-96.0);
  pfVar9 = &local_5c;
  pfVar3 = (float *)FUN_10002280(&local_80,&local_44,-100.0);
  pfVar7 = &local_50;
  pfVar4 = (float *)FUN_10002280(&local_74,&local_68,-64.0);
  pvVar5 = (void *)FUN_1000b550((void *)(*(int *)(this + 4) + 8),&local_8c,pfVar4);
  pvVar5 = (void *)FUN_1000b550(pvVar5,pfVar7,pfVar3);
  uVar8 = 0x10071883;
  pfVar7 = (float *)FUN_1000b550(pvVar5,pfVar9,pfVar6);
  local_b0 = *pfVar7;
  local_ac = pfVar7[1];
  local_a8 = pfVar7[2];
  FUN_10003850(&stack0xffffff3c,&local_b0);
  piVar2 = FUN_10071960(this,uVar8,(float)pfVar9,(float)pfVar6);
  FUN_10019420(this + 0x574,(int)piVar2);
  *(code **)(this + 0x74) = HoverThink;
  (**(code **)(*(int *)this + 8))();
  return;
}

