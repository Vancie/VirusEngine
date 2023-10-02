#pragma once

extern Virus::Application *Virus::CreateApplication ();

int
main (int argc, char **argv)
{
    auto app = Virus::CreateApplication ();
    app->Run ();
    delete app;
}
