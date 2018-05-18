/************************
* Matthew McCourry (CS131 SPR - 2018)
* Project notes, user stories and objectives
*
* (rectangle_calc) 
*  + test the Rectangle_H
*  + test the Rectangle.cpp
*************************/

/* Checklist 
* [x] User input for length and width
* [x] run calculation for Area and Perimeter
* [x] Output results
* [ ] Loop try catch
*/
// Start Header here
#include "Rectangle.h"
#include <iostream>

// Global namespace here

// START MAIN
int main() {
     double length = 1.0;
     double width = 1.0;
    
  Rectangle One; // using default constructor
    std::cout << "What is the length of the rectangle you want to calculate?\n";
    std::cin >> length;
    try {
      One.setLength(length);
    }
    catch (const char* msg){
      std::cerr << msg << std::endl;
    }

    std::cout << "What is the width of the rectangle you want to calculate?\n";
    std::cin >> width;
  std::cout << width;
    try {      
      One.setWidth(width);
    }
    catch (const char* msg){
      std::cerr << msg << std::endl;
    }


    
    std::cout << "The area of your rectangle is " << One.calculateArea() << std::endl;
    std::cout << "The perimeter of your rectangle is " << One.calculatePerimeter() << std::endl;
    
    return 0;
} 
// END OF MAIN

//Function Declarations
