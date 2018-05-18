/************************
* Matthew McCourry (CS131 SPR - 2018)
* Project notes, user stories and objectives
*
* (rectangle_calc) 
*  + test the Rectangle_H
*  + test the Rectangle.cpp
*************************/

/* Checklist 
* [ ] User input for length and width
* [ ] run calculation for Area and Perimeter
* [ ] Output results
*/
// Start Header here
#include "Rectangle.h"
#include <iostream>

// Global namespace here
  void getInput();

// START MAIN
int main() {
     double length = 1.0;
     double width = 1.0;
    
  Rectangle One; // using default constructor
    try {
      getInput();
    } 
    catch (const char* msg){
      std::cerr << msg << std::endl;
    }
    
    One.setLength(length);
    One.setWidth(width);
    
    std::cout << "The area of your rectangle is " << One.calculateArea() << std::endl;
    std::cout << "The perimeter of your rectangle is " << One.calculatePerimeter() << std::endl;
    
    return 0;
} 
// END OF MAIN

//Function Declarations
void getInput(){
  double length = 1.0;
  double width = 1.0;
  std::cout << "What is the length of the rectangle you want to calculate?\n";
  std::cin >> length;
  std::cout << "What is the width of the rectangle you want to calculate?\n";
  std::cin >> width;
}