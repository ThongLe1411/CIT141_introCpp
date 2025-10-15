// Write your code here
#include<iomanip>
#include<iostream>
#include<string>
#include<studentType.h>

using namespace std;

void studentType::setData(string fn, string ln, char grade, int tScore, int prgScore, double gp){
    firstName = fn; 
    lastName = ln; 
    testScore = tScore; 
    programmingScore = prgScore; 
    setGrade(); 
    GPA = gp; 
}

void studentType::setFirstName(string fn){
    firstName = fn; 
}

void studentType::setLastName(string ln){
    lastName = ln; 
}

void studentType::setGrade(){
    int score - (testScore + programmingScore)/2; 
    if(score >= 90)
        courseGrade = 'A'; 
    else if(score >= 80)
        courseGrade = 'B'; 
    else if(score >= 70)
        courseGrade = 'C'; 
    else if(score >= 60)
        courseGrade = 'D';
    else
        courseGrade = 'F';     
}

void studentType::setTestScore(int tScore){
    testScore = tScore; 
}

void studentType::setPrgScore(int prgScore){
    programmingScore = prgScore; 
}

void studentType::setGPA(double gp){
    GPA = gp; 
}

string studentType::getFirstName() const{
    return firstName; 
}

string studentType::getLastName() const{
    return lastName; 
}

char studentType::getGrade() const {
    return courseGrade; 
}

int studentType::getTestScore() const{
    return testScore;    
}
int studentType::getProgScore() const{
    return programmingScore;    
}
double studentType::getGPA() const{
    return GPA;    
}

void studentType::print() const{
    cout << "Name: " << firstName << " " << lastname << '\n'; 
    cout << "Grade: " << courseGrade << '\n';
    cout << "Test score: " << testScore << '\n'; 
    cout << "Programming score: " << programmingScore << '\n'; 
    cout << "GPA: " << GPA << '\n'; 
}

studentType::studentType(string fn, string ln, char grade, int tScore, int prgScore, double gp){
    firstName = fn; 
    lastName = ln; 
    testScore = tScore; 
    programmingScore = prgScore; 
    setGrade(); 
    GPA = gp; 
}
