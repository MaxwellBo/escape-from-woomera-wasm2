
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
HUD_TempEntUpdate(double param_1,double param_2,double param_3,uint *param_4,int *param_5,
                 undefined *param_6,undefined *param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  code *pcVar9;
  float *pfVar10;
  undefined1 *puVar11;
  uint *puVar12;
  float10 fVar13;
  float10 fVar14;
  longlong lVar15;
  float fStack_b4;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint *puStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [16];
  float fStack_78;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int iStack_58;
  undefined1 auStack_44 [16];
  float fStack_34;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
                    /* 0x19ec0  498  HUD_TempEntUpdate */
  if (*param_5 != 0) {
    (**(code **)(DAT_100a5140 + 0x28))(0,1);
    (**(code **)(DAT_100a5140 + 0x2c))();
    (**(code **)(DAT_100a5140 + 0x34))(0xffffffff);
    DAT_100a54c0 = DAT_100a54c0 + 1 & 0x1f;
    puVar12 = (uint *)*param_5;
    if (_DAT_1005d2a8 < param_1) {
      puStack_94 = (uint *)0x0;
      fStack_90 = (float)((float10)param_2 * (float10)_DAT_1005f9e0);
      fVar2 = (float)-((float10)param_1 * (float10)param_3);
      fStack_8c = (float)(-((float10)param_1 * (float10)param_3) * (float10)_DAT_100599f0);
      puVar7 = puStack_94;
      while (puVar6 = puVar12, puStack_94 = puVar7, puVar6 != (uint *)0x0) {
        puVar12 = (uint *)puVar6[0xb];
        if (_DAT_10059a18 <= (float)puVar6[1] - (float)param_2) {
LAB_1001a02e:
          pfVar1 = (float *)(puVar6 + 0x2e3);
          puVar6[0x6c] = puVar6[0x2e3];
          puVar6[0x6d] = puVar6[0x2e4];
          puVar6[0x6e] = puVar6[0x2e5];
          puStack_94 = puVar6;
          if ((*puVar6 & 0x20000) == 0) {
            uVar4 = *puVar6;
            if ((uVar4 & 0x8000) == 0) {
              if ((uVar4 & 1) == 0) {
                if ((uVar4 & 0x400) == 0) {
                  iVar8 = 3;
                  pfVar10 = pfVar1;
                  do {
                    iVar8 = iVar8 + -1;
                    *pfVar10 = pfVar10[-0x2cc] * (float)param_1 + *pfVar10;
                    pfVar10 = pfVar10 + 1;
                  } while (iVar8 != 0);
                  goto LAB_1001a24b;
                }
                fVar14 = (float10)fsin((float10)param_2 * (float10)_DAT_1005f800 +
                                       (float10)(int)puVar6);
                *pfVar1 = (float)((float10)(float)puVar6[0x17] * (float10)param_1 +
                                  fVar14 * (float10)_DAT_1005f9d8 + (float10)*pfVar1);
                fVar14 = (float10)fsin((float10)param_2 * (float10)_DAT_1005f9d0 +
                                       (float10)(int)puVar6);
                puVar6[0x2e4] =
                     (uint)(float)((float10)(float)puVar6[0x18] * (float10)param_1 +
                                   fVar14 * (float10)_DAT_1005f9c8 + (float10)(float)puVar6[0x2e4]);
              }
              else {
                fVar14 = (float10)(float)puVar6[0x17] * (float10)param_1 + (float10)(float)puVar6[3]
                ;
                puVar6[3] = (uint)(float)fVar14;
                puVar6[4] = (uint)((float)puVar6[0x18] * (float)param_1 + (float)puVar6[4]);
                fVar13 = (float10)fsin((float10)(float)puVar6[0x74] * (float10)param_2 +
                                       (float10)(float)puVar6[0x19]);
                *pfVar1 = (float)(fVar14 + (float10)(float)puVar6[0xd5] * (float10)_DAT_1005ac98 *
                                           fVar13);
                fVar14 = (float10)fsin((float10)fStack_90 + (float10)(float)puVar6[0x19] +
                                       (float10)_DAT_1005d770);
                puVar6[0x2e4] =
                     (uint)(float)((float10)(float)puVar6[0xd5] * (float10)_DAT_1005d9cc * fVar14 +
                                  (float10)(float)puVar6[4]);
              }
              puVar6[0x2e5] = (uint)((float)puVar6[0x19] * (float)param_1 + (float)puVar6[0x2e5]);
            }
            else {
              iVar8 = (*DAT_100a50c4)((int)(short)puVar6[0xd]);
              *pfVar1 = *(float *)(iVar8 + 0xb48) + (float)puVar6[0xe];
              puVar6[0x2e4] = (uint)(*(float *)(iVar8 + 0xb4c) + (float)puVar6[0xf]);
              puVar6[0x2e5] = (uint)(*(float *)(iVar8 + 0xb50) + (float)puVar6[0x10]);
            }
          }
          else if ((float)puVar6[0x23] < (float)param_2) {
            (**(code **)(DAT_100a513c + 0x84))(pfVar1,8,0xffffff38,200);
            fVar3 = (float)puVar6[0x2b];
            fVar5 = (float)_DAT_10059ea8;
            puVar6[0x2b] = (uint)(fVar3 - fVar5);
            if ((float)_DAT_1005d2a8 < fVar3 - fVar5) {
              puVar6[1] = (uint)(float)((float10)param_2 + (float10)_DAT_100599f0);
              puVar6[0x23] = (uint)(float)((float10)param_2 + (float10)_DAT_10059ea8);
            }
            else {
              puVar6[1] = (uint)(float)param_2;
            }
          }
LAB_1001a24b:
          if ((*puVar6 & 0x100) == 0) {
            if (((*puVar6 & 0x800) != 0) &&
               (fVar14 = (float10)param_1 * (float10)_DAT_1005acb8 + (float10)(float)puVar6[0xc9],
               puVar6[0xc9] = (uint)(float)fVar14, (float10)(float)puVar6[2] <= fVar14)) {
              lVar15 = __ftol();
              puVar6[0xc9] = (uint)((float)puVar6[0xc9] - (float)(int)lVar15);
            }
LAB_1001a2f3:
            if ((*puVar6 & 4) != 0) {
              puVar6[0x2e6] = (uint)((float)puVar6[0x1a] * (float)param_1 + (float)puVar6[0x2e6]);
              puVar6[0x2e7] = (uint)((float)puVar6[0x1b] * (float)param_1 + (float)puVar6[0x2e7]);
              puVar6[0x2e8] = (uint)((float)puVar6[0x1c] * (float)param_1 + (float)puVar6[0x2e8]);
              puVar6[0x2db] = puVar6[0x2e6];
              puVar6[0x2dc] = puVar6[0x2e7];
              puVar6[0x2dd] = puVar6[0x2e8];
            }
            uVar4 = *puVar6;
            if ((uVar4 & 0x1020) != 0) {
              if ((uVar4 & 0x1000) == 0) {
                if ((uVar4 & 0x20) != 0) {
                  (**(code **)(DAT_100a5140 + 0x38))(2);
                  (**(code **)(DAT_100a5140 + 0x3c))(puVar6 + 0x6c,pfVar1,10,0xffffffff,auStack_44);
                  if (fStack_34 != _DAT_10059eb0) {
                    fStack_a0 = fStack_24;
                    fStack_a4 = fStack_34;
                    fStack_9c = fStack_20;
                    fStack_98 = fStack_1c;
                    if ((*puVar6 & 0x20000) != 0) {
                      pfVar10 = (float *)(puVar6 + 0x17);
                      FUN_10031290(pfVar10,0.6,pfVar10);
                      fVar14 = FUN_100264c0(pfVar10);
                      if (fVar14 < (float10)_DAT_1005ac98) {
                        puVar6[0x2b] = 0;
                      }
                    }
                    pcVar9 = (code *)puVar6[9];
                    if (pcVar9 != (code *)0x0) {
                      puVar11 = auStack_44;
                      goto LAB_1001a4c7;
                    }
                    goto LAB_1001a4ce;
                  }
                }
              }
              else {
                (**(code **)(DAT_100a5140 + 0x38))(2);
                (**(code **)(DAT_100a5140 + 0x3c))(puVar6 + 0x6c,pfVar1,2,0xffffffff,auStack_88);
                if ((fStack_78 != _DAT_10059eb0) &&
                   ((iVar8 = (**(code **)(DAT_100a5140 + 0x24))(iStack_58), iStack_58 == 0 ||
                    (*(int *)(iVar8 + 0x50) != (int)(short)puVar6[0xd])))) {
                  fStack_a0 = fStack_68;
                  pcVar9 = (code *)puVar6[9];
                  fStack_a4 = fStack_78;
                  fStack_9c = fStack_64;
                  fStack_98 = fStack_60;
                  if (pcVar9 != (code *)0x0) {
                    puVar11 = auStack_88;
LAB_1001a4c7:
                    (*pcVar9)(puVar6,puVar11);
                  }
LAB_1001a4ce:
                  if (fStack_a4 != _DAT_10059eb0) {
                    pfVar10 = (float *)(puVar6 + 0x17);
                    FUN_100312c0((float *)(puVar6 + 0x6c),fStack_a4 * (float)param_1,pfVar10,pfVar1)
                    ;
                    fStack_b4 = (float)puVar6[7];
                    if (((((*puVar6 & 10) != 0) &&
                         (fStack_b4 = fStack_b4 * (float)_DAT_100599f0,
                         (float)_DAT_1005d768 < fStack_98)) &&
                        ((float)puVar6[0x19] <= _DAT_10059a18)) &&
                       (fVar2 * _DAT_10059eb8 <= (float)puVar6[0x19])) {
                      fStack_b4 = 0.0;
                      *puVar6 = *puVar6 & 0xffffffc1;
                      puVar6[0x2e6] = 0;
                      puVar6[0x2e8] = 0;
                    }
                    if (puVar6[8] != 0) {
                      (*(code *)param_7)(puVar6,fStack_b4);
                    }
                    if ((*puVar6 & 0x4000) == 0) {
                      if (fStack_b4 != _DAT_10059a18) {
                        FUN_100312c0(pfVar10,(fStack_a0 * *pfVar10 +
                                             fStack_98 * (float)puVar6[0x19] +
                                             fStack_9c * (float)puVar6[0x18]) * _DAT_1005f9c0,
                                     &fStack_a0,pfVar10);
                        puVar6[0x2e7] = (uint)-(float)puVar6[0x2e7];
                      }
                      if (fStack_b4 != _DAT_10059eb0) {
                        FUN_10031290(pfVar10,fStack_b4,pfVar10);
                        FUN_10031290((float *)(puVar6 + 0x2e6),0.9,(float *)(puVar6 + 0x2e6));
                      }
                    }
                    else {
                      puVar6[1] = (uint)(float)param_2;
                      *puVar6 = *puVar6 & 0xffffff7f;
                    }
                  }
                }
              }
            }
            if (((*puVar6 & 0x40) != 0) && (DAT_100a54c0 == puVar6[0xcc])) {
              pfVar10 = (float *)(**(code **)(DAT_100a513c + 0x100))(0);
              fVar14 = (float10)_DAT_1005ac78;
              *pfVar10 = *pfVar1;
              pfVar10[1] = (float)puVar6[0x2e4];
              pfVar10[2] = (float)puVar6[0x2e5];
              pfVar10[3] = 60.0;
              pfVar10[5] = (float)((float10)param_2 + fVar14);
              *(undefined1 *)(pfVar10 + 4) = 0xff;
              *(undefined1 *)((int)pfVar10 + 0x11) = 0x78;
              *(undefined1 *)((int)pfVar10 + 0x12) = 0;
            }
            if ((*puVar6 & 0x10) != 0) {
              (**(code **)(DAT_100a513c + 0x78))(puVar6 + 0x6c,pfVar1,1);
            }
            fVar3 = fVar2;
            if (((*puVar6 & 2) != 0) || (fVar3 = fStack_8c, (*puVar6 & 8) != 0)) {
              puVar6[0x19] = (uint)(fVar3 + (float)puVar6[0x19]);
            }
            if (((*puVar6 & 0x80000) != 0) && ((code *)puVar6[10] != (code *)0x0)) {
              (*(code *)puVar6[10])(puVar6,(float)param_1,(float)param_2);
            }
            puVar7 = puStack_94;
            if ((((*puVar6 & 0x40000) == 0) &&
                (iVar8 = (*(code *)param_6)(puVar6 + 0x11), puVar7 = puStack_94, iVar8 == 0)) &&
               ((*puVar6 & 0x2000) == 0)) {
              puVar6[1] = (uint)(float)param_2;
              *puVar6 = *puVar6 & 0xffffff7f;
            }
          }
          else {
            fVar3 = (float)puVar6[0xd5] * (float)param_1 + (float)puVar6[0xc9];
            puVar6[0xc9] = (uint)fVar3;
            if (fVar3 < (float)puVar6[2]) goto LAB_1001a2f3;
            lVar15 = __ftol();
            puVar6[0xc9] = (uint)((float)puVar6[0xc9] - (float)(int)lVar15);
            if ((*puVar6 & 0x10000) != 0) goto LAB_1001a2f3;
            puVar6[1] = (uint)(float)param_2;
            puVar7 = puStack_94;
          }
        }
        else {
          if ((*puVar6 & 0x80) != 0) {
            if (puVar6[0xcf] == 0) {
              puVar6[0xcf] = 2;
            }
            lVar15 = __ftol();
            puVar6[0xd0] = (uint)lVar15;
            if (0 < (int)(uint)lVar15) goto LAB_1001a02e;
          }
          puVar6[0xb] = *param_4;
          *param_4 = (uint)puVar6;
          if (puVar7 == (uint *)0x0) {
            *param_5 = (int)puVar12;
            puVar7 = puStack_94;
          }
          else {
            puVar7[0xb] = (uint)puVar12;
            puVar7 = puStack_94;
          }
        }
      }
    }
    else if (puVar12 != (uint *)0x0) {
      do {
        if ((*puVar12 & 0x40000) == 0) {
          (*(code *)param_6)(puVar12 + 0x11);
        }
        puVar12 = (uint *)puVar12[0xb];
      } while (puVar12 != (uint *)0x0);
      (**(code **)(DAT_100a5140 + 0x30))();
      return;
    }
    (**(code **)(DAT_100a5140 + 0x30))();
  }
  return;
}

