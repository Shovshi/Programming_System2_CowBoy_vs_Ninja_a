#pragma once
#include "Character.cpp"

namespace ariel
{
    class Cowboy : public Character
    {

    char type = 'C';
    int ballsNum;

    // Constructors
    Cowboy(int ballsNum);
    Cowboy();
    ~Cowboy();


    void shoot(Character *enemy);
    bool hasboolets();
    void reload();
    char getType();
    int getBallsNum();

    };
}