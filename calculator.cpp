#include <iostream>
#include <iomanip>
using namespace std;
// declare functions for calculator program;
double circleArea(double radius);
double rectangleArea(double lenght, double width);
double cylinderVolume(double radius, double height);
double cylinderArea(double radius, double height);

const double PI = 3.14159; // constant are usually capitalized

int main()
{
  // declare local variable 
  double radius, height;
  double length, width;
  int choice;

  // round to 3 decimal places
  cout << fixed << showpoint << setprecision(3);
  cout << "******Welcome to calculator******* \n";
  cout << "1. Calculate the Area of a circle \n";
  cout << "2. Calculate the Area of a rectangle \n";
  cout << "3. Calculate the Volume of a cylinder \n";
  cout << "4. Calculate the Area of a cylinder \n";

  cout << "Enter 1, 2, 3, 4 to perform your calculation\n "
       << "Or enter -1 to terminate the program: ";
  // program input
  cin >> choice;

  while (choice != -1) // program output
  {
    switch (choice)
    {
    case 1:
      cout << "Enter the radius of your circle: ";
      cin >> radius;
      cout << "The circle area is: " << circleArea(radius) << " square units";
      break;
    case 2:
      cout << "Enter the length of your rectangle: ";
      cin >> length;
      cout << "\n Enter the width of your rectangle: ";
      cin >> width;
      cout << "The rectangle area is " << rectangleArea(length, width) << " square units";
      break;
    case 3:
      cout << "Enter the radius of your cylinder: ";
      cin >> radius;
      cout << "\n Enter the height of your cylinder: ";
      cin >> height;
      cout << "The Volume of the cylinder is: " << cylinderVolume(radius, height);
      break;
    case 4:
      cout << "Enter the radius of your cylinder: ";
      cin >> radius;
      cout << "\n Enter the height of your cylinder: ";
      cin >> height;
      cout << "The area of the cylinder is: " << cylinderArea(radius, height);
      break;
    default:
      cout << "Your input is not match with our program \n"
           << "Please enter again or -1 to terminate the program: ";
      cin >> choice;
      break;
    }
    cin >> choice;
  }
  return 0;
}
//functions' definition:
double circleArea(double radius)
{
  return radius * radius * PI;
}
double rectangleArea(double length, double width)
{
  return length * width;
}
double cylinderVolume(double radius, double height)
{
  return radius * radius * PI * height;
}
double cylinderArea(double radius, double height)
{
  return 2 * PI * radius * radius + 2 * PI * radius * height;
}
