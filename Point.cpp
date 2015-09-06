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

// Accessor's
// Return the current values of private member variables

double Point::getX() const
{
  return x;
}

double Point::getY() const
{
  return y;
}

double Point::getZ() const
{
  return z;
}


// Auxiliary methods

/***
 * Calculate distance between the provided point and the location of the point calling the function
 ***/
double Point::distanceTo(const Point &b) const
{
  return sqrt((pow((b.getX() - this->x), 2) + pow((b.getY() - this->y), 2) + pow((b.getZ() - this->z), 2)));
}
