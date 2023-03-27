/*8Define a pure abstract base class called BasicShape. The BasicShape class should have the following 
members: 
Private Member Variable: 
area, a double used to hold the shape's area. 
Public Member Functions: 
getArea. This function should return the value in the member variable area. 
calcArea. This function should be a pure virtual function. 
Next, define a class named Circle. It should be derived from the BasicShape class. It should have the 
following members: 
Private Member Variables: 
centerX, a long integer used to hold the x coordinate of the circle’s center. 
centerY, a long integer used to hold the y coordinate of the circle’s center. 
radius, a double used to hold the circle's radius. 
Public Member Functions: 
constructor—accepts values for centerX, centerY, and radius. Should call the overridden 
calcArea function described below. 
getCenterX—returns the value in centerX. 
getCenterY—returns the value in centerY. 
calcArea—calculates the area of the circle (area = 3.14159 * radius * radius) and stores the 
result in the inherited member area. 
Next, define a class named Rectangle. It should be derived from the BasicShape class. It should have 
the following members: 
Private Member Variables: 
width, a long integer used to hold the width of the rectangle. 
length, a long integer used to hold the length of the rectangle. 
Public Member Functions: 
constructor—accepts values for width and length. Should call the overridden calcArea function 
described below. 
getWidth—returns the value in width. 
getLength—returns the value in length. 
calcArea—calculates the area of the rectangle (area = length * width) and stores the result in 
the inherited member area.
After you have created these classes, create a driver program that defines a Circle object and a 
Rectangle object. Demonstrate that each object properly calculates and reports its area*/


// I devided into 3 files
// file BasicShape.h
// specification file for pure abstract base class named BasicShape
#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape
{
protected:
	double area;	// holds the shape's area
public:
	// accessor returns the value in the member variable area
	double getArea() const
	{
		return area;
	}

	// pure virtual function
	virtual void calcArea() = 0;
};

#endif


// file Circle.h

// specification file for the Circle class that is derived from the BasicShape class
#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"

class Circle : public BasicShape
{
private:
	long int centerX;	// holds the x coordinate of the circle's center
	long int centerY;	// holds the y coordinate of the circle's center
	double radius;		// holds the circle's radius
public:
	// constructor accepts values for centerX, centerY, and radius to calcuate the area
	Circle(long int cX, long int cY, double r)
	{
		centerX = cX;
		centerY = cY;
		radius = r;
		calcArea();
	}

	// accessor 
	long int getCenterX()
	{
		return centerX;
	}

	// accessor 
	long int getCenterY()
	{
		return centerY;
	}

	// overridden func from abstrat base class -calculates the area of a circle
	virtual void calcArea()
	{
		area = (3.14159 * radius * radius);
	}
};

#endif

// file Rectangle.h
// specification file for the Rectangle class that is derived from the BasicShape class
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"

class Rectangle : public BasicShape
{
private:
	long int width;		// holds the width of the rectangle
	long int length;	// holds the length of the rectangle

public:
	// constructor accepts values for width, length. then calculates area
	Rectangle(long int w, long int l)
	{
		width = w;
		length = l;
		calcArea();
	}

	// accessor
	long int getWidth() const
	{
		return width;
	}

	// accessor
	long int getLength() const
	{
		return length;
	}

	// overridden func from abstract base class- calculates the area of a rectangle
	virtual void calcArea() 
	{
		area = (length * width);
	}
};

#endif


// file main.cpp
#include "stdafx.h"
#include <iostream>
#include <iomanip> // for cout formatting
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
	// This is a Driver program
	// define a Circle object and a Rectangle object.
	// demonstrate that each object properly calculates and reports its area

	cout << setprecision(2) << fixed;

	// Circle object
	Circle clock(12,135,5);
	cout << "The area of your circle is: " << clock.getArea() << endl;

	// Rectangle object
	Rectangle boxSide(10, 12);
	cout << "The area of your rectangle is: " << boxSide.getArea() << endl;

	return 0;
}
