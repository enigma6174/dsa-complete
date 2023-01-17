/**
 * Problem Statement: Given two sorted arrays, merge them into a single array
 * Time: O(n)
 * Space: O(n)
 */

#include <iostream>

using namespace std;

int *merge_arrays(const int [], const int[] ,int, int);

int main() {

    int size_1 = 9;
    int size_2 = 6;

    int arr1[] {1, 2, 10, 10, 10, 20, 30, 30, 50};
    int arr2[] {3, 10, 10, 20, 30, 30};

    int *arr = merge_arrays(arr1, arr2, size_1, size_2);

    cout << "[ ";
    for (int i = 0; i < size_1 + size_2; i++)
        cout << arr[i] << " ";
    cout << " ]" << endl;

    return 0;
}

int *merge_arrays(const int arr1[], const int arr2[], int m, int n) {

    int *array = new int[m+n]; // initialize new array for storing
    int i = 0, j = 0, k = 0; // indexes for traversing the arrays

    // copy smaller item from array to new array
    while (i < m && j < n) {

        // if current element of first array is less than current element of second array
        if (arr1[i] < arr2[j])
            array[k++] = arr1[i++];

        // if current element of second array is less than current element of first array
        else if (arr2[j] < arr1[i])
            array[k++] = arr2[j++];

        // if both the current elements are equal
        else {
            array[k++] = arr1[i++];
            array[k++] = arr2[j++];
        }
    }

    // copy remaining items of first array
    while (i < m)
        array[k++] = arr1[i++];

    // copy remaining items of second array
    while (j < n)
        array[k++] = arr2[j++];

    return array;
}