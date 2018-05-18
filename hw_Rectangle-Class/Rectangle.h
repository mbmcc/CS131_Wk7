#ifndef Rectangle_H
#define Rectangle_H


// Function Declarations of the class



class Rectangle { 
  public:
  
  // Default Constructor
  Rectangle();
  // Overlaod Constructor
  Rectangle(double, double);
  // Destructor
  ~Rectangle();
  /****************************************/
  
  // Accessor Functions

  // Mutator Functions
  void setLength(double);     // Sets the length (between 1 and 20)
  void setWidth(double);      // Sets the width (between 1 and 20)
  double calculateArea();       // Calculates Area (Length * Width)
  double calculatePerimeter();  // Calculates Perimeter (2*Length)+(2*Width)
  
  private: 
  // Member Variables
  double length;                     // The length of the rectangle
  double width;                     // The width of the rectangle
  
};

#endif