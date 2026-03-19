#pragma once 

#include "Curve.h"
#include <cmath>

class Circle : public Curve
{
private:

    double radius;  // Circle radius

public:
    // Constructor with radius validation
    Circle(double r);

    // Implementation of base class methods
    Point3D getPoint(double t) const override;
    Point3D getDerivative(double t) const override;

    // Method for getting the radius
    double getRadius() const;
};
