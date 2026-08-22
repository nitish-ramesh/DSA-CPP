//
// Created by 91914 on 19-08-2026.
//
#include <iostream>
using namespace std;

void targetsum() {
    int arr[] = {3, 5, 9, 1, 0, 4};
    int target = 15;
    int n = sizeof(arr)/sizeof(arr[0]);


    int k = 0;
    for (int i= 0; i < n-1; i++) {
        k = arr[i];
        for (int j = i+1; j < n; j++) {
            k = k+arr[j];
            if (k > target) {
                break;
            }
            if (k == target) {
                cout << i << " " << j << endl;
                return;
            }
        }
    }


}

int main() {
    targetsum();
    return 0;
}
