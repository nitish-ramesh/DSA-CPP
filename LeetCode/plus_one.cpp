//
// Created by 91914 on 03-09-2026.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size()-1;
    int count = 0;
    for(int i = n; i >= 0; i--) {
        if(i == n) {
            digits[i] = digits[i] + 1 ;
        }

        digits[i] = digits[i] + count;
        count = 0;

        if(digits[i] == 10) {
            digits[i] = 0;
            count++;
        }
        if(i == 0 && digits[i] == 0) {
            digits[i] = 1;
            digits.emplace_back(0);
        }
    }
    return digits;
}

int main() {
    vector<int> digits = {9};
     vector<int> ans = plusOne(digits);
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
