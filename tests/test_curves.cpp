#include <gtest/gtest.h>
#include "Circle.h"
#include "Ellipse.h"
#include "Helix.h"
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

TEST(EllipseTest, ConstructorValidRadius) 
{
    EXPECT_NO_THROW(Ellipse(3.0, 2.0));
}

TEST(EllipseTest, ConstructorInvalidRadius) 
{
    EXPECT_THROW(Ellipse(-1.0, 2.0), std::invalid_argument); 
    EXPECT_THROW(Ellipse(3.0, -1.0), std::invalid_argument); 
}

TEST(EllipseTest, GetPoint) 
{
    Ellipse ellipse(3.0, 2.0);
    Point3D point = ellipse.getPoint(M_PI / 4);

    EXPECT_NEAR(point.x, 3.0 * cos(M_PI / 4), 1e-6);
    EXPECT_NEAR(point.y, 2.0 * sin(M_PI / 4), 1e-6);
    EXPECT_EQ(point.z, 0.0);
}

TEST(EllipseTest, GetDerivative) 
{
    Ellipse ellipse(3.0, 2.0);
    Point3D derivative = ellipse.getDerivative(M_PI / 4);

    EXPECT_NEAR(derivative.x, -3.0 * sin(M_PI / 4), 1e-6);
    EXPECT_NEAR(derivative.y, 2.0 * cos(M_PI / 4), 1e-6);
    EXPECT_EQ(derivative.z, 0.0);
}

TEST(EllipseTest, GetRadius) 
{
    Ellipse ellipse(3.0, 2.0);
    EXPECT_EQ(ellipse.getRadiusX(), 3.0);
    EXPECT_EQ(ellipse.getRadiusY(), 2.0);
}

TEST(HelixTest, ConstructorValidParams) {
    EXPECT_NO_THROW(Helix(1.0, 0.5));
}

TEST(HelixTest, ConstructorInvalidRadius) 
{
    EXPECT_THROW(Helix(-1.0, 0.5), std::invalid_argument);
}

TEST(HelixTest, GetPoint) 
{
    Helix helix(1.0, 0.5);
    Point3D point = helix.getPoint(M_PI / 4);

    EXPECT_NEAR(point.x, 1.0 * cos(M_PI / 4), 1e-6);
    EXPECT_NEAR(point.y, 1.0 * sin(M_PI / 4), 1e-6);
    EXPECT_NEAR(point.z, (0.5 / (2 * M_PI)) * (M_PI / 4), 1e-6);
}

TEST(HelixTest, GetDerivative) 
{
    Helix helix(1.0, 0.5);
    Point3D derivative = helix.getDerivative(M_PI / 4);

    EXPECT_NEAR(derivative.x, -1.0 * sin(M_PI / 4), 1e-6);
    EXPECT_NEAR(derivative.y, 1.0 * cos(M_PI / 4), 1e-6);
    EXPECT_NEAR(derivative.z, 0.5 / (2 * M_PI), 1e-6);
}

TEST(HelixTest, GetParams) 
{
    Helix helix(1.0, 0.5);
    EXPECT_EQ(helix.getRadius(), 1.0);
    EXPECT_EQ(helix.getStep(), 0.5);
}