
void __thiscall FUN_100345f0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    (**(code **)(*param_1 + 0x40))((int)this + 200);
    iVar1 = *(int *)((int)this + 0xc0);
    puVar2[1] = iVar1;
    puVar2[2] = (int)this + 0xbc;
    *(undefined4 **)(iVar1 + 8) = puVar2;
    *(undefined4 **)(puVar2[2] + 4) = puVar2;
    iVar1 = *(int *)((int)this + 0x284);
    iVar3 = FUN_10034880((int)this);
    (**(code **)(iVar1 + 0x208))(0,iVar3);
    (**(code **)(*(int *)((int)this + 0x188) + 0x214))(0x32);
    (**(code **)(*(int *)((int)this + 0x188) + 0x218))(1);
    FUN_10034720(this);
  }
  return;
}

