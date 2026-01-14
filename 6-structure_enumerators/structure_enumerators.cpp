#include <iostream>
#include <string>

using namespace std;
//struct variables
struct {
	int Id;        //members
	string name;
	float marks;
} student1, student2, student3;  //structure variables

//using struct name
struct student {
	int id;
	string Nam;
	float mark;
};

struct Employees {
	int id;
	string name;
	float salary;

};

int main() {

	//using struct variables
	student1.name="Ganesh";
	student1.marks = 99;
	student1.Id = 1;

	cout << student1.name << endl;
	cout << student1.marks << endl;

	//by using struct name we can create structure variables on the go
	student student4;
	student4.Nam = "mlw";
	cout << student4.Nam << endl;

	cout << "-----------------------" << endl;
	cout << "Task 1" << endl;
	cout << "-----------------------" << endl;
	int n;
	cout << "Enter the number of employess : ";
	cin >> n;
	Employees  Emp[n];
	for (int i = 0; i < n; i++) {
		Cout << "Enter the employee name : ";
		Employees Empname;
		cin >> Empname.name;


	}
	return 0;
}