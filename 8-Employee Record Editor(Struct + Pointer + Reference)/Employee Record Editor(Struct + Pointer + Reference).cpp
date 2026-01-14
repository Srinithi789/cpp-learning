#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[10];          // array of structures
    Employee* p = emp;         // pointer to structure

    // ---------- INPUT ----------
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "ID: ";
        cin >> (p + i)->id;

        cout << "Name: ";
        cin >> (p + i)->name;

        cout << "Salary: ";
        cin >> (p + i)->salary;
    }

    // ---------- DISPLAY ----------
    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID: " << (p + i)->id << endl;
        cout << "Name: " << (p + i)->name << endl;
        cout << "Salary: " << (p + i)->salary << endl;
    }

    // ---------- REFERENCE DEMO ----------
    cout << "\n--- Reference Demo (First Employee Salary) ---\n";

    float& salRef = emp[0].salary;   // reference to salary

    cout << "Original Salary: " << emp[0].salary << endl;

    salRef += 5000;                  // modify using reference

    cout << "Updated Salary: " << emp[0].salary << endl;

    cout << "Address using struct : " << &emp[0].salary << endl;
    cout << "Address using reference: " << &salRef << endl;

    // ---------- POINTER ARITHMETIC ----------
    cout << "\n--- Pointer Arithmetic Demo ---\n";

    p++;    // move to second employee

    cout << "Second Employee Details:\n";
    cout << "ID: " << p->id << endl;
    cout << "Name: " << p->name << endl;
    cout << "Salary: " << p->salary << endl;

    // ---------- UPDATE ALL SALARIES ----------
    cout << "\n--- Increasing All Salaries by 5% ---\n";

    p = emp;   // reset pointer back to first employee

    for (int i = 0; i < n; i++) {
        (p + i)->salary *= 1.05;
    }

    // ---------- FINAL DISPLAY ----------
    cout << "\n--- Final Employee Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID: " << (p + i)->id << endl;
        cout << "Name: " << (p + i)->name << endl;
        cout << "Salary: " << (p + i)->salary << endl;
    }

    return 0;
}
