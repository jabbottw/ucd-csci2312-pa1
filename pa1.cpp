/*****
 * Created by Ivo Georgiev on 8/25/15.
 * Edited by Julian Abbott-Whitley 8/30/2015
 * CSCI 2312 Intermediate Programming
 * University of Colorado Denver
 * 1:00 PM T-Th
 * ***/


#include <iostream>
#include <iomanip>
#include <math.h>
#include "Point.h"

using namespace std;

double computeArea(Point &, Point &, Point &);   // Calculate area of a triangle, given the three vertices

int main(void)
{
    Point A(0, 0, 0);
    Point B(0, 0, 10);
    Point C(10, 10, 0);

    cout << fixed << setprecision(2);
    cout << "\nSide a, Distance between points B and C: " << B.distanceTo(C) << endl;
    cout << "Side b, Distance between points A and C: " << A.distanceTo(C) << endl;
    cout << "Side c, Distance between points A and B: " << A.distanceTo(B) << endl;
    cout << "Area of points A, B, & C: " << computeArea(A, B, C) << endl;


    return 0;
}



/***
  * Static member function which calculates the area of a triangle using the three provided points
  */
double computeArea(Point &A, Point &B, Point &C)   // Calculate area of a triangle, given the three vertices
{
    double a = B.distanceTo(C);
    double b = A.distanceTo(C);
    double c = A.distanceTo(B);
    double s = (a + b + c) / 2;
    return sqrt(s * (s-a) * (s-b) * (s-c));
}