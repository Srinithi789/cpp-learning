#include <iostream>
#include <string>

using namespace std;

int main() {
	//int sum = 0;
	cout << "==========================" << endl;
	cout << "\tCoutdown" << endl;
	cout << "==========================" << endl;


	for (int i = 5; i > 0; i--) {
		cout << i << endl;
	}
	cout << "==========================" << endl;
	cout << "\tNested Loop" << endl;
	cout << "==========================" << endl;

	for (int i = 1; i <=2 ; i++) {
		cout << "Outer : " << i << endl;
		for (int i = 1; i <= 3; i++) {
			cout << "\tInner : " << i << endl;
		}
	}

	cout << "==========================" << endl;
	cout << " Multiplication Table" << endl;
	cout << "==========================" << endl;

	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			cout << j * i << " ";
		}
		cout << "\n";
	}

	cout << "==========================" << endl;
	cout << "\tFor each loop" << endl;
	cout << "==========================" << endl;
	int numbers[5] = { 1,2,3,4,5 };
	cout << "The given Array is : " << numbers[5] << endl;
	for (int i : numbers) {
		cout << i << endl;
	}
	cout << "==========================" << endl;
	cout << "Number Multiplication" << endl;
	cout << "==========================" << endl;
	int i;
	cout << "Enter a number : ";
	cin >> i;
	for (int j = 1; j <= 12; j++) {
		cout << j << "*" << i << "=" << j * i << endl;
	}

	cout << "==========================" << endl;
	cout << "Array display" << endl;
	cout << "==========================" << endl;

	string phones[5] = { "Apple","Samsung","Redmi","Vivo","Oppo" };
	for (int k = 0; k <5; k++) {
		cout << phones[k] << endl;
	}
	cout << "---------------------------" << endl;
	string cars[5] = { "Toyoto","Suzuki","Mahindra","Bmw","Renault" };
	for (string car : cars) {
		cout << car<<endl;
	}

	return 0;
}