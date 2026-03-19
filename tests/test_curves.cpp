#include <gtest/gtest.h>
#include "Circle.h"
#include "Ellipse.h"
#include <cmath>

TEST(CircleTest, ConstructorValidRadius) 
{
    EXPECT_NO_THROW(Circle(5.0));
}

TEST(CircleTest, ConstructorInvalidRadius) 
{
    EXPECT_THROW(Circle(-1.0), std::invalid_argument);
}

TEST(CircleTest, GetPoint)
{
    Circle circle(2.0);
    Point3D point = circle.getPoint(M_PI / 4);

    EXPECT_NEAR(point.x, 2.0 * cos(M_PI / 4), 1e-6);
    EXPECT_NEAR(point.y, 2.0 * sin(M_PI / 4), 1e-6);
    EXPECT_EQ(point.z, 0.0);
}

TEST(CircleTest, GetDerivative) {
    Circle circle(2.0);
    Point3D derivative = circle.getDerivative(M_PI / 4);

    EXPECT_NEAR(derivative.x, -2.0 * sin(M_PI / 4), 1e-6);
    EXPECT_NEAR(derivative.y, 2.0 * cos(M_PI / 4), 1e-6);
    EXPECT_EQ(derivative.z, 0.0);
}

TEST(CircleTest, GetRadius) {
    Circle circle(3.0);
    EXPECT_EQ(circle.getRadius(), 3.0);
}

TEST(EllipseTest, ConstructorValidRadii) 
{
    EXPECT_NO_THROW(Ellipse(3.0, 2.0));
}