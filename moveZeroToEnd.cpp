//
// Created by 91914 on 17-08-2026.
//
#include <iostream>
using namespace std;
int main() {

    int arr[] = {5, 0, 4, 0, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n-1; j++) {
            if (arr[j] == 0) {
                int t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;

            }
        }
    }

    for (int  i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}