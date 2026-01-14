#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*A vector in C++ is like a resizable array.

Both vectors and arrays are data structures used to store multiple elements of the same data type.

The difference between an array and a vector, is that the size of an array cannot be modified 
(you cannot add or remove elements from an array).
A vector however, can grow or shrink in size as needed.*/

// vector<type> vectorName

int main(){
	vector <string> fruits = { "Apple", "Banana", "Orange", "Mango", "Grapes","Pineapple", "Papaya", "Pear", "Peach"};
	
	for (string fruit : fruits) {
		cout << fruit << endl;
	}

	int length = fruits.size();
	cout << "-------------------------------" << endl;
	cout <<"The length of vector is : "<< length << endl;
	cout << "-------------------------------" << endl;
	cout << "Using Push-Back Keyword:" << endl;
	cout << "-------------------------------" << endl;
	fruits.push_back("Tesla");
	cout << "Newly added fruits are : " << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "  ";
	for (int i = 0; i < fruits.size(); i++) {
		
		cout<< fruits[i] << " ";
	}
	cout << "\n";
	cout << "----------------------------------------------------------------------" << endl;
	cout << "Using Pop-Back Keyword:" << endl;
	cout << "-------------------------------" << endl;
	//Removes the last element from the vector
	fruits.pop_back();
	cout << "  ";
	for (int j = 0; j < fruits.size(); j++) {

		cout << fruits[j] << " ";
	}
	cout << "\n";
	cout << "-------------------------------" << endl;
	cout << "Accessing using \"at\"" << endl;
	cout << "-------------------------------" << endl;
	cout << fruits.at(0) << endl;
	return 0;
}

