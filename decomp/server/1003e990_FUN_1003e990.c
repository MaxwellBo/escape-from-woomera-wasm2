
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003e990(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [20];
  undefined4 auStack_24 [9];
  
  FUN_100af200(*(int *)((int)param_1 + 4) + 0x50);
  uVar3 = 0;
  piVar4 = (int *)((int)param_1 + 0x30c);
  do {
    if ((int)uVar3 < 2) {
      iVar6 = 0xf0;
    }
    else {
      iVar6 = 0x8c;
    }
    puVar1 = FUN_100295c0(0x1010d084,iVar6);
    *piVar4 = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      uVar5 = uVar3 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      FUN_10008450(param_1,uVar5 + 1,&local_68,local_44);
      local_58 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100e544c;
      local_54 = *(float *)(DAT_10122044 + 0x30) * _DAT_100e544c;
      local_50 = local_68 + *(float *)(DAT_10122044 + 0x28) * _DAT_100e544c;
      local_4c = local_64 + local_58;
      local_48 = local_60 + local_54;
      FUN_100afc60(&local_68,&local_50,0,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),
                   local_38);
      uVar2 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
      FUN_10029800((void *)*piVar4,auStack_24,uVar2);
      iVar6 = *piVar4;
      if ((int)uVar3 < 2) {
        *(undefined4 *)(*(int *)(iVar6 + 4) + 0x150) = 0x437f0000;
        *(undefined4 *)(*(int *)(iVar6 + 4) + 0x154) = 0x43020000;
        *(undefined4 *)(*(int *)(iVar6 + 4) + 0x158) = 0x42b40000;
      }
      else {
        *(undefined4 *)(*(int *)(iVar6 + 4) + 0x150) = 0;
        *(undefined4 *)(*(int *)(iVar6 + 4) + 0x154) = 0x42f00000;
        *(undefined4 *)(*(int *)(iVar6 + 4) + 0x158) = 0x437f0000;
      }
      *(undefined4 *)(*(int *)(*piVar4 + 4) + 0x14c) = 0x433e0000;
      *(uint *)(*(int *)(*piVar4 + 4) + 0x148) =
           *(uint *)(*(int *)(*piVar4 + 4) + 0x148) & 0xf | 0x40;
      *(undefined4 *)(*(int *)(*piVar4 + 4) + 0x134) = 0x41a00000;
      *(uint *)(*(int *)(*piVar4 + 4) + 0x110) =
           (uVar5 + 2 & 0xf) << 0xc | *(uint *)(*(int *)(*piVar4 + 4) + 0x110) & 0xfff;
      FUN_10095d30(1,&local_68,0x180,0.3);
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)uVar3 < 4);
  FUN_10094b20(*(void **)((int)param_1 + 4),
               *(undefined4 *)((int)*(void **)((int)param_1 + 4) + 0x208),4,
               PTR_s_garg_gar_flameon1_wav_1010cc88,0x3f800000,0x3f4ccccd,0,100);
  FUN_10094b20(*(void **)((int)param_1 + 4),
               *(undefined4 *)((int)*(void **)((int)param_1 + 4) + 0x208),1,
               PTR_s_garg_gar_flamerun1_wav_1010cc8c,0x3f800000,0x3f4ccccd,0,100);
  return;
}

