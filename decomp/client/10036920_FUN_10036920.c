
void __fastcall FUN_10036920(int *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined2 *puVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  byte *_Source;
  byte *pbVar8;
  undefined4 *puVar9;
  int *local_4;
  
  iVar1 = 1;
  if (0 < param_1[0x9a12]) {
    puVar4 = &DAT_100b500a;
    do {
      *puVar4 = 0;
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x14;
    } while (iVar1 <= param_1[0x9a12]);
  }
  FUN_1003dda0(DAT_100a5178);
  param_1[0x9a12] = 0;
  _Source = &DAT_100b6028;
  local_4 = &DAT_100b5a04;
  this = extraout_ECX;
  do {
    if ((*local_4 != 0) && (*_Source != 0)) {
      iVar1 = 1;
      if (0 < param_1[0x9a12]) {
        pbVar8 = &DAT_100b4ff0;
        do {
          if (*pbVar8 == 0) break;
          uVar2 = FUN_10056910(this,_Source,pbVar8);
          if (uVar2 == 0) break;
          iVar1 = iVar1 + 1;
          pbVar8 = pbVar8 + 0x28;
          this = extraout_ECX_00;
        } while (iVar1 <= param_1[0x9a12]);
      }
      this = (void *)param_1[0x9a12];
      if ((int)this < iVar1) {
        pvVar3 = (void *)0x1;
        if (0 < (int)this) {
          pcVar6 = &DAT_100b4ff0;
          do {
            if (*pcVar6 == '\0') break;
            pvVar3 = (void *)((int)pvVar3 + 1);
            pcVar6 = pcVar6 + 0x28;
          } while ((int)pvVar3 <= (int)this);
        }
        if ((int)this < (int)pvVar3) {
          this = pvVar3;
        }
        param_1[0x9a12] = (int)this;
        _strncpy((char *)(&DAT_100b4fc8 + (int)pvVar3 * 10),(char *)_Source,0x10);
        *(undefined2 *)(&DAT_100b4fe2 + (int)pvVar3 * 0x28) = 0;
        this = extraout_ECX_01;
      }
      *(short *)(&DAT_100b4fe2 + iVar1 * 0x28) = *(short *)(&DAT_100b4fe2 + iVar1 * 0x28) + 1;
    }
    local_4 = local_4 + 5;
    _Source = _Source + 0x18;
    if (0x100b5eef < (int)local_4) {
      iVar1 = 1;
      if (0 < param_1[0x9a12]) {
        puVar7 = (undefined4 *)&DAT_100b4ff0;
        do {
          if (*(short *)((int)puVar7 + 0x1a) < 1) {
            puVar9 = puVar7;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
          }
          iVar1 = iVar1 + 1;
          puVar7 = puVar7 + 10;
        } while (iVar1 <= param_1[0x9a12]);
      }
      FUN_10036510(param_1);
      return;
    }
  } while( true );
}

