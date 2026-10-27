
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10048500(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (*param_2 != 0x5d) {
    FUN_10005140(param_1,param_2);
    return;
  }
  FUN_10060260(param_1,(float)param_1[0xaa],(float)param_1[0xab],(float)param_1[0xac]);
  iVar1 = *param_1;
  lVar3 = __ftol();
  (**(code **)(iVar1 + 0x128))((int)lVar3);
  if (param_1[0x35] != 0) {
    if (*(float *)(param_1[1] + 0x28) <= _DAT_100dd5f8) {
      if ((*(byte *)(param_1 + 0x57) & 0x10) == 0) {
        uVar2 = FUN_10008160(param_1,(byte *)s_fly_down_1010dc60);
        *(undefined4 *)(param_1[1] + 0x128) = uVar2;
        *(undefined4 *)(param_1[1] + 0x130) = 0;
      }
      else {
        uVar2 = FUN_10008160(param_1,(byte *)s_fly_attack_1010dc6c);
        *(undefined4 *)(param_1[1] + 0x128) = uVar2;
        *(undefined4 *)(param_1[1] + 0x130) = 0;
      }
    }
    else {
      uVar2 = FUN_10008160(param_1,(byte *)s_fly_up_1010dc78);
      *(undefined4 *)(param_1[1] + 0x128) = uVar2;
    }
    FUN_10008190((int)param_1);
    (**(code **)(*param_1 + 0x1b8))();
  }
  if (((*(uint *)(param_1[1] + 0x1a4) & 0x200) != 0) && ((param_1[0x57] & 0x40000000U) == 0)) {
    param_1[0x78] = 4;
  }
  return;
}

