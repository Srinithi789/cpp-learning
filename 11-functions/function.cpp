#include<iostream>

using namespace std;

//function declaration

void adding(int x,int y);

static void swapvar(int &x,int &y) {
	int z = y;
	y = x;
	x = z;
}
void array_func(int arraynum[],int size) {
	for (int i = 0; i < size; i++) {
		cout << arraynum[i] << endl;
	}
	int insize = sizeof(arraynum);
	cout << "The size of array inside the function : " << insize << endl;
	int* pointerarr = arraynum;
	cout << "The size of array pointer " << sizeof(pointerarr) << endl; //size of addresss! 64bit 8 bytes 
	cout << "The address of pointer " << pointerarr << endl;
	cout << "The address of first element in the array : " << &arraynum[0] << endl;

	cout << "-----------------------------" << endl;
	cout << "Pointer arithmetic" << endl;
	cout << "-----------------------------" << endl;
	cout << "===========================================\n";
	cout << "| Pointer address    | array address      |" << endl;
	cout << "===========================================\n";

	for (int i = 0; i < size; i++) {
		cout << "|  " << pointerarr << "  |  " << &arraynum[i] <<"  |" << endl;
		pointerarr++;
	}
	cout << "===========================================\n";
	
}
void modifyArray(int myarray[]) {
	myarray[0] = 1000;
}

struct car {
	string name;
	int year;
	int price;
};

int main() {
	//This is the main function:


	int value1 = 10;
	int value2 = 20;
	adding(value1, value2);
	
	cout << "Before swap\n";
	cout << value1 << " " << value2 << endl;

	cout << "After swap \n";
	swapvar(value1, value2);
	cout << value1 << " " << value2 << endl;

	//function passing an array
	cout << "==============================" << endl;
	cout << "Passing Array to the Function" << endl;

	int mynumbers[] = { 1,2,3,4,5,6,7,8 };

	array_func(mynumbers, sizeof(mynumbers) / sizeof(mynumbers[0]));
	int size = sizeof(mynumbers) / sizeof(mynumbers[0]);

	cout << "The size of array in main function : " <<size<<endl;
	cout << "-------------------------------" << endl;
	cout << "MOdify array\n";
	cout << "Before\n";
	cout << "The first element of array : " << mynumbers[0] << endl;
	cout << "After\n";

	modifyArray(mynumbers);

	cout << "The first element of array :  " << mynumbers[0] << endl; 
	//modifying the array inside a function affects the original array beacyse the both main and 
	// modifyfunctions shares the same memory address


	cout << "Passing Structure" << endl;
	cout << "-------------------------------------\n";

	car car1 = { "BmW",2020,20902902 };
	cout << car1.name << endl;
	
}

//function definition
void adding(int x,int y) {
	cout << "This performes addition " << endl;
	cout << x + y<< endl;


}