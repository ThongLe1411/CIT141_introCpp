#include <iostream>
#include <iomanip>
using namespace std;

int smallestIndex(int list[], int size);
int largestIndex(int list[], int size);
void print(int list[], int size);
int main()
{
  // Write your main here
  int arraySize;
  cout << "Enter your array size: ";
  cin >> arraySize;
  cout << endl;
  int array[arraySize];
  cout << "Enter " << arraySize << " integers: ";
  for (int i = 0; i < arraySize; i++)
  {
    cin >> array[i];
    cout << endl;
  }

  print(array, arraySize);
  smallestIndex(array, arraySize);

  cout << "The position of the first occurrence of the smallest element in the list is: " << smallestIndex(array, arraySize) << endl;
  cout << "The smallest element in the list is: " << array[smallestIndex(array, arraySize)] << endl;

  cout << "The position of the first occurrence of the largest element in the list is: " << largestIndex(array, arraySize) << endl;
  cout << "The largest element in the list is: " << array[largestIndex(array, arraySize)];
  return 0;
}
void print(int list[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;
}
int smallestIndex(int list[], int size)
{
  int minIndex = 0;
  for (int i = 1; i < size; i++)
  {
    if (list[minIndex] > list[i])
    {
      minIndex = i;
    }
  }
  return minIndex;
}
int largestIndex(int list[], int size)
{
  int largestIndex = 0;
  for (int i = 0; i < size; i++)
  {
    if (list[largestIndex] <= list[i])
      largestIndex = i;
  }
  return largestIndex;
}
