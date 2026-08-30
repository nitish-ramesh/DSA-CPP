//
// Created by 91914 on 30-08-2026.
//
#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

// vector<int> all_divisor(int n) {
//     vector<int> v;
//     int i = 2;
//     v.emplace_back(1);
//     do {
//
//         if (n % i == 0) {
//             v.emplace_back(i);
//         }
//         i++;
//     }
//     while (i <= n);
//
//     return v;
// }

set <int> better(int n) {
    set <int> st;
    st.emplace(1);
    int i = 2;
    while (i <= sqrt(n)) { // Time-complexity is O(underroot(n)).
        if (n % i== 0) {
            st.emplace(i);
            st.emplace(n / i);
        }
        i++;
    }
    return st;
}

int main() {
    set <int> ans = better(36);
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
