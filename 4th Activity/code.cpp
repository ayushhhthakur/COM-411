#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string subject1, subject2, subject3;
    int maxMarks = 100, minMarks = 40; // set max marks to 100 and min marks to 40
    int marks1, marks2, marks3;

    void displayResult() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Subject 1: " << subject1 << "\tMarks: " << marks1 << endl;
        cout << "Subject 2: " << subject2 << "\tMarks: " << marks2 << endl;
        cout << "Subject 3: " << subject3 << "\tMarks: " << marks3 << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
        cout << endl;
    }

private:
    float calculatePercentage() {
        float totalMarks = marks1 + marks2 + marks3;
        float maxTotalMarks = maxMarks * 3;
        return (totalMarks / maxTotalMarks) * 100;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student students[numStudents];

    // Input data for each student
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for student " << i+1 << endl;
        cout << "Roll No: ";
        cin >> students[i].rollNo;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Subject 1: ";
        cin >> students[i].subject1;
        cout << "Marks obtained for Subject 1: ";
        cin >> students[i].marks1;
        cout << "Subject 2: ";
        cin >> students[i].subject2;
        cout << "Marks obtained for Subject 2: ";
        cin >> students[i].marks2;
        cout << "Subject 3: ";
        cin >> students[i].subject3;
        cout << "Marks obtained for Subject 3: ";
        cin >> students[i].marks3;
        cout << endl;
    }

    // Display results for each student
    for (int i = 0; i < numStudents; i++) {
        students[i].displayResult();
    }

    return 0;
}
