//
// Created by 91914 on 24-09-2026.
//
#include <iostream>
using namespace std;

int fn(int n) {
    if (n < 1) return n; // or n == 0

        return n % 10 + fn(n/10);
}

int main() {
    cout << fn(153);
}
