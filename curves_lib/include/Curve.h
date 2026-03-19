#pragma once

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

    virtual Point3D getPoint(double t) const = 0;

    virtual Point3D getDerivative(double t) const = 0;
};

