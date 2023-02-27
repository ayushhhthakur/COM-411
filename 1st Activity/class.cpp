//wap which create and uses array of object of a class (for eg implementing the list of managers of a company having details such as name age etc) in c++
#include <iostream>
using namespace std;

class Manager
{
    public:
        string name;
        int age;
        string company;
};

int main()
{
    int n;
    cout<<"Enter number of managers: ";
    cin>>n;
    Manager *managers = new Manager[n];
    for(int i=0;i<n;i++)
    {
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Enter name of manager "<<i+1<<" : ";
        cin>>managers[i].name;
        cout<<"Enter age of manager "<<i+1<<" : ";
        cin>>managers[i].age;
        cout<<"Enter company of manager "<<i+1<<" : ";
        cin>>managers[i].company;
        cout<<"--------------------------------------------------"<<endl;
    }
    cout<<"\nList of managers \n\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Manager "<<i+1<<" : \nName: "<<managers[i].name<<"\nAge: "<<managers[i].age<<"\nCompany: "<<managers[i].company<<"\n\n";
    }
    return 0;
}
