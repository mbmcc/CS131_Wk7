/************************
* Matthew McCourry (CS131 SPR - 2018)
* Project notes, user stories and objectives
*
* (Rectangle Class) 
*  + Create a class Rectangle with attributes length and width, 
*  + each of which defaults to 1. 
*  + Provide member functions that calculate the perimeter and the area of the rectangle. 
*  + Also, provide set and get functions for the length and width attributes. 
*  + The set functions should verify that x and width are each 
*  floating-point numbers larger than 0.0 and less than 20.0) 
*************************/

/* Checklist 
* [x] create class
* [x] separate class and header files
* [x] set length
* [x] set width
* [x] Default to 1
* [ ] validate inputs
* [x] perimeter function
* [x] area function
*/
//Start Header here
#include "Rectangle.h"

// **** Function Definitions ****
  // Default Constructor
  Rectangle::Rectangle(){
    length = 1.0;
    width = 1.0;
  }

  // Overlaod Constructor
  Rectangle::Rectangle(double x, double z){
    length = x;
    width = z;
  }

  // Destructor
  Rectangle::~Rectangle(){
    
  }
  /****************************************/
  
  // Accessor Functions

  // Mutator Functions
  void Rectangle::setLength(double x){
    if (0 > x < 20){      // We only want values between 1 and 20
      throw "Set a value between 1 and 20";      // If values aren't correct say so
      x = 1;      // and set the value to the default of 1
    }
    length = x;
    
  }
  void Rectangle::setWidth(double z){
    if (0 > z < 20){      // We only want values between 1 and 20
      throw "Set a value between 1 and 20";      // If values aren't correct say so
      z = 1;      // and set the value to the default of 1
    }

    width = z;
  }
  double Rectangle::calculateArea(){
    return length * width;
  }
  double Rectangle::calculatePerimeter(){
    return 2*length+2*width;
  }