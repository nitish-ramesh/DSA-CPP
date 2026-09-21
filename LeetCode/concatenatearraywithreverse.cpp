//
// Created by 91914 on 21-09-2026.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> concatWithReverse(vector<int>& nums) {
    int n = nums.size();
    for (int i = n-1; i >= 0; i--) {
        nums.push_back(nums[i]);
    }
}
int main() {

    vector<int> nums = {2,3};
    concatWithReverse(nums);
    for (int x : nums) {
        cout << x << " ";
    }
}
