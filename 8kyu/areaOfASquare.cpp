// Complete the function that calculates the area of the red square, when the length of the circular arc A is given as the input. Return the result rounded to two decimals.

// Graph

// Note: use the π value provided in your language (Math::PI, M_PI, math.pi, etc)

// My solution
#include <iostream>
#include <cmath>

double square_area(double A) {
// circle radius is equal to half of the length of sqaure's side
//  r = A / pi
  
  double r = ((2*A)/M_PI);
  double squared = r * r;
  squared = round(squared * 100)/100;
  return squared;
  
};

// calculating circle over square?
// for calculating square below..

// double square_area(double A) {
//     double squared = A * A;
//     double area = squared / (8 * M_PI);
//     return area;
// }

// other solutions
#define _USE_MATH_DEFINES
#include <cmath>

double square_area(double A) {
  return round(pow(2 * A / M_PI, 2) * 100) / 100;
};
