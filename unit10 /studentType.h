// Write your code here
#include<string>

using namespace std;

class studentType{
    public: 
        void setData(string fn = "", string ln = "", char grade = "*", int tScore = 0, int prgScore = 0, double gp = 0); 

        void setFirstName(string fn);
        void studentType::setLastName(string ln);
        void setGrade();
        void setTestScore(int tScore);
        void setPrgScore(int prgScore);
        void setGPA(double gp);

        string getFirstName() const;
        string getLastName() const;
        char getGrade() const;
        int getTestScore() const;
        int getProgScore() const;
        double getGPA() const;

        void print() const; 

        studentType(string fn = "", string ln = "", char grade = "*", int tScore = 0, int prgScore = 0, double gp = 0); 


    private: 
        firstName = fn; 
        lastName = ln; 
        testScore = tScore; 
        programmingScore = prgScore; 
        GPA = gp; 
}
