#include <Virus.hpp>

class Sandbox : public Virus::Application
{
  public:
    Sandbox () {}
    ~Sandbox () {}
};

Virus::Application *
Virus::CreateApplication ()
{
    return new Sandbox ();
}
