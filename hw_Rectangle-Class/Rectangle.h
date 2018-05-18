#ifndef Rectangle_H
#def Rectangle_H


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
  double setLength() const;     // Sets x, the length
  double setWidth() const;      // Sets z, the width
  double calculateArea();       // Calculates Area (Length * Width)
  double calculatePerimeter();  // Calculates Perimeter (2*Length)+(2*Width)
  
  private: 
  // Member Variables
  double x;                     // The length of the rectangle
  double z;                     // The width of the rectangle
  
};

#endif