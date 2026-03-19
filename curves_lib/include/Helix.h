#pragma once 

#include "Curve.h"
#include <math.h>

class Helix : public Curve
{
private:
    double radius;
    double step;

public:
    Helix(double r, double s);

    Point3D getPoint(double t) const override;
    Point3D getDerivative(double t) const override;

    double getRadius() const; 
    double getStep() const;

};
