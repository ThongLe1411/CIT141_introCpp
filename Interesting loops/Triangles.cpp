#include <iostream>
using namespace std;
// Global variable
char op;
int num;

// function declaration:
char myIntro(char op);
int myPrintingFunction(int num);
int myRightTriangle(int num);
int myReverseRightTriangle(int num);

int main()
{
  ;
  cout << "Enter your number: \n";
  cin >> num;

  cout << "Enter 1, 2, 3 to choose the one of the performance of for loop () \n";
  cout << "1. Printing from 0 to the 'num' \n";
  cout << "2. Printing the right triangle \n";
  cout << "3. Printing the reverse right triangle \n ";

  cin >> op;
  switch (op)
  {
  case '1':
    myPrintingFunction(num); // print from 0 to the number entered
    break;
  case '2':
    myRightTriangle(num); 
    // print a right triangle with the number entered as the number of the diagonal
    break;
  case '3':
    myReverseRightTriangle(num);
    break;
  default:
    cout << "It was not a valid input!";
    break;
  }
  return 0;
}

// function definition:
int myPrintingFunction(int num)
{
  cout << "Priting from 0 to your number: \n";
  for (int i = 0; i <= num; i++)
  {
    cout << i << endl;
  }
}
int myRightTriangle(int num)
{
  for (int i = 0; i <= num; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
int myReverseRightTriangle(int num)
{
  for (int i = 0; i <= num; i++)
  {
    for (int j = num; j > i; j--)
    {
      cout << "#";
    }
    cout << endl;
  }
}
