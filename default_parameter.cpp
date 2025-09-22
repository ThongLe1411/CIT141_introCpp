#include <iostream>
using namespace std;

void myFunction(string country = "Norway")
{
  cout << "Your nationality is " << country << "\n";
}
void happyBirthday(string name, int age); // function prototype must be placed before the main function
int main()
{
  // function is a block of reuseable statements
  int age;
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << endl;
  cout << "Enter your age: ";
  cin >> age;
  happyBirthday(name, age); // function call
  cout << "Where are you from? \n";
  string country;
  cin >> country;
  myFunction(country);
}

void happyBirthday(string name, int age)
{
  std::cout << "Happy birthday to " << name << "\n"; // standard cout
  std::cout << "Happy birthday to " << name << "\n";

  std::cout << "You are now " << age << " \n\n";
}
