
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTestHull::ShowBadNode(void) */

void __thiscall CTestHull::ShowBadNode(CTestHull *this)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x6d840  200  ?ShowBadNode@CTestHull@@QAEXXZ */
  *(undefined4 *)(*(int *)(this + 4) + 0x108) = 5;
  *(float *)(*(int *)(this + 4) + 0x54) = *(float *)(*(int *)(this + 4) + 0x54) + _DAT_100de4fc;
  FUN_100af200(*(int *)(this + 4) + 0x50);
  FUN_100afe30(*(int *)(this + 4) + 8,&DAT_10121dd8,0xff,0x19);
  iVar1 = *(int *)(this + 4);
  local_4 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddb10 + *(float *)(iVar1 + 0x10);
  local_8 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddb10 + *(float *)(iVar1 + 0xc);
  local_c = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddb10 + *(float *)(iVar1 + 8);
  FUN_100afe30(&local_c,&DAT_10121dd8,0xff,0x19);
  iVar1 = *(int *)(this + 4);
  local_4 = *(float *)(iVar1 + 0x10) - *(float *)(DAT_10122044 + 0x30) * _DAT_100ddb10;
  local_8 = *(float *)(iVar1 + 0xc) - *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddb10;
  local_c = *(float *)(iVar1 + 8) - *(float *)(DAT_10122044 + 0x28) * _DAT_100ddb10;
  FUN_100afe30(&local_c,&DAT_10121dd8,0xff,0x19);
  iVar1 = *(int *)(this + 4);
  local_4 = *(float *)(DAT_10122044 + 0x48) * _DAT_100ddb10 + *(float *)(iVar1 + 0x10);
  local_8 = *(float *)(DAT_10122044 + 0x44) * _DAT_100ddb10 + *(float *)(iVar1 + 0xc);
  local_c = *(float *)(DAT_10122044 + 0x40) * _DAT_100ddb10 + *(float *)(iVar1 + 8);
  FUN_100afe30(&local_c,&DAT_10121dd8,0xff,0x19);
  iVar1 = *(int *)(this + 4);
  local_4 = *(float *)(iVar1 + 0x10) - *(float *)(DAT_10122044 + 0x48) * _DAT_100ddb10;
  local_8 = *(float *)(iVar1 + 0xc) - *(float *)(DAT_10122044 + 0x44) * _DAT_100ddb10;
  local_c = *(float *)(iVar1 + 8) - *(float *)(DAT_10122044 + 0x40) * _DAT_100ddb10;
  FUN_100afe30(&local_c,&DAT_10121dd8,0xff,0x19);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

