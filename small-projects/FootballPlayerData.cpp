#include <iostream>
#include <iomanip>
#include<string>
#include <fstream>
using namespace std;

const int NO_OF_PLAYERS = 10; 

struct footballPlayerType{
    string name; 
    string position;
    int numOfTouchdowns; 
    int numOfCatches; 
    int numOfPassingYards; 
    int numOfReceivingYards;
    int numOfRushingYards; 
};
//function definition
void showMenu(); 
void getData(ifstream& inf, footballPlayerType list[], int length); 
void printPlayerData(footballPlayerType list[], int length, int playerNum); 
void printData(footballPlayerType list[], int length); 
void saveData(ofstream& outF, footballPlayerType list[], int length); 
int searchData(footballPlayerType list[], int length, string n); 
void updateTouchDowns(footballPlayerType list[], int length, int tDowns, int playerNum); 
void updateCatches(footballPlayerType list[], int length, int catches, int playerNum); 

void updatePassingYards(footballPlayerType list[], int length, int passYards, int playerNum); 
void updateReceivingYards(footballPlayerType list[], int length, int reYards, int playerNum); 
void updateRushingYards(footballPlayerType list[], int length, int rushYards, int playerNum); 

int main() {
    // Write your main here
    footballPlayerType bigGiants[10]; 
    int numberOfPlayers = 10; 
    int choice; 
    string name; 
    int playerNum; 
    int numOfTouchdowns; 
    int numOfCatches; 
    int numOfPassingYards; 
    int numOfReceivingYards;
    int numOfRushingYards; 

    ifstream inFile; 
    ofstream outFile; 

    inFile.open("Ch9_Ex7Data.txt");

    if(!inFile){
        cout << "Input file does not exist. Program terminates!" << endl;
        return 1; 
    }
    getData(inFile, bigGiants, numberOfPlayers);
    showMenu();
    cin >> choice; 
    cout << endl;
    while(choice != 99){
        switch(choice){
            case 1: 
                cout << "Enter player's name: "; 
                cin >> name; 
                cout << endl;

                playerNum = searchData(bigGiants, numberOfPlayers, name); 
                printPlayerData(bigGiants, numberOfPlayers, playerNum); 
                break; 
            case 2: 
                printData(bigGiants, numberOfPlayers); 
                break;
            case 3: 
                cout << "Enter player's name: "; 
                cin>> name; 
                cout << endl;
                playerNum = searchData(bigGiants, numberOfPlayers, name); 

                cout << "Enter number of touch downs to be added: "; 
                cin>> numOfTouchdowns; 
                cout << endl;

                updateTouchDowns(bigGiants, numberOfPlayers, numOfTouchdowns, playerNum); 
                break; 
            case 4: 
                cout << "Enter player's name: "; 
                cin>> name; 
                cout << endl;
                playerNum = searchData(bigGiants, numberOfPlayers, name); 

                cout << "Enter number of catches to be added: "; 
                cin>> numOfCatches; 
                cout << endl;

                updateCatches(bigGiants, numberOfPlayers, numOfCatches, playerNum);
                break; 
            case 5: 
                cout << "Enter player's name: "; 
                cin>> name; 
                cout << endl;
                playerNum = searchData(bigGiants, numberOfPlayers, name); 

                cout << "Enter number of passing yards to be added: "; 
                cin>> numOfPassingYards; 
                cout << endl;

                updateCatches(bigGiants, numberOfPlayers, numOfPassingYards, playerNum);
                break; 
            case 6: 
                cout << "Enter player's name: "; 
                cin>> name; 
                cout << endl;
                playerNum = searchData(bigGiants, numberOfPlayers, name); 

                cout << "Enter number of receiving yards to be added: "; 
                cin>> numOfReceivingYards; 
                cout << endl;

                updateCatches(bigGiants, numberOfPlayers, numOfReceivingYards, playerNum);
                break; 
            case 7: 
                cout << "Enter player's name: "; 
                cin>> name; 
                cout << endl;
                playerNum = searchData(bigGiants, numberOfPlayers, name); 

                cout << "Enter number of rushing yards to be added: "; 
                cin>> numOfRushingYards; 
                cout << endl;

                updateCatches(bigGiants, numberOfPlayers, numOfRushingYards, playerNum);
                break; 
            case 99: 
                break;
            default: 
                cout << "Invalid selection. " << endl; 
        } 
    }
        char response; 
        cout << "Would you like to save data: (y,Y/n,N) "; 
        cin >> response;
        cout << endl;
        if(response == 'y' || response == 'Y'){
            saveData(outFile, bigGiants, numberOfPlayers); 
        }
    return 0;
}

