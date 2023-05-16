#include "Character.hpp"
#include <cmath>

namespace ariel
{

    // Constructors
    Character::Character(Point location , int hit , std::string name)
    {
        this->location = location;
        this->_hit = hit;
        this->name = name;
    }

    // Class functions
    std::string Character::print()
    {
        std::string output = "Character Details:\n";
        output += "Name: " + name + "\n";
        output += "Hit Points: " + std::to_string(_hit) + "\n";
        output += "Location: " + location.print() + "\n";

        return output;
    }

    bool Character::isAlive()
    {
        return false;
    }

    double Character::distance(Character &other)
    {
        return 0;
    }


}
    

