#include <iostream>
#include <cstring>

using namespace std;

class Employee {
    private:
        int employee_number;
        char name[50];
        double basic;
        double da;
        double it;
        double net_salary;
    public:
        Employee() {
            employee_number = 0;
            strcpy(name, "");
            basic = da = it = net_salary = 0;
        }

        void insert() {
            cout << "Enter employee number: ";
            cin >> employee_number;
            cout << "Enter name: ";
            cin.ignore();
            cin.getline(name, 50);
            cout << "Enter basic salary: ";
            cin >> basic;
            cout << "Enter DA: ";
            cin >> da;
            cout << "Enter IT: ";
            cin >> it;
            net_salary=basic + da - it;
            cout<<"Net salary: "<<net_salary;
        }

        void update() {
            cout << "Enter employee number to update: ";
            int emp_no;
            cin >> emp_no;
            if (emp_no == employee_number) {
                cout << "Enter name: ";
                cin.ignore();
                cin.getline(name, 50);
                cout << "Enter basic salary: ";
                cin >> basic;
                cout << "Enter DA: ";
                cin >> da;
                cout << "Enter IT: ";
                cin >> it;
                net_salary=basic + da - it;
                cout<<"Net salary: "<<net_salary;
            } else {
                cout << "Employee not found!\n";
            }
        }

        void remove() {
            cout << "Enter employee number to remove: ";
            int emp_no;
            cin >> emp_no;
            if (emp_no == employee_number) {
                employee_number = 0;
                strcpy(name, "");
                basic = da = it = net_salary = 0;
                cout << "Employee removed!\n";
            } else {
                cout << "Employee not found!\n";
            }
        }

        void search() {
            cout << "Enter employee number to search: ";
            int emp_no;
            cin >> emp_no;
            if (emp_no == employee_number) {
                cout << "Employee found!\n";
                display();
            } else {
                cout << "Employee not found!\n";
            }
        }

        void display() {
            cout << "Employee Number: " << employee_number << endl;
            cout << "Name: " << name << endl;
            cout << "Basic Salary: " << basic << endl;
            cout << "DA: " << da << endl;
            cout << "IT: " << it << endl;
            net_salary=basic + da - it;
            cout << "Net Salary: " << net_salary << endl;
        }
};

int main() {
    int choice;
    Employee emp;

    do {
        cout<<"\n-----------------------------------------------\n";
        cout << "\nEmployee Database Management System\n";
        cout << "1. Insert\n";
        cout << "2. Update\n";
        cout << "3. Delete\n";
        cout << "4. Search\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        cout<<"\n-----------------------------------------------\n";
        switch (choice) {
            case 1:
                emp.insert();
                break;
            case 2:
                emp.update();
                break;
            case 3:
                emp.remove();
                break;
            case 4:
                emp.search();
                break;
            case 5:
                emp.display();
                break;
            default:
                cout<<"Choice Invaild";
        }
    } while (choice != 6);
    return 0;
}
