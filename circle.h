// Name: Jason(Jiajie) Ma
// Date: Feb. 21, 2021

// circle.h is the header file for Circle class

#pragma once
#include <iostream>

class Circle
{
public:
   Circle(); // default constructor
   Circle(float r); // constructor taking a radius as argument
   Circle(const Circle& obj); // copy constructor
   Circle& operator = (const Circle &obj); // assignment operator
   friend std::ostream &operator<<(std::ostream& output, const Circle& obj); // output stream operator
   Circle operator+(const Circle& obj); // add operator
   float getRadius(); // accessor for radius
   void setRadius(float r); // mutator for radius
   float computeArea(); // method for computing and returning the area
   ~Circle(); // destructor

private:
   float radius;
};

