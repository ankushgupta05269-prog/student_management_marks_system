#include<iostream>
#include<string>
using namespace std;

class Student{
    protected:
    string name;
    int roll_no;

public:
void getStudentDetails(){
    cout<<"Enter Student Name:";
    getline(cin>>ws,name);
    cout<<"Enter Roll Number:";
    cin>>roll_no;
}    

void displayStudentDetails()const{
    cout<<"\nStudent Details & Result"<<endl;
    cout<<"Name  :"<<name<<endl;
    cout<<"Roll Number:"<<roll_no<<endl;
}
};
class Result: public Student{
    private:
    float marks;
    string grade;

    public:
    void getMarks(){
        getStudentDetails();
        cout<<"Enter Marks (0-100):";
        cin>>marks;
        calculateGrade();
    }

    void calculateGrade(){
        if (marks>=80 && marks<=100){
            grade ="A";
        }
        else if (marks>=60 && marks <=79){
            grade="B";
        }
        else if (marks >=40 && marks <=59){
            grade="c";
        }
        else if (marks >=0 && marks <40){
            grade="FAIL";
        }
        else{
            grade="Invalid Marks";
        }
    }

    void displayResult() const{
        displayStudentDetails();
        cout<<"Marks  :"<<marks<<endl;
        cout<<"Grade  :"<<grade<<endl;

    }
};

int main(){
    Result StudentResult;

    StudentResult.getMarks();

    StudentResult.displayResult();
    return 0;
}