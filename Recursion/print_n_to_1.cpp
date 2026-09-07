//
// Created by 91914 on 07-09-2026.
//
#include <iostream>
using namespace std;

void fn(int i, int n) {
    if (i < 1) return;

    cout << i << endl;

    fn(i-1, n);
}

int main() {

    fn(6, 6);

    return 0;
}
