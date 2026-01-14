#include <iostream>

using namespace std;

int main() {
	cout << "================================" << endl;
	cout << "\tThe average age" << endl;
	cout << "================================" << endl;



	int Ages[] = { 22,23,25,26,28,19,20,22,20,28 };
	int length_arr = sizeof(Ages) / sizeof(Ages[0]);
	float sum = 0;
	for (int i:Ages) {
		sum += i;
	}
	float Average = sum / length_arr;
	cout << "The given array is : "<< endl;
	cout << "[";
	for (int j : Ages) {
		cout << j << ","; 
	}
	cout << "]";
	cout << "\n";
	cout <<"The Average is : " << Average << endl;

	cout << "================================" << endl;
	cout << "\tThe Lowest age" << endl;
	cout << "================================" << endl;

	int lowestAge = Ages[0];

	for (int age : Ages) {
		if (age < lowestAge) {
			lowestAge = age;
		}
	
	}
	cout << "The Lowest age in the group is " << lowestAge << endl;
}