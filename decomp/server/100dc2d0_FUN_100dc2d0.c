
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc2d0(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 *in_EAX;
  
  DAT_a025ff10 = DAT_a025ff10 >> 1 | DAT_a025ff10 << 7;
  DAT_a425ff10 = DAT_a425ff10 >> 1 | DAT_a425ff10 << 7;
  DAT_a825ff10 = DAT_a825ff10 >> 1 | DAT_a825ff10 << 7;
  bVar1 = DAT_0425ff10 >> 1;
  DAT_0425ff10 = bVar1 | DAT_0425ff10 << 7;
  bVar2 = DAT_0025ff10 >> 1;
  DAT_0025ff10 = bVar2 | DAT_0025ff10 << 7;
  DAT_b025ff10 = DAT_b025ff10 >> 1 | DAT_b025ff10 << 7;
  DAT_b425ff10 = DAT_b425ff10 >> 1 | DAT_b425ff10 << 7;
  DAT_b825ff10 = DAT_b825ff10 >> 1 | DAT_b825ff10 << 7;
  DAT_bc25ff10 = DAT_bc25ff10 >> 1 | DAT_bc25ff10 << 7;
  DAT_c025ff10 = DAT_c025ff10 >> 1 | DAT_c025ff10 << 7;
  DAT_c425ff10 = DAT_c425ff10 >> 1 | DAT_c425ff10 << 7;
  DAT_c825ff10 = DAT_c825ff10 >> 1 | DAT_c825ff10 << 7;
  DAT_cc25ff10 = DAT_cc25ff10 >> 1 | DAT_cc25ff10 << 7;
  DAT_d025ff10 = DAT_d025ff10 >> 1 | DAT_d025ff10 << 7;
  DAT_d425ff10 = DAT_d425ff10 >> 1 | DAT_d425ff10 << 7;
  DAT_d825ff10 = DAT_d825ff10 >> 1 | DAT_d825ff10 << 7;
  DAT_dc25ff10 = DAT_dc25ff10 >> 1 | DAT_dc25ff10 << 7;
  DAT_e025ff10 = DAT_e025ff10 >> 1 | DAT_e025ff10 << 7;
  DAT_e425ff10 = DAT_e425ff10 >> 1 | DAT_e425ff10 << 7;
  DAT_e825ff10 = DAT_e825ff10 >> 1 | DAT_e825ff10 << 7;
  DAT_ec25ff10 = DAT_ec25ff10 >> 1 | DAT_ec25ff10 << 7;
  DAT_f025ff10 = DAT_f025ff10 >> 1 | DAT_f025ff10 << 7;
  DAT_f425ff10 = DAT_f425ff10 >> 1 | DAT_f425ff10 << 7;
  DAT_f825ff10 = DAT_f825ff10 >> 1 | DAT_f825ff10 << 7;
  DAT_fc25ff10 = DAT_fc25ff10 >> 1 | DAT_fc25ff10 << 7;
  DAT_0025ff10 = DAT_0025ff10 >> 1 | bVar2 << 7;
  _DAT_0425ff10 = _DAT_0425ff10 >> 1 | (uint)((bVar1 & 1) != 0) << 0x1f;
  _DAT_0825ff10 = _DAT_0825ff10 >> 1 | (uint)((_DAT_0825ff10 & 1) != 0) << 0x1f;
  _DAT_0c25ff10 = _DAT_0c25ff10 >> 1 | (uint)((_DAT_0c25ff10 & 1) != 0) << 0x1f;
  _DAT_1025ff10 = _DAT_1025ff10 >> 1 | (uint)((_DAT_1025ff10 & 1) != 0) << 0x1f;
  _DAT_1425ff10 = _DAT_1425ff10 >> 1 | (uint)((_DAT_1425ff10 & 1) != 0) << 0x1f;
  _DAT_1825ff10 = _DAT_1825ff10 >> 1 | (uint)((_DAT_1825ff10 & 1) != 0) << 0x1f;
  _DAT_1c25ff10 = _DAT_1c25ff10 >> 1 | (uint)((_DAT_1c25ff10 & 1) != 0) << 0x1f;
  _DAT_2025ff10 = _DAT_2025ff10 >> 1 | (uint)((_DAT_2025ff10 & 1) != 0) << 0x1f;
  _DAT_2425ff10 = _DAT_2425ff10 >> 1 | (uint)((_DAT_2425ff10 & 1) != 0) << 0x1f;
  _DAT_2825ff10 = _DAT_2825ff10 >> 1 | (uint)((_DAT_2825ff10 & 1) != 0) << 0x1f;
  _DAT_2c25ff10 = _DAT_2c25ff10 >> 1 | (uint)((_DAT_2c25ff10 & 1) != 0) << 0x1f;
  _DAT_3025ff10 = _DAT_3025ff10 >> 1 | (uint)((_DAT_3025ff10 & 1) != 0) << 0x1f;
  _DAT_3425ff10 = _DAT_3425ff10 >> 1 | (uint)((_DAT_3425ff10 & 1) != 0) << 0x1f;
  _DAT_3825ff10 = _DAT_3825ff10 >> 1 | (uint)((_DAT_3825ff10 & 1) != 0) << 0x1f;
  _DAT_3c25ff10 = _DAT_3c25ff10 >> 1 | (uint)((_DAT_3c25ff10 & 1) != 0) << 0x1f;
  _DAT_4025ff10 = _DAT_4025ff10 >> 1 | (uint)((_DAT_4025ff10 & 1) != 0) << 0x1f;
  _DAT_4425ff10 = _DAT_4425ff10 >> 1 | (uint)((_DAT_4425ff10 & 1) != 0) << 0x1f;
  _DAT_4825ff10 = _DAT_4825ff10 >> 1 | (uint)((_DAT_4825ff10 & 1) != 0) << 0x1f;
  _DAT_4c25ff10 = _DAT_4c25ff10 >> 1 | (uint)((_DAT_4c25ff10 & 1) != 0) << 0x1f;
  _DAT_5025ff10 = _DAT_5025ff10 >> 1 | (uint)((_DAT_5025ff10 & 1) != 0) << 0x1f;
  _DAT_ac25ff10 = _DAT_ac25ff10 >> 1 | (uint)((_DAT_ac25ff10 & 1) != 0) << 0x1f;
  DAT_83c18b10 = DAT_83c18b10 >> 1 | DAT_83c18b10 << 7;
  in_EAX[2] = 0;
  *in_EAX = &PTR_FUN_100fa640;
  return;
}

