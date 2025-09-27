#include <iostream>

using namespace std;

bool isPalindrome(string str); //function declaration
int main() {
    string str; 
    cout << "Enter your string: "; 
    cin >> str; //input

    if(isPalindrome(str) == 1)  
        cout << str << " is a palindrome";
    else
        cout << str << " is not a palindrome";
    //output
    return 0;
}
bool isPalindrome(string str) 
{
    int length = str.length(); 
    char ch1, ch2;
    for (int i = 0; i < length / 2; i++) {
        
    //Version 1: compare from outside to inside (work with odd and even length)
    ch1 = tolower(str[i]);
    ch2 = tolower( str[length - 1 - i]);
    /* 
    ch1 = toupper(str[length / 2 - 1 - i]);
    ch2 = toupper(str[length / 2 + i]);
    Version 2: compare from inside to outside 
    I dont know but it seems like ver2 only works with words whose even length
    */
    if (ch1 != ch2) { //compare two symmetric words from outside to inside
         return false;
    } // if    
  } // for loop
 return true;
}// isPalindromeint main() {
