#include <iostream>
int reverseDigit(int num); // function declare
using namespace std;

int main() {
    // Write your main here
    int a; 
    int num; 
    cout << "Enter your number: "; 
    cin >> num; 
    reverseDigit(num); 
    cout << "The value of reverseDigit(" << num << ") is "<< reverseDigit(num);
    return 0;
}

int reverseDigit(int num){
    int reverse = 0; 
    int remainder = 0; 
    bool isNegative = false; 
    if(num < 0){
        num = -num; 
        isNegative = true; 
    }
    while(num != 0){  
        remainder = num%10; 
        reverse = reverse * 10 + remainder;
        num = num /10; 
    }
    if(isNegative) reverse = -reverse; 
    return reverse;
}
