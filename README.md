/*****
 * Created by Ivo Georgiev on 8/25/15.
 * Edited by Julian Abbott-Whitley 8/30/2015
 * CSCI 2312 Intermediate Programming
 * University of Colorado Denver
 * 1:00 PM T-Th
 * ***/

_working with objects_

* * *

Point class for creating and working with points in three dimensional space

Included C++ files:
<tt>Point.h</tt>
<tt>Point.cpp</tt>
<tt>pa1.cpp</tt>

Below is the source code for <tt>Point.h</tt>

```c++
// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

    // Auxiliary methods
    double distanceTo(const Point &) const;              // Calculate distance between two point

};

#endif // __point_h
```

We can _instantiate_, or create an instance of, our class anywhere in the rest of our code by calling any of the constructors we have defined:

```c++ 
Point myPoint;            // Calls Point::Point()
Point myOtherPoint(5, 3, 0); // Calls three-argument constructor Point::Point(double, double, double)
```

Compiler information:

```
g++ -Wall pa1.cpp Point.cpp -o pa1
```

Note:
*   <tt>g++</tt> is the GNU C++ compiler.
*   <tt>-Wall</tt> means "output ALL warnings." (If you see any warnings, be sure to fix them.)
*   Next comes the list of source files. (You don't list header files here. They are included by the source files.) The only new part here is that we have _two_ files: <tt>lab1.cc</tt> and <tt>Point.cc</tt>.
*   <tt>-o</tt> specifies the output file. In this case, we are making a program called <tt>lab1</tt>.

CLion uses CMake to create a makefile for your architecture. It uses the directives in the CMakeLists.txt file which can be found in your project's directory. The file looks like this

```
cmake_minimum_required(VERSION 3.2)
project(pa1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Point.cpp PA1.cpp)
add_executable(pa1 ${SOURCE_FILES})
```


In CLion, you first have to build (Run-->Build) and then run (Run-->Run 'PA1') your project. Any output will appear in the built-in console.

7.  Go back and test <tt>computeArea</tt> with several boundary and/or extreme cases to make sure your implementation is robust for all triangles, including degenerate ones. Things you might try:

*   Triangles with no area - all three points on the same line
*   Triangles where two points are the same
*   Triangles where all three points are the same
*   Triangles with negative coordinate values
*   etc.



* * *

<font size="-1">ACKNOWLEDGEMENT: Modelled after CS11 Lab 1 at Caltech.</font>

<font size="-1">Some content Copyright (C) 2004-2010, California Institute of Technology.</font>
