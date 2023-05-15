#include "Cowboy.hpp"
#include "Character.cpp"

namespace ariel
{
    Cowboy::Cowboy(int ballsNUm)
    {
        this->ballsNum = ballsNUm;
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
