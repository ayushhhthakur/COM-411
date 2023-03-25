#include <iostream>
#include <conio.h>
using namespace std;

class students
{
private:
    string name, fatherName;
    int rollno,marks;

public:
//function to input details
    void input_details(){
    cout<<"\n\nEnter the name of the student: ";
    cin>>name;
    cout<<"Enter the father name of the student: ";
    cin>>fatherName;
    cout<<"Enter the roll no of the student: ";
    cin>>rollno;
    cout<<"Enter the marks of the student: ";
    cin>>marks;
    cout<<endl;
    }
// function to update details
    void update_details()
    {
    int ch;
    cout<<"What do you want to update";
    cout<<"\n1.Name\n2.Fathers Name\n3.Roll No\n4.Marks\n";
    cin>>ch;
    if(ch==1)
    {
    cout<<"Enter the updated name of the student: "; //update name
    cin>>name;
    }
    else if(ch==2)
    {
    cout<<"Enter the updated father name of the student: "; //update fathers name
    cin>>fatherName;
    }
    else if(ch==3)
    {
    cout<<"Enter the updated roll no of the student: "; // update roll no
    cin>>rollno;
    }
    else if(ch==4)
    {
    cout<<"Enter the updated marks of the student: "; // update roll no
    cin>>marks;
    }
    else
    {
        cout<<"Invaild Choice";
    }
    cout<<endl;
    }
//function to display details
    void display_details()
    {
    cout<<"\n\nName of the student: "<<name<<"\nFather name: "<<fatherName<<"\nRoll no of the student: "<<rollno<<"\nMarks of the students"<<marks<<endl;
    cout<<endl;
    getch();
    }
};

int main() {
    int s;
    students p;
// do while loop used
// loop runs untill user enter '4'
    do {
        system("cls");
        cout<<"<===============================================>\n";
        cout << "\tPlease select any option below" << endl;
        cout << "\t1. Enter Details\n\t2. Update Details\n\t3. Display Details\n\t4. Exit\n";
        cin >>s;
        switch(s) {
            case 1:
                system("cls");
                p.input_details();
                break;
            case 2:
                system("cls");
                p.update_details();
                break;
            case 3:
                system("cls");
                p.display_details();
                break;
            case 4:
                exit(1);
            default:
                cout << "Invalid choice\n";
                break;
        }
    } while (s != 4);
}
