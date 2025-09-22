#include <iostream>

using namespace std;

bool isPalindrome();
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
bool isPalindrome(string str) 
{
    int length = str.length(); 
    char ch1, ch2;
    for (int i = 0; i < length / 2; i++) {
    // str[i] = std::tolower(str[i]);
    ch1 = tolower(str[i]);
    ch2 = tolower( str[length - 1 - i]);
    if (ch1 != ch2) {
         return false;
    } // if    
  } // for loop
 return true;
}// isPalindromeint main() {
