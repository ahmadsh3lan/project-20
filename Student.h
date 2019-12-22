#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student :public Person {
protected:
	int Avg;
	string Institute;
public:
	Student(string name, long int id, int age,int avg,string institute) :Person(name, id, age) {
		Avg = avg;
		Institute = institute;
	}
	void Print() {
		cout << "Name: " << Name << endl;
		cout << "Id: " << Id << endl;
		cout<<"Age: "<< Age << endl;
		cout << "Average: " << Avg << endl;
		cout << "Institute: " << Institute << endl;
	}
};