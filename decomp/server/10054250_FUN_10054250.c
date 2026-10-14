
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10054250(void *this,int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
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
  float fStack_78;
  float fStack_74;
  undefined4 auStack_70 [4];
  float fStack_60;
  undefined4 auStack_38 [5];
  undefined4 auStack_24 [9];
  
  local_c8 = 1.0;
  if (*(int *)((int)this + 0x364) < 8) {
    FUN_100af210((float *)(*(int *)((int)this + 4) + 0x50));
    local_88 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddac8;
    local_84 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddac8;
    local_80 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddac8;
    fVar2 = (float)param_1;
    FUN_10001d60(&local_a0,fVar2 * *(float *)(DAT_10122044 + 0x40),
                 fVar2 * *(float *)(DAT_10122044 + 0x44),fVar2 * *(float *)(DAT_10122044 + 0x48));
    FUN_10001d60(&local_b8,local_a0 * _DAT_100dd634,local_9c * _DAT_100dd634,
                 local_98 * _DAT_100dd634);
    FUN_10001d60(&local_c4,*(float *)(DAT_10122044 + 0x34) * _DAT_100e8200,
                 *(float *)(DAT_10122044 + 0x38) * _DAT_100e8200,
                 *(float *)(DAT_10122044 + 0x3c) * _DAT_100e8200);
    iVar6 = *(int *)((int)this + 4);
    FUN_10001d60(&local_ac,local_c4 + *(float *)(iVar6 + 8),local_c0 + *(float *)(iVar6 + 0xc),
                 local_bc + *(float *)(iVar6 + 0x10));
    FUN_10001d60(&local_94,local_b8 + local_ac,local_b4 + local_a8,local_b0 + local_a4);
    FUN_10001d60(&local_7c,local_94 + local_88,local_90 + local_84,local_8c + local_80);
    iVar6 = 3;
    do {
      fVar8 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
      FUN_10001d60(&local_ac,(float)(fVar8 * (float10)*(float *)(DAT_10122044 + 0x34)),
                   (float)(fVar8 * (float10)*(float *)(DAT_10122044 + 0x38)),
                   (float)(fVar8 * (float10)*(float *)(DAT_10122044 + 0x3c)));
      FUN_10001d60(&local_94,fVar2 * *(float *)(DAT_10122044 + 0x40),
                   fVar2 * *(float *)(DAT_10122044 + 0x44),fVar2 * *(float *)(DAT_10122044 + 0x48));
      fVar8 = (float10)(*DAT_10121f74)(0,0x3f800000);
      FUN_10001d60(&local_b8,(float)((float10)local_94 * fVar8),(float)((float10)local_90 * fVar8),
                   (float)((float10)local_8c * fVar8));
      FUN_10001d60(&local_c4,local_ac + local_b8,local_a8 + local_b4,local_a4 + local_b0);
      uVar1 = *(undefined4 *)(*(int *)((int)this + 4) + 0x208);
      FUN_10001d60(&local_a0,local_c4 * _DAT_100de47c,local_c0 * _DAT_100de47c,
                   local_bc * _DAT_100de47c);
      FUN_10001d60(&local_88,local_a0 + local_7c,fStack_78 + local_9c,fStack_74 + local_98);
      FUN_100afc60(&local_7c,&local_88,0,uVar1,auStack_70);
      if (fStack_60 < local_c8) {
        puVar3 = auStack_70;
        puVar7 = auStack_38;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar7 = puVar7 + 1;
        }
        local_c8 = fStack_60;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (local_c8 != (float)_DAT_100dd628) {
      FUN_100b2ce0((int)auStack_38,5);
      puVar3 = FUN_100295c0(0x10102c0c,0x1e);
      *(undefined4 **)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) = puVar3;
      if (*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) != 0) {
        uVar4 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
        FUN_10029800(*(void **)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344),auStack_24,
                     uVar4);
        iVar6 = *(int *)(*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) + 4);
        *(uint *)(iVar6 + 0x110) = ((param_1 < 0) + 1) * 0x1000 | *(uint *)(iVar6 + 0x110) & 0xfff;
        FUN_10054c50(*(void **)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344),0x60,0x80,0x10)
        ;
        *(undefined4 *)
         (*(int *)(*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) + 4) + 0x14c) =
             0x42800000;
        *(undefined4 *)
         (*(int *)(*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) + 4) + 0x114) =
             0x50;
        *(int *)((int)this + 0x364) = *(int *)((int)this + 0x364) + 1;
      }
    }
  }
  return;
}

