#include <iostream>
using namespace std;

int doubleGame(int x)
{
  return 2 * x;
}
int main()
{
  for (int i = 1; i <= 5; i++)
  {
    cout << "Double of " << i << " is " << doubleGame(i) << "\n";
  }
  return 0;
}
