#include <iostream>

using namespace std;

int main() {
	int matrix2d[2][4] = {
		{1,2,3,7},
		{4,5,6,8}
	};
	int elements = sizeof(matrix2d) / sizeof(matrix2d[0][0]);
	cout << "The Total No of elements :" << elements << endl;
	int columns = sizeof(matrix2d[0]) / sizeof(matrix2d[0][0]);

	cout << "The number of columns is : " << columns << endl;
	int rows = elements / columns;
	cout << "The number of rows is : " << rows << endl;
	cout << "---------------------------" << endl;
	cout << "\tDisplaying matrix" << endl;
	cout << "---------------------------" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << matrix2d[i][j] << " ";
		}
		cout <<endl;
	}
	cout << "---------------------------" << endl;
	cout << "\tSum of Elements" << endl;
	cout << "---------------------------" << endl;
	int sumsel = 0;
	for (int r1=0; r1 < rows; r1++) {
		for (int c1=0; c1 < columns; c1++) {
			sumsel += matrix2d[r1][c1];
		}
	}
	cout <<sumsel<<endl;
	cout << "---------------------------" << endl;
	cout << "Sum of Elements row-wise" << endl;
	cout << "---------------------------" << endl;
	int row = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			
			row += matrix2d[i][j];
		
		}
		cout << "Sum of Row " << i << " is : " << row << endl;
		row = 0;
	}
	cout << "---------------------------" << endl;
	cout << "Sum of Elements column-wise" << endl;
	cout << "---------------------------" << endl;
	int column = 0;
	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {

			column += matrix2d[j][i];

		}
		cout << "Sum of column " << i << " is : " << column << endl;
		column = 0;
	}
	cout << "---------------------------" << endl;
	cout << "Adding Two Matrix" << endl;
	cout << "---------------------------" << endl;
	int matrix1[2][2] = { {2,3},{7,8} };
	int matrix2[2][2] = { {3,4},{5,6} };
	int result[2][2];
	//checking for the compatability

	int row1 = sizeof(matrix1) / sizeof(matrix1[0]);
	int row2 = sizeof(matrix2) / sizeof(matrix2[0]);

	int column1 = sizeof(matrix1[0]) / sizeof(matrix1[0][0]);
	int column2 = sizeof(matrix2[0]) / sizeof(matrix2[0][0]);
	
	if (row1 == row2 && column1 == column2) {
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < column1; j++) {
				result[i][j] = matrix1[i][j] + matrix2[i][j];
			}

		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << result[i][j] << " "; //expected output is 5,7,12,14
			}
			cout << endl;
		}
	}
	else {
		cout << "\tThe rows and columns are not matched" << endl;
	}

}