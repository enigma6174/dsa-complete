/**
 * Problem Statement: Given an array, remove all even integers from it
 * Time: O(n)
 * Space: O(1)
*/

#include <iostream>

using namespace std;

int *remove_even(int *, int);

int main() {
    int *arr = new int[10];

    cout << "before remove even" << endl;
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = remove_even(arr, 10);

    cout << "after remove even" << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete [] arr;
    return 0;
}

int *remove_even(int *arr, int size) {

    // index to track odd numbers
    int idx = 0;

    for (int i = 0; i < size; i++) {
        // replace first even number with odd number
        if (arr[i] % 2 != 0)
            arr[idx++] = arr[i];
    }

    // create new location for temporary array
    // copy the odd numbers to temporary array
    int *temp = new int[idx];
    for (int i = 0; i < idx; i++)
        temp[i] = arr[i];

    // delete the location pointed to by original array
    // assign the location of temporary array
    delete [] arr;
    arr = temp;

    return arr;
}