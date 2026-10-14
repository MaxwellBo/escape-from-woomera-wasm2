
/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_100fa640;
  if (*(int *)(this + 8) != 0) {
    FUN_100c8ce6(*(undefined **)(this + 4));
  }
  return;
}

