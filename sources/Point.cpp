#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <string>

namespace ariel
{

    // Constructors
    Point::Point(double x , double y)
    {
        this->x = x;
        this->y = y;
    }

    Point::Point()
    {
        
    }

    double Point::distance(Point other)
    {
        double dx = x - other.x;
        double dy = y - other.y;
        return std::sqrt(dx*dx + dy*dy);
    }

    std::string Point::print()
    {
        std::stringstream ss;
        ss << "(" << x << ", " << y << ")";
        return ss.str();
    }

    Point Point::moveTowards(Point source , Point dest , double dis)
    {
        double d = source.distance(dest);
        if (d <= dis)
        {
            return dest;
        }
        else
        {
            double ratio = dis / d;
            double newX = x + ratio * (dest.x - x);
            double newY = y + ratio * (dest.y - y);
            return Point(newX, newY);
        }
    }
}