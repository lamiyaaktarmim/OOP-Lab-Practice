
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

class Employee : public Person {
private:
    int employeeId;
    double salary;

public:
    void setEmployeeId(int employeeId) {
        this->employeeId = employeeId;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    int getEmployeeId() {
        return employeeId;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Employee e;

    e.setName("Lamiya");
    e.setAge(20);
    e.setEmployeeId(101);
    e.setSalary(30000);

    cout << "Name: " << e.getName() << endl;
    cout << "Age: " << e.getAge() << endl;
    cout << "Employee ID: " << e.getEmployeeId() << endl;
    cout << "Salary: " << e.getSalary() << endl;

    return 0;
}

