
#include <iostream>
using namespace std;

class University {
public:
    void universityInfo() {
        cout << "University: BUBT" << endl;
    }
};

class Department : public University {
public:
    void departmentInfo() {
        cout << "Department: CSE" << endl;
    }
};

class Student : public Department {
public:
    int studentId;
    string studentName;

    void studentInfo() {
        cout << "Student ID: " << studentId << endl;
        cout << "Student Name: " << studentName << endl;
    }
};

int main() {
    Student s;

    s.studentId = 20262103195;
    s.studentName = "Lamiya Aktar Mim";

    s.universityInfo();
    s.departmentInfo();
    s.studentInfo();

    return 0;
}

