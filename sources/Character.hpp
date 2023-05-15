#pragma once
#include <iostream>
#include "Point.hpp"
using namespace std;

namespace ariel
{
    class Character{
    
    private:
    Point location;
    int _hit;
    std:: string name;

    public:
    
    // Constructors
    Character(Point location , int hit , std::string name);
    Character();

    // Class functions
    bool isAlive();
    double distance(Character &other);
    void hit(int num);
    std::string getName();
    Point getLocation();
    std::string print();

    };
}