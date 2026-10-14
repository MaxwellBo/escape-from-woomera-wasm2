
/* Library Function - Single Match
    public: class exception & __thiscall exception::operator=(class exception const &)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

exception * __thiscall exception::operator=(exception *this,exception *param_1)

{
  if (this != param_1) {
    ~exception(this);
    FUN_100dc458(this,(int)param_1);
  }
  return this;
}

