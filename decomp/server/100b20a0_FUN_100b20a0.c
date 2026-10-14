
undefined4 __thiscall FUN_100b20a0(void *this,byte *param_1,int param_2,void *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  ushort local_8;
  ushort uStack_6;
  undefined2 local_4;
  undefined2 uStack_2;
  
  FUN_100b2210(this);
  uVar1 = FUN_100b2210(this);
  uVar2 = FUN_100b1320(this,param_1);
  if ((short)uVar1 != (short)uVar2) {
    FUN_100b12d0(this,4);
    return 0;
  }
  iVar3 = FUN_100b2230(this);
  uVar1 = 0;
  param_1 = (byte *)0x0;
  if (0 < param_4) {
    do {
      if ((*(int *)((int)this + 4) == 0) ||
         ((*(byte *)((uVar1 & 0xffff) * 0x10 + 0xe + (int)param_3) & 1) == 0)) {
        piVar6 = (int *)((uVar1 & 0xffff) * 0x10 + (int)param_3);
        uVar5 = *(int *)(&DAT_1011ad80 + *piVar6 * 4) * (int)(short)piVar6[3];
        puVar7 = (undefined4 *)(piVar6[2] + param_2);
        for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      uVar1 = uVar1 + 1;
    } while ((int)(uVar1 & 0xffff) < param_4);
  }
  uVar1 = 0;
  if (0 < iVar3) {
    do {
      FUN_100b21d0(this,&local_8);
      iVar4 = FUN_100b1d10(this,param_2,param_3,param_4,(int)param_1,(uint)local_8,
                           *(byte **)(*(int *)(*(int *)this + 0x18) + (uint)uStack_6 * 4),
                           (char *)CONCAT22(uStack_2,local_4));
      param_1 = (byte *)(iVar4 + 1);
      uVar1 = uVar1 + 1;
    } while ((int)(uVar1 & 0xffff) < iVar3);
  }
  return 1;
}

