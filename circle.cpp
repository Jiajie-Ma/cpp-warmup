// Name: Jason(Jiajie) Ma
// Date: Feb. 21, 2021

// circle.cpp implements Circle class


#include "circle.h"
#include <math.h>

// default constructor
Circle::Circle(){ radius = 0; } 

// constructor taking a radius as argument
Circle::Circle(float r){ 
    try{
      if (r < 0){
          throw "WARNING: radius of a circle is supposed to be nonnegative!";
      }
   } catch (const char* msg) {
      std::cout << msg << std::endl;
   }

    radius = r; 
} 

// copy constructor
Circle::Circle(const Circle& obj){ radius = obj.radius; }

// assignment operator
void Circle::operator=(const Circle& obj){ radius = obj.radius; }

// output stream operator
std::ostream& operator<<( std::ostream& output, const Circle& obj ){
    output << obj.radius;
    return output;
}

// add operator
Circle Circle::operator+(const Circle& obj){ 
    Circle circle;
    circle.radius = this->radius + obj.radius;
    return circle;
}

// accessor for radius
float Circle::getRadius(){ return radius; }

// mutator for radius
void Circle::setRadius(float r){ radius = r; }

// method for computing and returning the area
float Circle::computeArea(){ return M_PI * radius * radius; }

// destructor (no memory needs to be free)
Circle::~Circle(){} 

