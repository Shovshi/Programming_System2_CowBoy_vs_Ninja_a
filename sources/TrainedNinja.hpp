#pragma once
#include "Ninja.cpp"

namespace ariel 
{
    class TrainedNinja: public Ninja
    {
        public:
        // Constructor
        TrainedNinja(std::string name , Point location);
    };
}