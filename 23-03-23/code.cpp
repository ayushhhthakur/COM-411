#include <iostream>
#include <string>
using namespace std;

class Course {
 private:
  std::string course_name;
  std::string course_ID;
  std::string semester;
  std::string course_credit;


 public:
  Course(std::string sem, std::string id, std::string n, std::string c)
  {
    semester = sem;
    course_ID = id;
    course_name = n;
    course_credit = c;
  }

  void display()
   {
    std::cout << "\nSemester: " << semester << std::endl;
    std::cout << "Course ID: " << course_ID << std::endl;
    std::cout << "Course Name: " << course_name << std::endl;
    std::cout << "Course Credit: " << course_credit << std::endl;
  }
};

int main() {
    int n;
    std::string semester;
    cout << "Enter the Semester: ";
    cin >> semester;
    cout << "Enter the number of Subjects: ";
    cin >> n;

    Course*courses[n];
  for (int i = 0; i < n; i++) {
  std::string course_name;
  std::string course_ID;
  std::string course_credit;

  std::cout << "\nCourse ID: " ;
  std::cin>> course_ID;

  std::cout << "Course Name: ";
  std::cin>>course_name;

  std::cout << "Course Credit: ";
  std::cin>>course_credit;

  courses[i] = new Course(semester, course_ID, course_name, course_credit);
    }

  cout << "\nDetails of course:" << endl;
    for (int i = 0; i < n; i++) {
        courses[i]->display();
    }

  return 0;
}
