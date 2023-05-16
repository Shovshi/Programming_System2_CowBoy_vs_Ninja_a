#include "Ninja.hpp"
#include "Character.hpp"
#include "Point.hpp"

namespace ariel
{
    Ninja::Ninja(std::string name, Point location, int _hit, int speed) : Character(location, _hit, name), speed(speed)
    {
    }

    void Ninja::move(Character *target)
    {
    }
    void Ninja::slash(Character *target)
    {
    }
}
