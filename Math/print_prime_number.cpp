//
// Created by 91914 on 31-08-2026.
//
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> prime(int n) {
    vector<int> v;
    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            v.emplace_back(i);
            n = n / i;
        }else i++;
    }
    return v;
}

int main() {
    vector<int> ans = prime(54);
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    int n = 500/2 - (328-1)/2;
    cout  << n;
    return 0;
}