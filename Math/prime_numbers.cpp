//
// Created by 91914 on 30-08-2026.
//
#include <iostream>
#include <cmath>
#include <set>
using namespace std;

void prime_check (int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }

    }
    if (count == 2) {
        cout << "yes prime number";
    }
    else
        cout << "no its not";
}

void better(int n) {
    int cnt = 0;
    for (int i = 1; i*i <= n; i++) { // here don't do i = 0 because in dr shouldn't have 0 bro
        if (n % i == 0) {
            cnt++;
            if (n/i != i) cnt++;
        }
    }
    if (cnt == 2)cout << "prime number";
    else cout << "no bro";
}

int main() {
    // prime_check(90);
    better(23);
    return 0;
}
