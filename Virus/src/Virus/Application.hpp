
#pragma once

#include "Core.hpp"
namespace Virus
{
    class Application VIRUS_API
    {
      public:
        Application ();
        virtual ~Application ();
        void Run ();
        void Test ();
    };

    Application *CreateApplication ();
} // namespace Virus
