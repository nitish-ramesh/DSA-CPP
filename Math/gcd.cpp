//
// Created by 91914 on 30-08-2026.
//

#include <iostream>
#include <cmath>
using namespace std;

int gcd(pair<int, int> p) {
    int hcf = 1;
    for (int i = 2; i <= min(p.first, p.second); i++) {

        if (p.first % min(p.first, p.second) == 0 && p.second % min(p.first, p.second) == 0) {
            return min(p.first, p.second);
        }

        if (p.first % i == 0 && p.second % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}

int better(int a, int b) {
    while (a > 0, b > 0) {
        if (a > b)  a = a%b;
        else b = b%a;
    }
    if (a == 0) return b;
    return a;
}

int main() {

    // cout << gcd({20, 40});
    cout << better(20, 40);
    return 0;
}
