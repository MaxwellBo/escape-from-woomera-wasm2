
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1002c000(void *this,float param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  size_t _Count;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = DAT_100ad2c0;
  if ((DAT_100a5178 != 0) && (uVar3 = FUN_1003d4f0(DAT_100a5178), (char)uVar3 == '\0')) {
    return 1;
  }
  fVar2 = _DAT_10079a4c + param_1;
  if (fVar2 <= _DAT_100ad2bc) {
    _DAT_100ad2bc = fVar2;
  }
  if (fVar2 <= _DAT_100ad2bc) {
    _DAT_100ad2bc = fVar2;
  }
  if (_DAT_100ad2bc <= param_1) {
    if ((char)DAT_100acc4c == '\0') {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
    }
    else {
      _DAT_100ad2bc = fVar2;
      FUN_1002bf90();
    }
  }
  iVar6 = 0;
  iVar7 = 0;
  do {
    if (*(char *)((int)&DAT_100acc4c + iVar6) != '\0') {
      if ((*(char *)((int)&DAT_100acc4c + iVar6) == '\x02') &&
         (*(int *)((int)&DAT_100ad2a4 + iVar7) != 0)) {
        _Count = *(size_t *)((int)&DAT_100ad28c + iVar7);
        if (0x3f < (int)_Count) {
          _Count = 0x40;
        }
        _strncpy(&DAT_100ad24c,(char *)((int)&DAT_100acc4c + iVar6),_Count);
        iVar4 = *(int *)((int)&DAT_100ad28c + iVar7);
        if (0x3e < iVar4) {
          iVar4 = 0x3f;
        }
        (&DAT_100ad24c)[iVar4] = 0;
        puVar1 = *(undefined4 **)((int)&DAT_100ad2a4 + iVar7);
        (*DAT_100a5060)(*puVar1,puVar1[1],puVar1[2]);
        uVar5 = (*DAT_100a505c)(10,iVar8,&DAT_100ad24c);
        (*DAT_100a505c)(uVar5,iVar8,
                        (int)&DAT_100acc4c + iVar6 + *(int *)((int)&DAT_100ad28c + iVar7));
      }
      else {
        (*DAT_100a505c)(10,iVar8,(char *)((int)&DAT_100acc4c + iVar6));
      }
    }
    iVar7 = iVar7 + 4;
    iVar8 = iVar8 + DAT_100ad2c4;
    iVar6 = iVar6 + 0x100;
  } while (iVar7 < 0x14);
  return 1;
}

