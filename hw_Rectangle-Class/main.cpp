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
     double length = 0.0;
     double width = 0.0;
    
  Rectangle; // using default constructor
    try {
      getInput();
    } 
    catch (const char* msg){
      std::cerr << msg << std::endl;
    }
    
    Rectangle.setLength(length);
    Rectangle.setWidth(width);
    
    std::cout << "The area of your rectangle is " << Rectangle.calculateArea() << std::endl;
    std::cout << "The perimeter of your rectangle is " << Rectangle.calculatePerimeter() << std::endl;
    
    return 0;
} 
// END OF MAIN

//Function Declarations
void getInput(){
  std::cout << "What is the length of the rectangle you want to calculate?\n";
  std::cin >> length;
  std::cout << "What is the width of the rectangle you want to calculate?\n";
  std::cin >> width;
}