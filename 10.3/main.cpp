#include <iostream>
#include <string>
#include "houseType.h"
using namespace std;

int main() {
    // Write your main here
    houseType newHouse("Ranch", 3, 2, 2, 2005, 1300, 185000, 150.5);
    
    
    newHouse.print();
    cout << "***************" << endl << endl;

    
    return 0;
}
