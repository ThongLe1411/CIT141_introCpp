#include <iostream>

using namespace std;
bool isVowel(char ch);

int main() {
    // Write your main here
    int numberOfVowel = 0;
    char ch;
    cout << "Enter a character: "; 
    cin >> ch; 
    cout << endl;

    while(ch != '\n'){ // counting the number of vowels in a sentence
        if(isVowel()) 
            numberOfVowel++; 
        cin.get(ch); 
    }
    //cout << ch << " is a vowel: " << isVowel(ch) << endl;
    return 0;
}
bool isVowel(char ch){ //verifying
    switch (ch)
    {
    case 'A': 
    case 'E': 
    case 'I': 
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true; 
        break;
    default:
        return false;
        break;
    }
}
