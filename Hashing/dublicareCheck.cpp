//
// Created by 91914 on 26-09-2026.
//
#include <iostream>
using namespace std;

bool hasDuplicate(vector<int>& nums) {
    int hash[10] = {0};
    for (int i = 0; i < 10; i++) {
        hash[nums[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        if (hash[i] == 2) return true;
    }

    return false;
}

int main() {

    vector<int> nums = {4, 7, 2, 9, 4, 5};
}
