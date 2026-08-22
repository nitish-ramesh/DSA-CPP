//
// Created by 91914 on 16-08-2026.
//
#include <iostream>
using namespace std;

int main() {

    // int arr[] = {3, 8, 1, 9, 0, 4, 2, 7};
    // int t = 0;
    //
    // int j = 1;
    // int n = sizeof(arr)/sizeof(arr[0]);
    //
    // for (int i = 0; i < n-1; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         if (arr[i] <= arr[j]) {
    //             t = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = t;
    //         }
    //     }
    // }
    // cout << arr[1];


    int arr[] = {-5, -2, -8, -3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int l = INT_MIN;
    int sl = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] != l) {

            if (arr[i] > sl) {
                sl = arr[i];
            }

            if (arr[i] >= l) {
                sl = l;
                l = arr[i];

            }
        }
    }
    cout << sl;

    return 0;
}

// Approach: One-pass
// Time Complexity: O(n)
// Auxiliary Space: O(1)