#pragma once
#include <iostream>
#include "Point.cpp"
#include "Character.cpp"
#include "Cowboy.cpp"
#include "Ninja.cpp"
#include <vector>
using namespace std;

namespace ariel
{
    class Team{
    
    private:
    Character *leader;
    vector <Character> team;

    public:
    Team(Character *leader);
    ~Team();
    void add(Character *character);
    void attack(Team *enemy);
    int stillAlive();
    void print();

    };
}