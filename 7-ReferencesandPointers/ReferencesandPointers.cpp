//A reference variable is an alias for an existing variable. It is created using the & operator:
//Note:Both food and meal refer to the same memory location. Changing one affects the other.




#include <iostream>
#include <string>
using namespace std;

int main() {
	string food = "Dosa";
	string &meal = food;

/*But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.
When a variable is created in C++, a memory address is assigned to the variable.And when we assign a value to the variable, it is stored in this memory address.
To access it, use the& operator, and the result will represent where the variable is stored*/


	cout << "This output is from food variable :" << food << " And it is stored in" << &food << endl;
	cout << "This output is from food variable :" << meal << " And it is stored in" << &meal << endl;

	if (&food == &meal) {
		cout << "Then meal is the reference for food" << endl;
	}
	//A pointer however, is a variable that stores the memory address as its value

	string* ptr = &food; //A pointer variable that stores the address of food

	cout << &food << endl; //food variable displaying address
	cout << ptr << endl;//food address displayed using a pointer variable
	cout << ptr << endl; //food value will be displayed

	//string wptr = &food; //without pointer it shows error

	cout << "<=================================" << endl;
	cout << " reference difference" << endl;
	cout << "==================================" << endl;

	int x = 3, y = 4;
	int& ref = x;

	cout << "The value of x and y : " << x <<" " <<y<< " The reference Value is : " << ref << endl;
	cout << "The memory address :" << endl;
	cout << " x  | " << &x << endl;
	cout << " y  | " << &y << endl;
	cout << "ref | " << &ref << endl;

	ref = y; //we changed the reference value we expect x value also changes;

	cout << "The value of x and y : " << x << " " << y << " The reference Value is : " << ref << endl;
	cout << "----------------------" << endl;
	cout << "After" << endl;
	cout << "------------------------" << endl;
	cout << "The memory address :" << endl;
	cout << " x  | " << &x << endl;
	cout << " y  | " << &y << endl;
	cout << "ref | " << &ref << endl;
}