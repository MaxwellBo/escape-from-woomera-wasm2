
uint * __cdecl FUN_100d9bed(uint *param_1,uint param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  
  if (DAT_10134e9c == 0) {
    puVar2 = FUN_100cb770(param_1,(char)param_2);
  }
  else {
    FUN_100cf6a6(0x19);
    while( true ) {
      bVar1 = (byte)*param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_10134fa0 + uVar3 + 1) & 4) == 0) {
        puVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        puVar2 = (uint *)((int)param_1 + 1);
        if (*(byte *)((int)param_1 + 1) == 0) {
          FUN_100cf707(0x19);
          return (uint *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,*(byte *)((int)param_1 + 1))) {
          FUN_100cf707(0x19);
          return param_1;
        }
      }
      param_1 = (uint *)((int)puVar2 + 1);
    }
    FUN_100cf707(0x19);
    puVar2 = (uint *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return puVar2;
}

