#include <iostream>
#include "ArrayList.h"

using namespace std;

void display(ArrayList);

int main () {
    ArrayList array {5};

    cout << "length(array): " << array.length() << endl;
    cout << "inserting 5 elements to array..." << endl;

    array.insert(11);
    array.insert(13);
    array.insert(17);
    array.insert(19);
    array.insert(23);

    display(array);

    cout << "length(array): " << array.length() << endl;

    array.insert(29);
    array.insert(31);
    array.insert(37);

    cout << "array[0] " << array.get_at(0) << endl;
    cout << "array[3] " << array.get_at(3) << endl;
    cout << "array[6] " << array.get_at(6) << endl;
    cout << "array[9] " << array.get_at(9) << endl;

    display(array);

    return 0;
}

void display(ArrayList arr) {
    const int *buffer = arr.get();
    cout << "[ ";
    for (size_t i=0; i < arr.length(); i++) {
        cout << buffer[i] << " ";
    }
    cout << "]" << endl;
}