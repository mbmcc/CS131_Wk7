/************************
* Matthew McCourry (CS131 SPR - 2018)
* Project notes, user stories and objectives
*
* (Rectangle Class) 
*  + Create a class Rectangle with attributes length and width, 
*  + each of which defaults to 1. 
*  + Provide member functions that calculate the perimeter and the area of the rectangle. 
*  + Also, provide set and get functions for the length and width attributes. 
*  + The set functions should verify that length and width are each 
*  floating-point numbers larger than 0.0 and less than 20.0) 
*************************/

/* Checklist 
* [ ] create class
* [ ] separate class and header files
* [ ] set length
* [ ] set width
* [ ] Default to 1
* [ ] validate inputs
* [ ] perimeter function
* [ ] area function
*/
//Start Header here
#include "Rectangle.h"

// **** Function Definitions ****
  // Default Constructor
  Rectangle::Rectangle(){
    x = 1.0;
    z = 1.0;
  }

  // Overlaod Constructor
  Rectangle::Rectangle(double length, double width){
    length = x;
    width = z;
  }

  // Destructor
  Rectangle::~Rectangle(){
    
  }
  /****************************************/
  
  // Accessor Functions

  // Mutator Functions
  void Rectangle::setLength(length){
    x = length;
  }
  void Rectangle::setWidth(width){
    z = width;
  }
  double Rectangle::calculateArea(){
    return x * z;
  }
  double calculateWidth(){
    return 2*x+2*z
  }