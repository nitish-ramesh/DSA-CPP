//
// Created by 91914 on 19-09-2026.
//
#include <iostream>
using namespace std;

int romanToInt(string s) {

    int value[256] = {};

    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;


    int ans = 0;
    for (int i = 0; i < s.size()-1; i++) {
        int p = value[s[i]];
        int q = value[s[i+1]];

        if (p >= q) {
            ans += p;
        } else {
            ans -= p;
        }
    }
    ans += value[s.back()];

    return ans;

}

int main() {

    cout << romanToInt("XIX");

    return 0;
}