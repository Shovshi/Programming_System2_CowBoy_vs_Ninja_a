#include "Point.hpp"
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
        std::ostringstream oss;
        oss << "The name of the character: " << this->getName() << " , The num of self_Hit: " << this->_hit() << " , The location of the character is: ";
        (this->getLocation()).print();
        return oss.str();
    }
    


}