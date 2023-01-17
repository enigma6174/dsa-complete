/**
 * Problem Statement: Given an array find the minimum value in the array
 * Time: O(n)
 * Space: O(1)
*/

#include <iostream>

using namespace std;

int find_min(int [], int);

int main() {
    int size {10};
    int arr[] {-100, 20, -89, 90, -1, 10, -9, 100, -11, 11};

    int min = find_min(arr, size);
    cout << "minimum value: " << min << endl;

    return 0;
}

int find_min(int array [], int size) {
    int min = __INT_MAX__;
    for (int i = 0; i < size; i++) {
        if (array[i] < min) min = array[i];
    }
    return min;
}
