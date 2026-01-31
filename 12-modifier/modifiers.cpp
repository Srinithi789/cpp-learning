#include <iostream>

using namespace std;

void count() {
    static int x = 10;  // x is not destroyed Memory remains valid for the entire program
    x++;
    cout << x << endl;;
}

void display() {
    int a = 10;
    a++;
    cout << "The Value of a is " << a << endl;

}

int main() {

    cout << "Type Modifiers and Integer Behavior\n";
    cout << "----------------------------------\n\n";

    // =========================================================
    // 1. Signed Integer Overflow (Undefined Behavior)
    // =========================================================
    // This value is too large for a 32-bit int.
    // Signed integer overflow is UNDEFINED BEHAVIOR in C++.
    // Some compilers may warn, others may not.

    // int num = 22677887989189290;   // Do NOT do this

    // Correct approach:
    long long safeNum = 22677887989189290LL;
    cout << "Long long value: " << safeNum << endl << endl;


    // =========================================================
    // 2. signed char Overflow (Implementation-Defined)
    // =========================================================
    // signed char usually ranges from -128 to 127.
    // Assigning 129 exceeds the range.
    // Result is IMPLEMENTATION-DEFINED (commonly wraps).

    signed char sc = 129;
    cout << "Signed char assigned 129 results in: "
        << static_cast<int>(sc) << endl << endl;


    // =========================================================
    // 3. unsigned char Conversion (Well-Defined)
    // =========================================================
    // Unsigned integers use modulo arithmetic.
    // For an 8-bit unsigned char:
    // -10 mod 256 = 246

    unsigned char uc = -10;
    cout << "Unsigned char assigned -10 results in: "
        << static_cast<int>(uc) << endl << endl;


    // =========================================================
    // 4. Sizes of Integer Types (Platform Dependent)
    // =========================================================
    cout << "Size of short int : " << sizeof(short int) << " bytes\n";
    cout << "Size of int       : " << sizeof(int) << " bytes\n";
    cout << "Size of long int  : " << sizeof(long int) << " bytes\n";
    cout << "Size of long long : " << sizeof(long long) << " bytes\n\n";


    cout << "Type Qualifiers\n";
    cout << "----------------------------------\n\n";

    // =========================================================
    // 1. Const Qualifier
    // =========================================================

    const float pi = 3.14; //This Value cannot be changed

    cout << "The Value of pi is : " << pi << endl;
    //pi = 6.21; //This throws error---> you cannot assign to a varaible that is const 

    // =========================================================
   // 2. Volatile Qualifier
   // =========================================================


    //Need some clarification here

    cout << "Access Modifiers\n";
    cout << "----------------------------------\n\n";

    //Comeback here after classes

    cout << "Static variable in a Function \n";
    cout << "----------------------------------\n\n";

    /*Problem 
    Normally, a function:
        Starts from the beginning
        Forgets everything after returning
        
        But sometimes you want: Function to pause and Resume from the previous state*/

   cout<<"Here we used static keyword"
    for (int i = 0; i < 5; i++) {


        count();
    }

    for (int i = 0; i < 5; i++) {


        display();
    }


    return 0;
}
