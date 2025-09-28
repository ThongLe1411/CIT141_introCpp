#include <iostream>
using namespace std;

int main()
{
  // when declaring an array, you need to specify the number of elements in the array
  string cars[4] = {"volvo", "bmw", "Tesla", "Toyota"};
  cars[0] = "Ford"; // change the component;

  int n = sizeof(cars) / sizeof(cars[0]); // sizeof(cars[0]);
  // sizeof return the number of bits
  cout << n << endl;

  int arrayLength = sizeof(cars); // Get the length of an array

  for (int i = 0; i <= arrayLength; i++) // Listing array elements
  {
    cout << cars[i] << "\n";
  } // expect output : ford \n bmw \n Tesla \n Toyota
}
