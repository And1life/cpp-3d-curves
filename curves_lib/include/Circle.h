#pragma once 

#include "Curve.h"
#include <math.h>

class Circle : public Curve
{
private:

    double radius;

public:
    
    Circle(double r);
    Point3D getPoint(double t) const override;
    Point3D getDerivative(double t) const override;
    double getRadius() const;
};
