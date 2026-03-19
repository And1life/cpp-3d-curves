#pragma once

#include "Curve.h"
#include <cmath>

class Ellipse : public Curve
{
private:
    double radiusX;
    double radiusY;

public:
    // Constructor with radius validation
    Ellipse(double rx, double ry);

    // Implementation of base class methods
    Point3D getPoint(double t) const override;
    Point3D getDerivative(double t) const override;

    // Radius along the X axis
    double getRadiusX() const;
    // Radius along the Y axis
    double getRadiusY() const;
};
