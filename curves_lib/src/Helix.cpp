#include "Helix.h"
#include <stdexcept>

Helix::Helix(double r, double s) : radius(r), step(s)
{
    if ( r <= 0 )
    {
        throw std::invalid_argument("Radius must be positive.");
    }
}

Point3D Helix::getPoint(double t) const
{
    return { radius * cos(t), radius * sin(t), (step / (2 * M_PI)) * t };
}

Point3D Helix::getDerivative(double t) const
{
    return { -radius * sin(t), radius * cos(t), step / (2 * M_PI) };
}

double Helix::getRadius() const
{
    return radius;
}

double Helix::getStep() const
{
    return step;
}
