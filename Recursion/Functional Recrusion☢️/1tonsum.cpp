//
// Created by 91914 on 24-09-2026.
//
#include <iostream>
using namespace std;

int fn(int n) {
    if (n<1) return n;

    return n + fn(n - 1);
}

int main() {
cout << fn(4);

}
