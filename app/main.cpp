#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <cmath>
#include "Curve.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Helix.h"

void printCurveInfo(const Curve& curve, double t)
{
    Point3D point = curve.getPoint(t);
    Point3D derivative = curve.getDerivative(t);
    std::cout << "-------------------------------\n";
    std::cout << "Curve Info at t = " << t << "\n";
    std::cout << "Point:    ("
              << point.x << ", "
              << point.y << ", "
              << point.z << ")\n";
    std::cout << "Derivative: ("
              << derivative.x << ", "
              << derivative.y << ", "
              << derivative.z << ")\n";
    std::cout << "-------------------------------\n\n";

}

int main(int argc, char const *argv[])
{
    std::vector<std::unique_ptr<Curve>> curves;    

    curves.push_back(std::make_unique<Circle>(2.0));
    curves.push_back(std::make_unique<Circle>(3.0));
    curves.push_back(std::make_unique<Ellipse>(3.0, 1.5));
    curves.push_back(std::make_unique<Helix>(1.0, 0.5));
    curves.push_back(std::make_unique<Circle>(1.5));
    curves.push_back(std::make_unique<Ellipse>(2.5, 1.0));
    curves.push_back(std::make_unique<Circle>(4.0));
    curves.push_back(std::make_unique<Helix>(2.0, 0.3));
    curves.push_back(std::make_unique<Circle>(5.0));

    const double t = M_1_PI / 4;
    std::cout << "\t=== All Curves ===\n";
    for (const auto &curve : curves)
    {
        printCurveInfo(*curve, t);
    }

    std::vector<Circle*> circles;
    for (const auto &curve : curves)
    {
        if (auto circle = dynamic_cast<Circle*>(curve.get()))
        {
            circles.push_back(circle);
        }
    }
    
    std::sort(circles.begin(), circles.end(), [](Circle* a, Circle* b) {
            return a->getRadius() < b->getRadius();
    });

    std::cout << "\t=== Sorted Circles ===\n";
    for (const auto &circle : circles)
    {
        std::cout << "Circle radius: " << circle->getRadius() << "\n";
    }
    
    double totalRadius = 0.0;
    for (const auto &circle : circles)
    {
        totalRadius += circle->getRadius();
    }
    std::cout << "\nTotal radius of all circles: " << totalRadius << "\n";
    

    return 0;
}
