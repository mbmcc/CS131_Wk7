/************************
* Matthew McCourry (CS131 SPR - 2018)
* Project notes, user stories and objectives
*
* (Title) 
*  + Items
*  + Notes
*  + and 
*  + user stories
*  + to include
*************************/

/* Checklist 
* [ ] 
* [ ] 
* [ ] 
*/
// Start Header here
#include "Rectangle.h"
#include <iostream>

// Global namespace here
  getInput(unsigned double, unsigned double)

// START MAIN
int main() {
    unsigned double length = 0.0;
    unsigned double width = 0.0;
    
    try {
      getInput()
    } 
    catch (const char* msg){
      std::cerr << msg << endl;
    }
    
    Rectangle::setLenght(length);
    Rectangle::setWidth(width);
    
    std::cout << "The area of your rectangle is " << Rectangle::calculateArea() << endl;
    std::cout << "The perimeter of your rectangle is " << Rectangle::calculatePerimeter() << endl;
    
    return 0;
} 
// END OF MAIN

//Function Declarations
void getInput(length, width){
  std::cout << "What is the length of the rectangle you want to calculate?\n";
  std::cin >> length;
  std::cout << "What is the width of the rectangle you want to calculate?\n";
  std::cin >> width;
}