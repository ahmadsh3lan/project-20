#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Employee :public Person {
protected:
	float Salary;
public:
	Employee(string name, long int id, int age, float salary) :Person(name, id, age) {
		Salary = salary;
	}
	Employee(float salary){
		Salary = salary;
	}
	void Print() {
		cout << "Name: " << Name << endl;
		cout << "Id: " << Id << endl;
		cout << "Age: " << Age << endl;
		cout << "Salary: " << Salary << endl;
	}
};