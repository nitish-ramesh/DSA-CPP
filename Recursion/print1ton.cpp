//
// Created by 91914 on 21-09-2026.
//
#include <iostream>
using namespace std;

int f(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + f(n-1);
    }
}

int main() {
    int ans = f(3);
    cout << ans;
    return 0;
}
