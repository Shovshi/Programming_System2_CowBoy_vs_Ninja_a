#pragma once
#include "Ninja.cpp"

namespace ariel 
{
    class OldNinja: public Ninja
    {
        public:
        // Constructor
        OldNinja(std::string name , Point location);
    };
}