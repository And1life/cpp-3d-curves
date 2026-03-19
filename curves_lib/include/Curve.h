#pragma once

// Structure for 3D point
struct Point3D
{
    double x;
    double y;
    double z;
};

class Curve
{

public:

    virtual ~Curve() = default;

    // Method for getting a 3D point on a curve by parameter t
    virtual Point3D getPoint(double t) const = 0;

    // Method for obtaining the first derivative (vector) with respect to parameter t
    virtual Point3D getDerivative(double t) const = 0;
};

