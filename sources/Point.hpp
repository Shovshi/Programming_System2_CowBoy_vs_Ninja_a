#pragma once
#include <iostream>
using namespace std;

namespace ariel
{
    class Point{
    
    private:
    double x;
    double y;

    public:
    Point(double x , double y);
    Point();
    double distance(Point other);
    void print();
    Point moveTowards(Point source , Point dest , double dis);
    double getX();
    double getY();
    };
}