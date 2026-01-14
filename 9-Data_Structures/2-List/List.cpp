#include <iostream>
#include <list>
#include <string>

using namespace std;

/*
A list in C++ is a doubly linked list.

- No indexing (no list[i])
- Fast insertion and deletion
- Access using iterators
*/

int main() {
    list<string> fruits = { "Apple", "Banana", "Orange", "Mango",
                            "Grapes", "Pineapple", "Papaya", "Pear", "Peach" };

    cout << "Displaying list elements:" << endl;
    for (string fruit : fruits) {
        cout << fruit << endl;
    }

    cout << "-------------------------------" << endl;
    cout << "Length of list : " << fruits.size() << endl;
    cout << "-------------------------------" << endl;

    // INSERT OPERATION
    cout << "Using insert():" << endl;
    cout << "-------------------------------" << endl;

    // Insert at beginning
    fruits.insert(fruits.begin(), "Strawberry");

    // Insert at third position
    auto it = fruits.begin();
    advance(it, 2);   // Move iterator to 3rd position
    fruits.insert(it, "Kiwi");

    cout << "List after insert operations:" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "  ";
    for (string fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;
    cout << "----------------------------------------------------------------------" << endl;

    // ERASE OPERATION
    cout << "Using erase():" << endl;
    cout << "-------------------------------" << endl;

    // Erase first element
    fruits.erase(fruits.begin());

    // Erase element at second position
    it = fruits.begin();
    advance(it, 1);
    fruits.erase(it);

    cout << "List after erase operations:" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "  ";
    for (string fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;
    cout << "----------------------------------------------------------------------" << endl;

    return 0;
}
