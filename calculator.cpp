#include <iostream>
using namespace std;
const double PI = 3.14159;
double rectangle(double l, double w);
    double circle(double r);
    double cylinder(double bR, double h);
#include <iomanip>
int main()
{
    double r;
    double h;
    int choice;
    double l, w; 
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "This program can calculate the area of a rectangle, "
        << "the area of a circle, or volume of a cylinder." << endl;
    cout << "To run the program enter: " << endl;
    cout << "1: To find the area of rectangle." << endl;
    cout << "2: To find the area of a circle." << endl;
    cout << "3: To find the volume of a cylinder." << endl;
    cout << "-1: To terminate the program." << endl;
    cin >> choice;
    cout << endl;
    while (choice != -1)
    {
        switch (choice){
        case 1: 
            cout << "Enter the length and the width "
                 << "of the rectangle: ";
            cin >> l >> w;
            
              cout << "Area = " << rectangle(l, w)<<  endl;


            break;
        case 2:
            cout << "Enter the radius of the circle: ";
            cin >> r;
            cout << endl;
            cout << "Area = " << circle(r)
                 << endl;

            break;
        case 3:
            cout << "Enter the radius of the base and the "
                 << "height of the cylinder: ";
            cin >> r >> h;
            cout << endl;
            cout << "Volume = " << cylinder(r, h) 
                 << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            cin >> choice;
        }
        cin >> choice;
    }
    return 0;
 }
double rectangle(double l, double w)
{
    return l * w;
}
double circle(double r)
{
    return PI * r * r;
}
double cylinder(double bR, double h)
{
    return PI * bR * bR * h;
}