void showMenu(){
    cout << "Select one of the following options: "<< endl;
    cout << "1: To print a player's data" << endl;
    cout << "2: To print the entire data" << endl;
    cout << "3: To update a player's touch downs" << endl;
    cout << "4: To update a player's number of catches" << endl;
    cout << "5: To update a player's passing yards" << endl;
    cout << "6: To update a player's receiving yards" << endl;
    cout << "7: To update a player's rushing yards" << endl;
    cout << "99: To quit the program" << endl;
}
void getData(ifstream&  inf, footballPlayerType list[], int length){
    for(int i = 0; i<length; i++){
        inf >> list[i].name >> list[i].position 
            >> list[i].numOfTouchdowns
            >> list[i].numOfCatches
            >> list[i].numOfPassingYards
            >> list[i].numOfReceivingYards
            >> list[i].numOfRushingYards; 
    }
}

void printPlayerData(footballPlayerType list[], int length, int playerNum){
    if(0 <= playerNum && playerNum < length){
        cout << "Name: " << list[playerNum].name
            << "Position: " << list[playerNum].position
            << "Touch Downs: " << list[playerNum].numOfTouchdowns
            << "Number of Catches: " << list[playerNum].numOfCatches
            << "Passing Yards: " << list[playerNum].numOfPassingYards
            << "Receving Yards: " << list[playerNum].numOfReceivingYards
            << "Rushing Yards: " << list[playerNum].numOfRushingYards;
    }
    else{
        cout << "Invalid player number. " << endl << endl;
    }
}
void printData(footballPlayerType list[], int length){
    cout << left << setw(10) << "Name" 
        << setw(14) << "Position" 
        << setw(12) << "Touch Downs" 
        << setw(9) << "Catches" 
        << setw(9) << "Passing Yards" 
        << setw(9) << "Receiving Yards" 
        << setw(9) << "Rushing Yards" ;
}
void saveData(ofstream& outF, footballPlayerType list[], int length){
    outF.open("Ch_Ex7Output.txt");
    for(int i =0; i<length; i++){
        outF << list[i].name
        << list[i].position
        << list[i].numOfTouchdowns
        << list[i].numOfCatches
        << list[i].numOfPassingYards
        << list[i].numOfReceivingYards
        << list[i].numOfRushingYards;
    }
}
int searchData(footballPlayerType list[], int length, string n){
    for(int i=0; i<length; i++){
        if(list[i].name == n)
            return 1; 
    }
    return -1; 
}
void updateTouchDowns(footballPlayerType list[], int length, int tDowns, int playerNum){
    if(0<= playerNum && playerNum < length)
        list[playerNum].numOfTouchdowns += tDowns;
    else
        cout << "Invalid player number. " << endl;
}
void updateCatches(footballPlayerType list[], int length, int catches, int playerNum){
    if(0<= playerNum && playerNum < length)
        list[playerNum].numOfCatches += catches;
    else
        cout << "Invalid player number. " << endl;
}
void updatePassingYards(footballPlayerType list[], int length, int passYards, int playerNum){
    if(0<= playerNum && playerNum < length)
        list[playerNum].numOfPassingYards += passYards;
    else
        cout << "Invalid player number. " << endl;
}
void updateReceivingYards(footballPlayerType list[], int length, int reYards, int playerNum){
    if(0<= playerNum && playerNum < length)
        list[playerNum].numOfReceivingYards += reYards;
    else
        cout << "Invalid player number. " << endl;
}
void updateRushingYards(footballPlayerType list[], int length, int rushYards, int playerNum){
    if(0<= playerNum && playerNum < length)
        list[playerNum].numOfRushingYards += rushYards;
    else
        cout << "Invalid player number. " << endl;
}
