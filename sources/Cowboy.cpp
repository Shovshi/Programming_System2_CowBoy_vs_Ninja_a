#include "Cowboy.hpp"
#include "Character.hpp"
#include "Point.hpp"

namespace ariel
{
    Cowboy::Cowboy(std::string name , Point location): Character(location , 110 , name)
    {
        this->ballsNum = 6;
    } 

    void Cowboy::shoot(Character *enemy)
    {

    }

    bool Cowboy::hasboolets()
    {
        return true;
    }

    void Cowboy::reload()
    {
        ballsNum += 6;
    }

    int Cowboy::getBallsNum()
    {
        return ballsNum;
    }
    char Cowboy::getType()
    {
        return type;
    }
}
