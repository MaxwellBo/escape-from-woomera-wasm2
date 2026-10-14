
void __fastcall FUN_1004d5f0(void *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (0 < *(int *)(*(int *)((int)param_1 + 0xdc) + 0x84)) {
    if (*(int *)((int)param_1 + 0x10c) == 0) {
      uVar4 = 5;
    }
    else {
      uVar4 = 6;
    }
    iVar1 = FUN_100b4210(param_1,0x11,uVar4,1.5);
    if (iVar1 != 0) {
      fVar2 = FUN_100ae4b0(*(int *)(*(int *)((int)param_1 + 0xdc) + 0x308),10.0,0x41700000);
      fVar3 = FUN_100ae400();
      *(float *)((int)param_1 + 0x100) = (float)(fVar3 + (float10)(float)fVar2);
    }
  }
  return;
}

