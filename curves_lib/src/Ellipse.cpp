#include "Ellipse.h"
#include <stdexcept>

Ellipse::Ellipse(double rx, double ry) : radiusX(rx), radiusY(ry)
{
    if (rx <= 0 || ry <= 0)
    {
        throw std::invalid_argument("Radius must be positive.");
    }
}

Point3D Ellipse::getPoint(double t) const
{
    return { radiusX * cos(t), radiusY * sin(t), 0.0 };
}

Point3D Ellipse::getDerivative(double t) const
{
    return { -radiusX * sin(t), radiusY * cos(t), 0.0 };
}

double Ellipse::getRadiusX() const
{
    return radiusX;
}

double Ellipse::getRadiusY() const
{
    return radiusY;
}