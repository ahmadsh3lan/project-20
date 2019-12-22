#include <iostream>
#include <string>
#include "Person.h"
#include "Employee.h"
#include "Student.h"
using namespace std;

class WorkingEmployee :public Student,public Employee {
protected:
	bool SameInstitute;
public:
	WorkingEmployee(string name, long int id, int age,float salary, int avg,string institute,bool sameInstitute):Student(name,id,age,avg,institute),Employee(salary){
		SameInstitute = sameInstitute;
	}
	void Print() {
		cout << "Name: " << Student::Name << endl;
		cout << "Id: " << Student::Id << endl;
		cout << "Age: " << Student::Age << endl;
		cout << "Average: " << Student::Avg << endl;
		cout << "Salary: " << Employee::Salary << endl;
	}
};