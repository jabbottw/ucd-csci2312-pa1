#include <stdio.h>
#include <math.h>
#include "Point.h"

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point()
{
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ)
{
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point()
{
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX)
{
  x = newX;
}

void Point::setY(double newY)
{
  y = newY;
}

void Point::setZ(double newZ)
{
  z = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX()
{
  return x;
}

double Point::getY()
{
  return y;
}

double Point::getZ()
{
  return z;
}


// Auxiliary methods

/***
 * Calculate distance between two points
 ***/
double Point::distanceTo(Point &b)
{
  return sqrt((pow((b.getX() - this->x), 2) + pow((b.getY() - this->y), 2) + pow((b.getZ() - this->z), 2)));
}

/***
  * Calculates the area of a triangle using the three provided points of the triangle
  */
double Point::computeArea(Point &A, Point &B, Point &C)   // Calculate area of a triangle, given the three vertices
{
    double a = B.distanceTo(C);
    double b = A.distanceTo(C);
    double c = A.distanceTo(B);
    double s = (a + b + c) / 2;
    return sqrt(s * (s-a) * (s-b) * (s-c));

}