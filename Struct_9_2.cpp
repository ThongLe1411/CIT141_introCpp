#include <iostream>
#include <iomanip>
#include<string>
#include <fstream>
using namespace std;

const int NO_OF_STUDENTS = 20; 
struct studentType{
    string studentFName; 
    string studentLName; 
    int testScore; 
    char grade; 
};

void getData(ifstream& inFile, studentType sList[], int listSize); 
void calculateGrade(studentType sList[], int listSize); 
int highestScore(const studentType sList[], int listSize);
void printResult(ofstream& outFile, const studentType sList[], int listSize); 
int main() {
    // Write your main here
    ifstream inData; 
    ofstream outData; 
    studentType studentList[NO_OF_STUDENTS]; 

    inData.open("Ch9_Ex2Data.txt"); 
    if(!inData){
        cout << "The input file does not exist. Program terminates!" << endl;
        return 1; 
    }
    outData.open("Ch9_Ex2Out.txt");
    if(!outData){
        cout << "cannot open the output file. Program terminates! "<< endl;
        return 1; 
    }
    
    getData(inData, studentList, NO_OF_STUDENTS); 
    calculateGrade(studentList, NO_OF_STUDENTS); 
    printResult(outData, studentList, NO_OF_STUDENTS); 
    return 0;
}

void getData(ifstream& inFile, studentType sList[], int listSize){
    for(int i = 0; i< listSize; i++){
        inFile >> sList[i].studentFName >> sList[i].studentLName >> sList[i].testScore; 
    }
}

void calculateGrade(studentType sList[], int listSize){
    for(int i= 0; i <listSize; i++){
        switch (sList[i].testScore /10)
        {
        case 10:
        case 9:
            sList[i].grade = 'A';  
            break;
        case 8:
            sList[i].grade = 'B';  
            break;
        case 7:
            sList[i].grade = 'C';  
            break;
        case 6:
            sList[i].grade = 'D';  
            break;
        case 5: 
        case 4: 
        case 3: 
        case 2: 
        case 1: 
            sList[i].grade = 'F';
            break;
        }
    }
}
int highestScore(const studentType sList[], int listSize){
    int hScore = sList[0].testScore; 
    for(int i = 0; i<listSize; i++){
        if(hScore < sList[i].testScore)
        hScore = sList[i].testScore; 
    }
    return hScore; 
}
void printResult(ofstream& outFile, const studentType sList[], int listSize){
    int maxScore = highestScore(sList, listSize);
    int i; 
     
    outFile << setw(15) << "Student Name        "
            << setw(10) << "Test Score" 
            << setw(7) << "Grade"<< endl;
    for(i =0; i<listSize; i++){
        outFile << left << setw(25) << sList[i].studentLName + ", " + sList[i].studentFName
                << right << " " << setw(5) << sList[i].testScore
                << setw(6) << " " << sList[i].grade << endl;
    }
    outFile << endl << "Highest Test Score: " << maxScore << endl;
    outFile << "Students having the highest test score:" << endl;
    for(i =0; i< listSize; i++){
        if(sList[i].testScore == maxScore){
            outFile << sList[i].studentLName + " , " + sList[i].studentFName << endl;
        }
    }
}
