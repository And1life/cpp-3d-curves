#pragma once

#include "Curve.h"
#include <math.h>

class Ellipse : public Curve
{
private:
    double radiusX;
    double radiusY;

public:
    Ellipse(double rx, double ry);

    Point3D getPoint(double t) const override;
    Point3D getDerivative(double t) const override;

    double getRadiusX() const;
    double getRadiusY() const;
};
