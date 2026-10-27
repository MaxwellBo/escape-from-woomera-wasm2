/* thiscall. Ghidra dropped ECX and split the body at the jmp to FUN_10043070. */

void * FUN_10042ff0(void *self, uint param_1)

{
  char *buf;
  char *old;
  uint cap;
  uint oldlen;
  uint ncopy;
  uint nalloc;
  uint i;
  char ref;

  cap = param_1 | 0x1f;
  if (0xfffffffd < cap) {
    cap = param_1;
  }
  nalloc = cap + 2;
  if ((int)nalloc < 0) {
    nalloc = 0;
  }
  buf = (char *)operator_new(nalloc);
  old = *(char **)((int)self + 4);
  oldlen = *(uint *)((int)self + 8);
  if (oldlen != 0) {
    ncopy = oldlen;
    if (cap < oldlen) {
      ncopy = cap;
    }
    for (i = 0; i < ncopy; i = i + 1) {
      buf[i + 1] = old[i];
    }
  }
  if (old != (char *)0x0) {
    ref = old[-1];
    if ((ref == '\0') || (ref == -1)) {
      FUN_10049a73(old + -1);
    }
    else {
      old[-1] = ref + -1;
    }
  }
  *(uint *)((int)self + 8) = 0;
  *(char **)((int)self + 4) = buf + 1;
  buf[0] = 0;
  *(uint *)((int)self + 0xc) = cap;
  if (cap < oldlen) {
    oldlen = cap;
  }
  *(uint *)((int)self + 8) = oldlen;
  buf[oldlen + 1] = 0;
  return buf + 1;
}
