//
// Created by 91914 on 07-09-2026.
//
#include <iostream>
using namespace std;

void fn(int i, int n) {
    if (i > n) {
        return;
    }

    cout << i << endl;
    fn(i+1, n);
}

// TC -> O(n)
// SC -> O(n) // because of stack space

int main() {
    int n;
    cin >> n;
    fn(1, n);

    return 0;
}