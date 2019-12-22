#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
	string Name;
	long int Id;
	int Age;
public:
	Person();
	Person(string name, long int id, int age) {
		Name = name;
		Id = id;
		Age = age;
	};
	void print() {
		cout << "Name: " << Name << endl;
		cout << "Id: " << Id << endl;
		cout << "Age: " << Age << endl;
	}
};

