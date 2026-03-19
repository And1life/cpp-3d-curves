#pragma once 

#include "Curve.h"
#include <math.h>

class Helix : public Curve
{
private:
    double radius;  // Spiral radius
    double step;    // Шаг спирали 

public:
    // Constructor with radius validation
    Helix(double r, double s);

    // Implementation of base class methods
    Point3D getPoint(double t) const override;
    Point3D getDerivative(double t) const override;

    // Methods for getting the radius and step
    double getRadius() const; 
    double getStep() const;

};
