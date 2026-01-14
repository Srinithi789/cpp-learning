#include <iostream>
using namespace std;

int main() {
    int choice, r, c;
    const int rows = 5, columns = 5;
    int seats[rows][columns] = { 0 };

    while (true) {
        cout << "\n\tMovie Ticket Booking\n";
        cout << "\t1. View Seats\n";
        cout << "\t2. Book Seat\n";
        cout << "\t3. Exit\n";
        cin >> choice;

        if (choice == 1) {
            cout << "\n\"1\"-booked \"0\"-free\n";
            for (int k = 0; k < columns; k++)
                cout << "\tcol" << k + 1;
            cout << endl;

            for (int i = 0; i < rows; i++) {
                cout << "Row " << i + 1;
                for (int j = 0; j < columns; j++)
                    cout << "\t " << seats[i][j] << " ";
                cout << endl;
            }
        }

        else if (choice == 2) {
            cout << "Enter Row (1-5): ";
            cin >> r;
            cout << "Enter Column (1-5): ";
            cin >> c;

            if (r < 1 || r > rows || c < 1 || c > columns) {
                cout << "Invalid seat number!" << endl;
            }
            else if (seats[r - 1][c - 1] == 1) {
                cout << "Seat already booked!" << endl;
            }
            else {
                seats[r - 1][c - 1] = 1;
                cout << "Seat booked successfully!" << endl;
            }
        }

        else if (choice == 3) {
            break;
        }

        else {
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
