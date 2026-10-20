//
// Created by 91914 on 26-09-2026.
//
#include <iostream>
using namespace std;

int freqencyCnt(int arr[], int n) {
    int hash[6] = {0};
    for (int i = 0; i < 7; i++) {
        hash[arr[i]] ++;
    }
    return hash[n];
}

int main() {
 int arr[] = {1, 2, 3, 1, 2, 1, 5};
 cout << freqencyCnt(arr, 2);
}
