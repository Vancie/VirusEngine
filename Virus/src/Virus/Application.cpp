#
#include "Application.hpp"

#include <iostream>

namespace Virus
{
    Application::Application () {}
    Application::~Application () {}
    void
    Application::Run ()
    {
        std::cout << "VIRUS" << std::endl;
    }
    void
    Application::Test ()
    {
        std::cout << "Test" << std::endl;
    }

} // namespace Virus
