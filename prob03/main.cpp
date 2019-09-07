// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
 {
int height_inches, height_feet, height_convert;

std::cout << "Please enter the person's height in inches ";
std::cin >> height_inches;

height_feet= height_inches/ 12;
height_convert= height_inches% 12;






std::cout << "That person is " << height_feet << "\'"<< height_convert << "\"";

  return 0;
}
