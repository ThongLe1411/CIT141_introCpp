#include <iostream>

using namespace std;
bool isPalindrome(string str) 
{
int length = str.length(); 
for (int i = 0; i < length / 2; i++) {
    str[i] = std::tolower(str[i]);
    if (str[i] != str[length - 1 - i]) {
         return false;
    } // if    
  } // for loop
 return true;
}// isPalindrome
int main() {
    // Write your main here
    string str; 
    cout << "Enter your string: "; 
    cin >> str; 

    if(isPalindrome(str) == 1)  
        cout << isPalindrome(str) << " is a palindrome";
    else
        cout << isPalindrome(str) << " is not a palindrome";
    return 0;
}
