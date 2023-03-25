#include<iostream>
using namespace std;

class object
{
private:
    string name;
    int roll_no;
    int grade;

public:
    //parameterized constructor
    object (string n,int r,int g)
    {
    name=n;
    roll_no=r;
    grade=g;
    }
    void display()
    {
        cout<<"\t\t\t\t\tDisplaying Details";
        cout<<"\t\t\t\t\tName: "<<name;
        cout<<"\n\t\t\t\t\tRoll No: "<<roll_no;
        cout<<"\n\t\t\t\t\tGrade: "<<grade<<endl;
    }
};

int main()
{
    string n;
    int r,g;
    cout<<"Enter student details\n";
    cout<<"\t\t\t\tEnter the name of the student: ";
    cin>>n;
    cout<<"\t\t\t\tEnter the roll no of the student: ";
    cin>>r;
    cout<<"\t\t\t\tEnter the grade of the student: ";
    cin>>g;
    object s(n, r, g);
    s.display();
}
