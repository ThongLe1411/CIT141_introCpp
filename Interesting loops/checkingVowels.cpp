#include <iostream> 
using namespace std;

//function declaration
bool isVowel(char ch);

int main(){
  int numOfVowels = 0; // counting how many vowels in the sequence
  char ch; 
  cout << "Enter your sequence : "; 
  cin >> ch; 
  while(ch != '\n'){ // examine the entered sequence
    if(isVowel(ch)) numOfVowels++; 
    cin.get(ch);
  }
  //Output
  if(numOfVowels > 0) cout << "The sequence has " << numOfVowels << " words"; 
  else cout << "The sequence has no vowels ";
  return 0; 
}

//function definition
bool isVowel(char ch){
  switch(ch){
    case 'A': 
    case 'a': 
    case 'I': 
    case 'i': 
    case 'E': 
    case 'e': 
    case 'O': 
    case 'o': 
    case 'U': 
    case 'u': 
      return true;
      break; 
    default: 
      return false
      break; 
  }
}
