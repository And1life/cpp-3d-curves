#include "Circle.h"
#include <stdexcept>

Circle::Circle(double r) : radius(r)
{
    if (r <= 0)
    {
        throw std::invalid_argument("Radius must be positive.");
    }   
}

Point3D Circle::getPoint(double t) const
{
    return { radius * cos(t), radius * sin(t), 0.0 };
}

Point3D Circle::getDerivative(double t) const
{
    return { -radius * sin(t), radius * cos(t), 0.0 };
}

double Circle::getRadius() const
{
    return radius;
}
