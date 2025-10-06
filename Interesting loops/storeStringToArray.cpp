#include <iostream>
#include <string>
using namespace std;
void printUpperCase(string str, char list[], int size);
int main()
{
  // Write your main here
  string str;
  cout << "Enter your string: ";
  cin >> str;
  int size = str.length();
  char array[size];

  printUpperCase(str, array, size);
  return 0;
}
void printUpperCase(string str, char list[], int size)
{
  for (int i = 0; i < size; i++)
  {
    list[i] = toupper(str[i]);
    cout << list[i] << " ";
  }
}
