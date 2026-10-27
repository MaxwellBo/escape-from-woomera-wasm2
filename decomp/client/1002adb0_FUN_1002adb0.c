
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002adb0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94 [3];
  undefined4 auStack_88 [4];
  float fStack_78;
  float afStack_68 [2];
  float fStack_60;
  undefined1 local_44 [68];
  
  if ((*(float *)(DAT_100acc38 + 0xcc) == _DAT_10059a18) &&
     (_DAT_100601f0 <= *(float *)(DAT_100acc38 + 100))) {
    local_a4 = *(float *)(DAT_100acc38 + 0x5c);
    local_a0 = *(float *)(DAT_100acc38 + 0x60);
    local_9c = 0.0;
    fVar5 = (float10)FUN_100264f0(&local_a4);
    local_98 = (float)fVar5;
    local_b0 = *(float *)(DAT_100acc38 + 0x14);
    local_ac = *(float *)(DAT_100acc38 + 0x18);
    local_a8 = 0.0;
    FUN_100264f0(&local_b0);
    if ((local_98 == (float)_DAT_1005d2a8) ||
       ((float)_DAT_1005d2a8 <= local_b0 * local_a4 + local_ac * local_a0 + local_a8 * local_9c)) {
      local_bc = *(float *)(DAT_100acc38 + 0x38);
      local_b8 = *(undefined4 *)(DAT_100acc38 + 0x3c);
      local_b4 = *(float *)(DAT_100acc38 + 0x40) + _DAT_1005d9cc;
      FUN_100312c0(&local_bc,24.0,&local_b0,local_94);
      iVar1 = *(int *)(DAT_100acc38 + 0xbc);
      *(undefined4 *)(DAT_100acc38 + 0xbc) = 2;
      puVar2 = (undefined4 *)
               (**(code **)(DAT_100acc38 + 0x4f580))(local_44,&local_bc,local_94,0,0xffffffff);
      puVar4 = auStack_88;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      if ((fStack_78 < (float)_DAT_10059a10) && (ABS(fStack_60) < (float)_DAT_10060298)) {
        local_b4 = (*(float *)(DAT_100acc38 + 0x4f52c + iVar1 * 0xc) - _DAT_1005d9cc) + local_b4;
        FUN_100312c0(&local_bc,24.0,&local_b0,local_94);
        FUN_100312c0((float *)&DAT_100aab14,-50.0,afStack_68,(float *)(DAT_100acc38 + 0x68));
        puVar2 = (undefined4 *)
                 (**(code **)(DAT_100acc38 + 0x4f580))(local_44,&local_bc,local_94,0,0xffffffff);
        puVar4 = auStack_88;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        if (fStack_78 == (float)_DAT_10059a10) {
          *(undefined4 *)(DAT_100acc38 + 0xcc) = 0x44fa0000;
          *(undefined4 *)(DAT_100acc38 + 100) = 0x43610000;
          *(uint *)(DAT_100acc38 + 200) = *(uint *)(DAT_100acc38 + 200) | 2;
          *(uint *)(DAT_100acc38 + 0xb8) = *(uint *)(DAT_100acc38 + 0xb8) | 0x800;
        }
      }
      *(int *)(DAT_100acc38 + 0xbc) = iVar1;
    }
  }
  return;
}

