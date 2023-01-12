/**
 * Problem Statement: Given an array and a number 'value' find a pair in the array that adds up to the value.
 * If more than one pair is present then only one pair needs to be returned.
 * If the pair is not present, return the array
 *
 * Time: O(n^2), O(nlogn), O(n)
 * Space: O(n), O(1)
*/

#include <iostream>
#include <algorithm>

using namespace std;

int *two_sum_1(int [], int, int); // O(n^2) time; O(1) space
int *two_sum_2(int [], int, int); // O(nlogn) time; O(1) space
int *two_sum_3(int [], int, int); // O(n) time; O(n) space

int main() {
    int arr[] {1,21,3,14,5,60,7,6};

    int size = 8;
    int sum = 81;

    int *pair = two_sum_2(arr, sum, size);

    cout << "[ ";
    for (int i=0; i < 2; i++)
        cout << pair[i] << " ";
    cout << " ]" << endl;

    return 0;
}

int *two_sum_1(int arr[], int value, int size) {
    bool found = false;
    int *temp = new int[2];

    for (int i=0; i < size; i++) {
        for (int j=i+1; j < size; j++) {
            if (arr[i] + arr[j] == value) {
                temp[0] = arr[i];
                temp[1] = arr[j];
                found = true;
                break;
            }
        }
        if (found) break;
    }
    if (found) arr = temp;
    return arr;
}

int *two_sum_2(int arr[], int value, int size) {

    bool found { false };

    int i { 0 },
        j { size - 1 };

    int *temp = new int[2];

    // sort the array
    sort(arr, arr + size);

    while (i < j) {
        if (arr[i] + arr[j] > value) j--;
        else if (arr[i] + arr[j] < value) i++;
        else {
            temp[0] = arr[i];
            temp[1] = arr[j];
            found = true;
            break;
        }
    }
    if (found) arr = temp;
    return arr;
}